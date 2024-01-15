/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Harsahbaj Singh
Student ID#: 146457221
Email      : hsna27@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

// ----------------------------------------------------------------------------
// defines/macros
#define MAX_PRODUCTS 3
#define NUMBER_OF_GRAMS 64
#define LBsTOKG 2.20462

// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
    int skuNumber;
    double productPrice;
    int caloriesPer_serve;
    double product_weightPounds;

};

struct ReportData
{
    int skuNumber;
    double productPrice;
    int caloriesPer_serve;
    double product_weightPounds;
    double product_weightKilos;
    int product_weightGrams;
    double total_servings;
    double costPerServing;
    double costCaloriesPerServing;
};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int*);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)

void openingMessage(int);

// 4. Get user input for the details of cat food product

struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table header

void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data

void displayCatFoodData(int, double*, int, double*);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* conversionToKgResult);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* conversionToGResult);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* conversionToKgResult, int* conversionToGResult);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeinGrams, const int totalGrams, double* numberOfServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* product_price, const double* total_numberOfServings, double* resultCostperServe);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* product_price, const double* totalCalories, double* resultCostperCalorie);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cfi);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cfi);

// ----------------------------------------------------------------------------

// 7. Logic entry point

void start(void);