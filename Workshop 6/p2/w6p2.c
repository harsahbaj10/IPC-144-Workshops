/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
Full Name  : Harsahbaj Singh
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MIN_ITEMS 1
#define MAX_ITEMS 10
#define MAX_INCOME 400000.00
#define MIN_INCOME 500.00

int main(void)
{
    // Declaring variables
    double income, total_cost = 0;
    const double min_cost = 100.00;
    int items_in_wishlist, selection, j, i, continue_loop = 1;


    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");

    //Monthly income
    do 
    {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);

        if (income < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }

        if (income > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }

        printf("\n");
    } 
    while (!(income > MIN_INCOME && income < MAX_INCOME));

    // Wishlist Forecast
    do 
    {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &items_in_wishlist);

        if (items_in_wishlist > MAX_ITEMS || items_in_wishlist < MIN_ITEMS)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        printf("\n");
    } 
    while (items_in_wishlist > MAX_ITEMS || items_in_wishlist < MIN_ITEMS);

    // Declaring the Arrays
    double item_price[20];
    int priority[20];
    char finance_options[20];

    // Item details

    for (i = 1; i <= items_in_wishlist; i++)
    {
        printf("Item-%d Details:\n", i);

        // Cost of the items
        do 
        {
            printf("   Item cost: $");
            scanf("%lf", &item_price[i - 1]);

            if (item_price[i - 1] < min_cost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } 
        while (item_price[i - 1] < min_cost);

        // Priority of the items
        do 
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d%*c", &priority[i - 1]);

            if ((priority[i - 1] < 1) || (priority[i - 1] > 3))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } 
        while ((priority[i - 1] < 1) || (priority[i - 1] > 3));

        // Financing options on the items

        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance_options[i - 1]);

            if (!(finance_options[i - 1] == 'n' || finance_options[i - 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } 
        while (!(finance_options[i - 1] == 'n' || finance_options[i - 1] == 'y'));

        printf("\n");
    }

    // Items summary and Total bill
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (j = 1; j <= items_in_wishlist; j++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", j, priority[j - 1], finance_options[j - 1], item_price[j - 1]);
        total_cost += item_price[j - 1];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", total_cost);

    // The menu for forecast of the wishlist
    do
    {
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");

        printf("Selection: ");
        scanf("%d", &selection);
        printf("\n");

        // Variables for the forecasting the wish list
        int item, note = 0;
        int priorityFilter, k;
        double cost_of_items_in_priority = 0, years, months, remaining_months;



        if (selection == 0) 
        {
            continue_loop = 0;
        }

        // For forecasting all the items no filter
        else if (selection == 1) 
        {
            printf("====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%.2lf\n", total_cost);

            //calculations for years and months 
            months = (total_cost / income) + 0.5; // addition of 0.5 for roundup
            years = ((int)months) / 12;
            remaining_months = (months - (years * 12)) + 0.5; // for roundup

            printf("Forecast: %d years, %d months\n", (int)years, (int)remaining_months);

            // loop to check if 'y' is present in finance options 
            note = 0;
            for (item = 0; item < items_in_wishlist; item++)
            {
                if (finance_options[item] == 'y') 
                {
                    note += 1;
                }
            }
            if (note != 0)
            {
                printf("NOTE: Financing options are available on some items.");
                printf("\n      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n");
            printf("\n");
        }


        // For forecasting items by priority 
        else if (selection == 2) 
        {
            printf("What priority do you want to filter by? [1-3]: ");
            scanf("%d", &priorityFilter);
            printf("\n");

            printf("====================================================\n");
            printf("Filter:   by priority (%d)\n", priorityFilter);
            for (k = 0; k < items_in_wishlist; k++)
            {
                if (priority[k] == priorityFilter) 
                {
                    cost_of_items_in_priority += item_price[k];
                }
            }

            // Calculating years and months
            months = (cost_of_items_in_priority / income) + 0.5; // Applying manual rounding
            years = ((int)months) / 12;
            remaining_months = (months - (years * 12)) + 0.5; // Applying manual rounding

            printf("Amount:   $%.2lf\n", cost_of_items_in_priority);
            printf("Forecast: %d years, %d months\n", (int)years, (int)remaining_months);

            // loop to check if 'y' is present in finance options 
            note = 0;
            for (item = 0; item < items_in_wishlist; item++)
            {
                if (finance_options[item] == 'y' && priority[item] == priorityFilter) 
                {
                    note += 1;
                }
            }
            if (note != 0)
            {
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n");
            printf("\n");
        }

        else if (selection < 0 || selection > 2) 
        {
            printf("ERROR: Invalid menu selection.\n");
            printf("\n");
        }

    } 
    while (continue_loop == 1);

    printf("Best of luck in all your future endeavours!\n"); 

    return 0;
}