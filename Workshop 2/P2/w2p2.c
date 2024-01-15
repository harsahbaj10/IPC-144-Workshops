/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : Harsahbaj Singh 
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : IPC 144 ZBB

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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double smallshirt, mediumshirt, largeshirt;
    const int Toonies = 2, Loonies = 1;
    int  Sshirts, Mshirts, Lshirts;
    float patsubtotal, tommysubtotal, sallysubtotal;
    int subtotal;
    int TAXES, pattytax, sallytax, tommytax;
    int Total, pattytotal, sallytotal, tommytotal;
    int Tooniesbalance;
    double Looniesbalance, Quartersbalance, Nicklesbalance;
    double nicklesqty,penniesqty;
    int looniesqty,quartersqty;
    float penniesoutput;
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
    scanf("%d", &Sshirts);
    printf("\nTommy's shirt size is '%c'", tomSize);
    printf("\nNumber of shirts Tommy is buying: ");
    scanf("%d", &Lshirts);
    printf("\nSally's shirt size is '%c'", salSize);
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d", &Mshirts);
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    patsubtotal = Sshirts * smallshirt * 100;
    pattytax = patsubtotal * TAX + 0.5;
    pattytotal = patsubtotal + pattytax;
    printf("\nPatty    %c    %.2lf   %d  %.4lf   %.4lf  %.4lf", patSize, smallshirt, Sshirts, patsubtotal / 100., pattytax / 100., pattytotal / 100.);
    sallysubtotal = Mshirts * mediumshirt * 100;
    sallytax = sallysubtotal * TAX + 0.5;
    sallytotal = sallysubtotal + sallytax;
    printf("\nSally    %c    %.2lf   %d  %.4lf   %.4lf  %.4lf", salSize, mediumshirt, Mshirts, sallysubtotal / 100., sallytax / 100., sallytotal / 100.);
    tommysubtotal = Lshirts * largeshirt * 100;
    tommytax = tommysubtotal * TAX + 0.5;
    tommytotal = tommysubtotal + tommytax;
    printf("\nTommy    %c    %.2lf   %d  %.4lf   %.4lf  %.4lf", tomSize, largeshirt, Lshirts, tommysubtotal / 100., tommytax / 100., tommytotal / 100.);
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    subtotal = patsubtotal + sallysubtotal + tommysubtotal;
    TAXES = sallytax + pattytax + tommytax;
    Total = tommytotal + sallytotal + pattytotal;
    printf("\n                         %.4lf   %.4lf  %.4lf", subtotal / 100., TAXES / 100., Total / 100.);
    printf("\n\nDaily retail sales represented by coins");
    printf("\n=======================================");
    printf("\n\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n              %.4lf", subtotal / 100.);  
    Tooniesbalance = subtotal / 100. - (subtotal / Toonies / 100 * 2);
    printf("\nToonies  %d    %.4lf",subtotal/Toonies/100, (subtotal / 100. - (subtotal / Toonies / 100 * 2)));
    printf("\nLoonies    %d    %.4lf",Tooniesbalance/Loonies, (subtotal / 100. - (subtotal / Toonies / 100 * 2))-Loonies);
    Looniesbalance = (subtotal / 100. - (subtotal / Toonies / 100 * 2)) - Loonies;
    looniesqty = Looniesbalance / 0.25;
    printf("\nQuarters   %.lf    %.4lf", Looniesbalance / 0.25, Looniesbalance-looniesqty*0.25);
    Quartersbalance = Looniesbalance - looniesqty * 0.25;
    quartersqty = Quartersbalance / 0.10;
    printf("\nDimes      %.lf    %.4lf", Quartersbalance/0.05, Quartersbalance);
    Quartersbalance = Looniesbalance - looniesqty * 0.25;
    quartersqty = Quartersbalance / 0.10;
    Nicklesbalance = Quartersbalance - (quartersqty * 0.05);
    nicklesqty = Nicklesbalance / 0.05;
    printf("\nNickels    %.lf    %.4lf", nicklesqty, Nicklesbalance);
    penniesoutput = 0;
    penniesqty = Nicklesbalance / 0.01;
    printf("\nPennies    %.lf    %.4lf", penniesqty,penniesoutput);
    printf("\n\nAverage cost/shirt: $%.4lf", subtotal / 100./(Sshirts + Mshirts + Lshirts));
    printf("\n\nSales INCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n              %.4lf", Total / 100.);
    Tooniesbalance = Total / 100. - (Total / Toonies / 100 * 2);
    printf("\nToonies  %d    %.4lf", Total / Toonies / 100, (Total / 100. - (Total / Toonies / 100 * 2)));
    printf("\nLoonies    %d    %.4lf", Tooniesbalance / Loonies, (Total / 100. - (Total / Toonies / 100 * 2)) - Loonies);
    Looniesbalance = (Total / 100. - (Total / Toonies / 100 * 2)) - Loonies;
    looniesqty = Looniesbalance / 0.25;
    printf("\nQuarters   %.lf    %.4lf", Looniesbalance / 0.25, Looniesbalance - looniesqty * 0.25);
    Quartersbalance = Looniesbalance - (looniesqty * 0.25);
    quartersqty = Quartersbalance /10/100;
    printf("\nDimes      %.lf    %.4lf", Quartersbalance/10/100, Quartersbalance);
    Nicklesbalance = Quartersbalance - (quartersqty * 0.05)-0.05;
    nicklesqty = Nicklesbalance / 0.05+0.5;
    printf("\nNickels    %.lf    %.4lf", nicklesqty, Nicklesbalance);
    penniesqty = Nicklesbalance / 0.01;
    printf("\nPennies    %.lf    %.4lf", penniesqty,penniesoutput);
   
    printf("\n\nAverage cost/shirt: $%.4lf", Total / 100. / (Sshirts + Mshirts + Lshirts));
    printf("\n");
    return 0;
}