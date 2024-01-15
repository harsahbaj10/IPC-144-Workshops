/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    //variables for the type of coffee 
    char coffeetype1, coffeetype2, coffeetype3,creamsuggestion1,creamsuggestion2,creamsuggestion3;//variables declared coffee type and cream suggestion 
    int bagweight1, bagweight2, bagweight3;//variables for coffee package weight
    //variables for customer preferences 
    char coffeestrength, withcream;
    int dailyservings;

    printf("Take a Break - Coffee Shop");
    printf("\n==========================");
    printf("\n\nEnter the coffee product information being sold today...");
    printf("\n\nCOFFEE-1...");
    printf("\nType ([L]ight,[M]edium,[R]ich): "); 
    scanf("%c%*c", &coffeetype1);
    printf("Bag weight (g): ");
    scanf("%d%*c", &bagweight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c%*c", &creamsuggestion1);
    printf("\nCOFFEE-2...");
    printf("\nType ([L]ight,[M]edium,[R]ich): ");
    scanf("%c%*c", &coffeetype2);
    printf("Bag weight (g): ");
    scanf("%d%*c", &bagweight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c%*c", &creamsuggestion2);
    printf("\nCOFFEE-3...");
    printf("\nType ([L]ight,[M]edium,[R]ich): "); 
    scanf("%c%*c", &coffeetype3);
    printf("Bag weight (g): ");
    scanf("%d%*c", &bagweight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c%*c", &creamsuggestion3);

    printf("\n---+------------------------+---------------+-------+");
    printf("\n   |    Coffee              |   Packaged    | Best  |");
    printf("\n   |     Type               |  Bag Weight   | Served|");
    printf("\n   +------------------------+---------------+ With  |");
    printf("\nID | Light | Medium | Rich  |  (G) | Lbs    | Cream |");
    printf("\n---+------------------------+---------------+-------|");

    printf("\n 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", coffeetype1 =='l'||coffeetype1=='L',coffeetype1=='m'||coffeetype1=='M',coffeetype1=='r'||coffeetype1=='R',
        bagweight1,bagweight1/GRAMS_IN_LBS,creamsuggestion1=='y'||creamsuggestion1=='Y');

    printf("\n 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", coffeetype2 == 'l' || coffeetype2 == 'L', coffeetype2 == 'm' || coffeetype2 == 'M', coffeetype2 == 'r' || coffeetype2 == 'R',
        bagweight2, bagweight2 / GRAMS_IN_LBS, creamsuggestion2 == 'y' ||creamsuggestion2== 'Y');

    printf("\n 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", coffeetype3 == 'l' || coffeetype3 == 'L', coffeetype3 == 'm' || coffeetype3 == 'M', coffeetype3 == 'r' || coffeetype3 == 'R',
        bagweight3, bagweight3 / GRAMS_IN_LBS, creamsuggestion3 == 'y' ||creamsuggestion3== 'Y');

    printf("\n\nEnter how you like your coffee...");
    printf("\n\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf("%c%*c",&coffeestrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf("%c%*c", &withcream);
    printf("Typical number of daily servings: ");
    scanf("%d%*c", &dailyservings);

    printf("\nThe below table shows how your preferences align to the available products:");
    printf("\n\n--------------------+-------------+-------+");
    printf("\n  |     Coffee      |  Packaged   | With  |");
    printf("\nID|      Type       | Bag Weight  | Cream |");
    printf("\n--+-----------------+-------------+-------+");
    printf("\n 1|       %d         |      %d      |   %d   |", coffeestrength == 'l' || coffeestrength == 'L',dailyservings<=4,withcream == 'y' || withcream == 'Y');
    printf("\n 2|       %d         |      %d      |   %d   |", coffeestrength == 'r' || coffeestrength == 'R', dailyservings >= 5 && dailyservings <= 9, withcream == 'n' || withcream == 'N');
    printf("\n 3|       %d         |      %d      |   %d   |", coffeestrength == 'm' || coffeestrength == 'M',dailyservings>=10,withcream == 'n' || withcream == 'N');

    printf("\n\nEnter how you like your coffee...");
    printf("\n\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf("%c%*c", &coffeestrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf("%c%*c", &withcream);
    printf("Typical number of daily servings: ");
    scanf("%d%*c", &dailyservings);

    printf("\nThe below table shows how your preferences align to the available products:");
    printf("\n\n--------------------+-------------+-------+");
    printf("\n  |     Coffee      |  Packaged   | With  |");
    printf("\nID|      Type       | Bag Weight  | Cream |");
    printf("\n--+-----------------+-------------+-------+");
    printf("\n 1|       %d         |      %d      |   %d   |", coffeestrength == 'l' || coffeestrength == 'L', dailyservings <= 4, withcream == 'y' || withcream == 'Y');
    printf("\n 2|       %d         |      %d      |   %d   |", coffeestrength == 'r' || coffeestrength == 'R', dailyservings >= 5 && dailyservings <= 9, withcream == 'n' || withcream == 'N');
    printf("\n 3|       %d         |      %d      |   %d   |", coffeestrength == 'm' || coffeestrength == 'M', dailyservings >= 10, withcream == 'n' || withcream == 'N');

    printf("\n\nHope you found a product that suits your likes!\n");
   

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/