/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #5 (P1)
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

int main(void)
{
	const int JAN = 1;
    const int DEC = 12;
	int year, month;
	printf("General Well-being Log");
	printf("\n======================\n");
	do
	{
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
		if (year > MAX_YEAR|| year < MIN_YEAR)
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
	

	switch (month)
	{
	case 1:
		printf("\nLog starting date: %d-JAN-01\n", year);
		break;

	case 2:
		printf("\nLog starting date: %d-FEB-01\n", year);
		break;

	case 3:
		printf("\nLog starting date: %d-MAR-01\n", year);
		break;

	case 4:
		printf("\nLog starting date: %d-APR-01\n", year);
		break;

	case 5:
		printf("\nLog starting date: %d-MAY-01\n", year);
		break;

	case 6:
		printf("\nLog starting date: %d-JUN-01\n", year);
		break;

	case 7:
		printf("\nLog starting date: %d-JUL-01\n", year);
		break;

	case 8:
		printf("\nLog starting date: %d-AUG-01\n", year);
		break;

	case 9:
		printf("\nLog starting date: %d-SEP-01\n", year);
		break;

	case 10:
		printf("\nLog starting date: %d-OCT-01\n", year);
		break;

	case 11:
		printf("\nLog starting date: %d-NOV-01\n", year);
		break;

	case 12:
		printf("\nLog starting date: %d-DEC-01\n", year);
		break;


	default:
		printf("\n");

	}



	return 0;
}