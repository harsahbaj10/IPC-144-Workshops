/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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
#define MAX_INCOME 400000.00
#define MIN_INCOME 500.00
#define MAX_ITEMS 10
#define MIN_ITEMS 1

double income,total_cost=0;
int items_in_wishlist=0, i;
const double min_cost = 100.00;


int main(void)
{

    printf("+--------------------------+");
    printf("\n+   Wish List Forecaster   |");
    printf("\n+--------------------------+");
    //Monthly Income 
    do
    {
        printf("\n\nEnter your monthly NET income: $");
        scanf("%lf", &income);
        if (income < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00");
        }
        else if (income > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");
        }


    } while (income > MAX_INCOME || income < MIN_INCOME);

    //Wishlist forecast
    do
    {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &items_in_wishlist);
        if (items_in_wishlist > MAX_ITEMS || items_in_wishlist < MIN_ITEMS)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");

        }

    } while (items_in_wishlist > MAX_ITEMS || items_in_wishlist < MIN_ITEMS);
    
    //Declaring the Arrays
    double item_price[20];
    int priority[20];
    char finance_options[20];

    //Item details

    for (i = 0; i < items_in_wishlist; i++)
    {
        printf("\nItem-%d Details:", i + 1);
       
        //Cost of the items
        do
        {
            printf("\n   Item cost: $");
            scanf("%lf", &item_price[i+1]);

            if (item_price[i+1] < min_cost)
            {
                printf("      ERROR: Cost must be at least $100.00");
              
            }

        } while (item_price[i+1]<100);

        //Priority of the items 
        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d%*c", &priority[i + 1]);
            if (priority[i+1] < 1 || priority[i+1]>3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");

            }

        } while (priority[i+1]<1||priority[i+1]>3);

        //Finance options on the items 

        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf("%c%*c", &finance_options[i + 1]);
            if (!(finance_options[i + 1] == 'n' || finance_options[i + 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }

        } while (!(finance_options[i + 1] == 'n' || finance_options[i + 1] == 'y'));

    }

    // Items summary and Total bill
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < items_in_wishlist; i++)
    {
     
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i + 1], finance_options[i + 1], item_price[i + 1]);
        total_cost += item_price[i + 1];
    }
    printf("---- -------- -------- -----------\n"); 
    printf("                      $%11.2lf\n\n",total_cost);



    printf("Best of luck in all your future endeavours!\n");

    return 0;
}