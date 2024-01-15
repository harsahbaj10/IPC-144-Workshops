/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Harsahbaj Singh
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples_needed, oranges_needed, pears_needed, tomatoes_needed, cabbages_needed;//Variables for choosing the grocery items.
    int apples_incart,oranges_incart,pears_incart,tomatoes_incart,cabbages_incart, quitshopping=0;//variables for the number of items in the shopping cart
    do
    {
        printf("Grocery Shopping");
        printf("\n================");//loops for shopping items to be selected 
        printf("\nHow many APPLES do you need? : ");
        scanf("%d%*c", &apples_needed);
        
        while (apples_needed<0)
        {
            printf("ERROR: Value must be 0 or more.");
            printf("\nHow many APPLES do you need? : ");
            scanf("%d%*c", &apples_needed);
        }
        printf("\nHow many ORANGES do you need? : ");
        scanf("%d%*c", &oranges_needed);
        
        while (oranges_needed < 0)
        {
            printf("ERROR: Value must be 0 or more.");
            printf("\nHow many ORANGES do you need? : ");
            scanf("%d%*c", &oranges_needed);
        }
        printf("\nHow many PEARS do you need? : ");
        scanf("%d%*c", &pears_needed);
        
        while (pears_needed < 0)
        {
            printf("ERROR: Value must be 0 or more.");
            printf("\nHow many PEARS do you need? : ");
            scanf("%d%*c", &pears_needed);
        }
        printf("\nHow many TOMATOES do you need? : ");
        scanf("%d%*c", &tomatoes_needed);
        
        while (tomatoes_needed < 0)
        {
            printf("ERROR: Value must be 0 or more.");
            printf("\nHow many TOMATOES do you need? : ");
            scanf("%d%*c", &tomatoes_needed);
        }
        printf("\nHow many CABBAGES do you need? : ");
        scanf("%d%*c", &cabbages_needed);
        
        while (cabbages_needed < 0)
        {
            printf("ERROR: Value must be 0 or more.");
            printf("\nHow many CABBAGES do you need? : ");
            scanf("%d%*c", &cabbages_needed);
        }
        
        
        do
        {
            printf("\n--------------------------");
            printf("\nTime to pick the products!");
            printf("\n--------------------------\n");
            //loops for picking up of the items
            while (apples_needed > 0)
            {
                printf("\nPick some APPLES... how many did you pick? : ");
                scanf("%d", &apples_incart);
                
                if (apples_incart > apples_needed)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.", apples_needed);
                }

                else if (apples_incart <= 0)
                {
                    printf("ERROR: You must pick at least 1!");
                }

                else if ((apples_incart < apples_needed) && (apples_incart > 0))
                {
                    printf("Looks like we still need some APPLES...");
                    apples_needed = apples_needed - apples_incart;
                }

                else if (apples_incart == apples_needed)
                {
                    printf("Great, that's the apples done!\n");
                    break;
                }
            }
            
            while (oranges_needed > 0)
            {
                printf("\nPick some ORANGES... how many did you pick? : ");
                scanf("%d", &oranges_incart);

                if (oranges_incart > oranges_needed)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.", oranges_needed);
                }

                else if (oranges_incart <= 0)
                {
                    printf("ERROR: You must pick at least 1!");
                }

                else if ((oranges_incart < oranges_needed) && (oranges_incart > 0))
                {
                    printf("Looks like we still need some ORANGES...");
                    oranges_needed = oranges_needed - oranges_incart;
                }

                else if (oranges_incart == oranges_needed)
                {
                    printf("Great, that's the oranges done!\n");
                    break;
                }
            }

            while (pears_needed > 0)
            {
                printf("\nPick some PEARS... how many did you pick? : ");
                scanf("%d", &pears_incart);

                if (pears_incart > pears_needed)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.", pears_needed);
                }

                else if (pears_incart <= 0)
                {
                    printf("ERROR: You must pick at least 1!");
                }

                else if ((pears_incart < pears_needed) && (pears_incart > 0))
                {
                    printf("Looks like we still need some PEARS...");
                    pears_needed = pears_needed - pears_incart;
                }

                else if (pears_incart == pears_needed)
                {
                    printf("Great, that's the pears done!\n");
                    break;
                }
            }         
            
            while (tomatoes_needed > 0)
            {
                printf("\nPick some TOMATOES... how many did you pick? : ");
                scanf("%d", &tomatoes_incart);

                if (tomatoes_incart > tomatoes_needed)
                {
                    printf("You picked too many... only %d more TOMATO(ES) are needed.", tomatoes_needed);
                }

                else if (tomatoes_incart <= 0)
                {
                    printf("ERROR: You must pick at least 1!");
                }

                else if ((tomatoes_incart < tomatoes_needed) && (tomatoes_incart > 0))
                {
                    printf("Looks like we still need some TOMATOES...");
                    tomatoes_needed = tomatoes_needed - tomatoes_incart;
                }

                else if (tomatoes_incart == tomatoes_needed)
                {
                    printf("Great, that's the tomatoes done!\n");
                    break;
                }
            }
            
            while (cabbages_needed > 0)
            {
                printf("\nPick some CABBAGES... how many did you pick? : ");
                scanf("%d", &cabbages_incart);

                if (cabbages_incart > cabbages_needed)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.", cabbages_needed);
                }

                else if (cabbages_incart <= 0)
                {
                    printf("ERROR: You must pick at least 1!");
                }

                else if ((cabbages_incart < cabbages_needed) && (cabbages_incart > 0))
                {
                    printf("Looks like we still need some CABBAGES...");
                    cabbages_needed = cabbages_needed - cabbages_incart;
                }

                else if (cabbages_incart == cabbages_needed)
                {
                    printf("Great, that's the cabbages done!\n");
                    break;
                }
            }
            
            printf("\nAll the items are picked!");
            printf("\n\nDo another shopping? (0=NO): ");
            scanf("%d%*c", &quitshopping);
            printf("\n");
            break;
        }    
        
        while (quitshopping!=0);



        
    } 
    while (quitshopping!=0);
    printf("Your tasks are done for today - enjoy your free time!\n");
   

    return 0;
}