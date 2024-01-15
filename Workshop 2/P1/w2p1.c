/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Harsahbaj Singh
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : IPC144 ZBB

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    double smallshirt, mediumshirt, largeshirt;
    int  shirts;
    int subtotal;
    int TAXES;
    int Total;
    printf("Set Shirt Prices");
    printf("\n================");
    printf("\nEnter the price for a SMALL shirt: $");
    scanf("%lf", &smallshirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumshirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeshirt);
    printf("\nShirt Store Price List");
    printf("\n======================");
    printf("\nSMALL  : $%.2lf", smallshirt);
    printf("\nMEDIUM : $%.2lf", mediumshirt);
    printf("\nLARGE  : $%.2lf", largeshirt);
    printf("\n\nPatty's shirt size is '%c'", patSize);
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &shirts);
    printf("\nPatty's shopping cart...");
    printf("\nContains : %d", shirts);
    printf(" shirts");
    subtotal = shirts * smallshirt * 100;
    TAXES = subtotal * TAX + 0.5;
    Total = subtotal + TAXES;

    printf("\nSub-total: $%.4lf", subtotal/100.);
    printf("\nTaxes    : $ %.4lf", TAXES/100.);
    printf("\nTotal    : $%.4lf", Total/100.);
    printf("\n");


    return 0;
}