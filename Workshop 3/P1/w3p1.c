/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Harsahbaj Singh
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int productID_1 = 111, productID_2 = 222, productID_3 = 111;
    const double price_1 = 111.49, price_2 = 222.99, price_3 = 334.49;
    const char Taxproduct_1 = 'Y', Taxproduct_2 = 'N', Taxproduct_3 = 'N';
    double averageprice = (price_1 + price_2 + price_3) / 3;

    printf("Product Information");
    printf("\n===================");
    printf("\nProduct-1 (ID:%d)", productID_1);
    printf("\n  Taxed: %c", Taxproduct_1);
    printf("\n  Price: $%.4lf", price_1);
    printf("\n\nProduct-2 (ID:%d)", productID_2);
    printf("\n  Taxed: %c", Taxproduct_2);
    printf("\n  Price: $%.4lf", price_2);
    printf("\n\nProduct-3 (ID:%d)",productID_3);
    printf("\n  Taxed: %c", Taxproduct_3);
    printf("\n  Price: $%.4lf", price_3);
    printf("\n\nThe average of all prices is: $%.4lf",averageprice);
    printf("\n\nAbout Relational and Logical Expressions!");
    printf("\n========================================");
    printf("\n1. These expressions evaluate to TRUE or FALSE");
    printf("\n2. FALSE: is always represented by integer value 0");
    printf("\n3. TRUE : is represented by any integer value other than 0");
    printf("\n\nSome Data Analysis...");
    printf("\n=====================");
    printf("\n1. Is product 1 taxable? -> %d", Taxproduct_1 == 'Y');
    printf("\n\n2. Are products 2 and 3 both NOT taxable (N)? -> %d", Taxproduct_2 == 'N' && Taxproduct_3 == 'N');
    printf("\n\n3. Is product 3 less than testValue ($%.2lf)? -> %d",testValue, price_3 < testValue);
    printf("\n\n4. Is the price of product 3 more than both product 1 and 2 combined? -> %d", price_3 > price_1 + price_2);
    printf("\n\n5. Is the price of product 1 equal to or more than the price difference");
    printf("\n   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)", price_1 >= price_3 - price_2, price_3 - price_2);
    printf("\n\n6. Is the price of product 2 equal to or more than the average price? -> %d", price_2 >= averageprice);
    printf("\n\n7. Based on product ID, product 1 is unique -> %d", productID_1 != productID_2 && productID_1 != productID_3);
    printf("\n\n8. Based on product ID, product 2 is unique -> %d", productID_2 != productID_1 && productID_2 != productID_3);
    printf("\n\n9. Based on product ID, product 3 is unique -> %d", productID_3 != productID_1 && productID_3 != productID_2);






    printf("\n");
    return 0;
}