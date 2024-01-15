/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
		const int JAN = 1;
		const int DEC = 12;
		int year, month,log_days;
		double morning_rating,evening_rating;
		double morning_rating_sum=0, evening_rating_sum=0,overall_total_rating=0;
		printf("General Well-being Log");
		printf("\n======================\n");
		do
		{
			printf("Set the year and month for the well-being log (YYYY MM): ");
			scanf("%d %d", &year, &month);
			if (year > MAX_YEAR || year < MIN_YEAR)
			{
				printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

			}
			if (month < JAN || month>DEC)
			{
				printf("   ERROR: Jan.(1) - Dec.(12)\n");
			}

		} while (month > DEC || month < JAN || year < MIN_YEAR || year > MAX_YEAR);
		{
			printf("\n*** Log date set! ***\n");

		}
		//For loop for displaying morning and evening rating part 
		for (log_days = 01; log_days <= LOG_DAYS; log_days++)
		{

	    
			//Loop for displaying month names taken from part 1 of workshop 5
			switch (month)
			{
			case 1:
				printf("\n%d-JAN-0%d\n", year,log_days);
				break;

			case 2:
				printf("\n%d-FEB-0%d\n", year, log_days);
				break;

			case 3:
				printf("\n%d-MAR-0%d\n", year, log_days);
				break;

			case 4:
				printf("\n%d-APR-0%d\n", year, log_days);
				break;

			case 5:
				printf("\n%d-MAY-0%d\n", year, log_days);
				break;

			case 6:
				printf("\n%d-JUN-0%d\n", year, log_days);
				break;

			case 7:
				printf("\n%d-JUL-0%d\n", year, log_days);
				break;

			case 8:
				printf("\n%d-AUG-0%d\n", year, log_days);
				break;

			case 9:
				printf("\n%d-SEP-0%d\n", year, log_days);
				break;

			case 10:
				printf("\n%d-OCT-0%d\n", year, log_days);
				break;

			case 11:
				printf("\n%d-NOV-0%d\n", year, log_days);
				break;

			case 12:
				printf("\n%d-DEC-0%d\n", year, log_days);
				break;


		
   		    }
			//Morning rating
			printf("   Morning rating (0.0-5.0): ");
			scanf("%lf", &morning_rating);
			while (morning_rating < 0 || morning_rating>5)
			{
				printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
				printf("   Morning rating (0.0-5.0): ");
				scanf("%lf", &morning_rating);
			}
			//Evening rating
			printf("   Evening rating (0.0-5.0): ");
			scanf("%lf", &evening_rating);
			while (evening_rating < 0 || evening_rating>5)
			{
				printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
				printf("   Evening rating (0.0-5.0): ");
				scanf("%lf", &evening_rating);
			}
			morning_rating_sum += morning_rating;
			evening_rating_sum += evening_rating;
			overall_total_rating = morning_rating_sum + evening_rating_sum;
		}

		printf("\nSummary");
		printf("\n=======");

		//Total ratings

		printf("\nMorning total rating: %.3lf",morning_rating_sum);
		printf("\nEvening total rating:  %.3lf",evening_rating_sum);
		printf("\n----------------------------");
		printf("\nOverall total rating: %.3lf", overall_total_rating);

		//Average of total ratings
		printf("\n\nAverage morning rating:  %.1lf", morning_rating_sum / 3);
		printf("\nAverage evening rating:  %.1lf", evening_rating_sum / 3);
		printf("\n----------------------------");
		printf("\nAverage overall rating:  %.1lf\n", overall_total_rating / 6);


    return 0;
}

