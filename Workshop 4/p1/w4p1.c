/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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
    int number, repeatloop;
    char iteration;
    printf("+----------------------+");
    printf("\nLoop application STARTED");
    printf("\n+----------------------+");

    do
    {
        printf("\n\nD = do/while | W = while | F = for | Q = quit");
        printf("\nEnter loop type and the number of times to iterate (Quit=Q0): ");
        scanf("%c%d%*c", &iteration, &number);
        if (iteration == 'D')
        {
            if (number >= 3 && number <= 20)
            {
                repeatloop = 0;
                printf("DO-WHILE: ");
                do
                {
                    printf("%c", iteration);
                    repeatloop++;
                } while (repeatloop < number);
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!");

            }
        }            
        else if (iteration == 'W')
        {
            if (number >= 3 && number <= 20)
            {
                repeatloop = 0;
                printf("WHILE   : ");
                do
                {
                    printf("%c", iteration);
                    repeatloop++;
                } while (repeatloop < number);
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!");

            }
        }
        else if (iteration == 'F')
        {
            if (number >= 3 && number <= 20)
            {
                repeatloop = 0;
                printf("FOR     : ");
                do
                {
                    printf("%c", iteration);
                    repeatloop++;
                } while (repeatloop < number);
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!");

            }
        }
        else if (iteration == 'Q')
        {
            if (number == 0) {
                printf("\n+--------------------+");
                printf("\nLoop application ENDED");
                printf("\n+--------------------+");
            }
            else
                printf("ERROR: To quit, the number of iterations should be 0!");
        }
        else
        {
            printf("ERROR: Invalid entered value(s)!");
        }



    }
    while (iteration != 'Q' || number != 0);
    printf("\n");
    


    return 0;
}