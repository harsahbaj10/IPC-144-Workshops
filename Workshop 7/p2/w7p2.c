/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
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
#define MAXPATHLENGTH 70
#define MINPATHLENGTH 10
#define MAXLIVES 10
#define MINLIVES 1

// User-defined data type for the player
struct PlayerInfo
{
    int nLives;
    char playersymbol;
    int treasuresFound;
    int positionHistory[MAXPATHLENGTH];
};

// User defined data type for the Game info
struct GameInfo
{
    int maxmoves;
    int pathlength;
    int bombs[MAXPATHLENGTH];
    int buriedTreasures[MAXPATHLENGTH];
};

int main(void)
{

    //Allocating the memory to player and game
    struct PlayerInfo player;
    struct GameInfo game;

    //Variables in Part 2
    int movesRemaining, livesRemaining, movePosition = MAXPATHLENGTH + 1;
    // Declaring variables used in the 'for' loop
    int i, j, k;

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n");

    // Player Configuration
    printf("\nPLAYER Configuration\n");
    printf("--------------------");
    printf("\nEnter a single character to represent the player: ");
    scanf("%c%*c", &player.playersymbol);

    // Loop used to set the number of lives
    do
    {
        printf("Set the number of lives: ");
        scanf("%d%*c", &player.nLives);
        if (player.nLives > MAXLIVES || player.nLives < MINLIVES)
        {
            printf("     Must be between 1 and 10!\n");
        }

    } while (player.nLives > MAXLIVES || player.nLives < MINLIVES);

    printf("Player configuration set-up is complete\n\n");

    // Game Coniguration
    printf("GAME Configuration\n");
    printf("------------------\n");

    //Loop used for setting the Path length 

    do
    {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d%*c", &game.pathlength);
        if (game.pathlength > MAXPATHLENGTH || game.pathlength < MINPATHLENGTH || game.pathlength % 5 != 0)
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }

    } while (game.pathlength > MAXPATHLENGTH || game.pathlength < MINPATHLENGTH || game.pathlength % 5 != 0);

    //Loop used for setting the moves limit

    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.maxmoves);

        if (game.maxmoves < player.nLives || game.maxmoves >(int) (0.75 * game.pathlength))
        {
            printf("    Value must be between %d and %d\n", player.nLives, (int)(0.75 * game.pathlength));
        }
    } while (game.maxmoves < player.nLives || game.maxmoves >(int) (0.75 * game.pathlength));


    //Bomb placement

    printf("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",game.pathlength);

    //The logic in a for loop for bomb placement 

    for (i = 0; i < game.pathlength; i += 5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        scanf("%d %d %d %d %d", &game.bombs[i], &game.bombs[i + 1], &game.bombs[i + 2], &game.bombs[i + 3], &game.bombs[i + 4]);
    }

    printf("BOMB placement set\n");
    printf("\n");

    //Treasure Placement 

    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",game.pathlength);

    //The logic in a for loop for treasure placement 

    for (i = 0; i < game.pathlength; i += 5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        scanf("%d %d %d %d %d", &game.buriedTreasures[i], &game.buriedTreasures[i + 1], &game.buriedTreasures[i + 2], &game.buriedTreasures[i + 3], &game.buriedTreasures[i + 4]);
    }

    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");

    //The treasure hunt configuration settings
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    //Details of the player
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.playersymbol);
    printf("   Lives      : %d\n", player.nLives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");

    //Details of the game
    printf("Game:\n");
    printf("   Path Length: %d\n", game.pathlength);

    // The placement of bombs
    printf("   Bombs      : ");
    //Displaying the placement of bombs using a for loop
    for (j = 0; j < game.pathlength; j++)
    {
        printf("%d", game.bombs[j]);
    }
    printf("\n");

    // The placement of Treasures
    printf("   Treasure   : ");
    //  //Displaying the placement of treasures using a for loop
    for (k = 0; k < game.pathlength; k++)
    {
        printf("%d", game.buriedTreasures[k]);
    }
    printf("\n\n");

    //Starting the game 
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");

    // Up until this point the program is taken from part 1
    
    //Starting of Part2 of the program

    // Assigning the values
    movesRemaining = game.maxmoves;
    livesRemaining = player.nLives;
    player.treasuresFound = 0;
    int vCount = 0;

    char currentPosition[MAXPATHLENGTH];
    char positionItem[MAXPATHLENGTH];

    for (j = 0; j < game.pathlength; j++)
    {
        player.positionHistory[j] = 0;
    }

    for (k = 0; k < game.pathlength; k++)
    {
        positionItem[k] = '-';
    }

    for (k = 0; k < game.pathlength; k++)
    {
        currentPosition[k] = ' ';
    }

    // Printing the table
    do 
    {
        // First Line
        for (k = 0; k < game.pathlength; k++)
        {
            if (currentPosition[k] == 'V')
            {
                vCount++;
            }
        }
        if (vCount == 0)
        {
            printf("\n");
        }
        else
        {
            printf("  ");

            for (k = 0; k < game.pathlength; k++)
            {
                if (currentPosition[k] == 'V')
                {
                    printf("%c\n", currentPosition[k]);
                    break;
                }
                else
                {
                    printf("%c", currentPosition[k]);
                }
            }
        }

        // Tracking current position requires the previous pointer to disappear
        for (k = 0; k < game.pathlength; k++)
        {
            currentPosition[k] = ' ';
        }

        // Second Line
        printf("  ");
        for (k = 0; k < game.pathlength; k++)
        {
            printf("%c", positionItem[k]);
        }
        printf("\n");

        // Third Line
        printf("  ");
        for (i = 1; i <= game.pathlength; i++)
        {
            if (i % 10 == 0)
            {
                printf("%d", (int)i / 10);
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");

        // Fourth Line
        printf("  ");
        for (i = 0; i < game.pathlength; i += 10)
        {
            printf("1234567890");
        }
        printf("\n");

        // Displaying Player Statistics
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", livesRemaining, player.treasuresFound, movesRemaining);
        printf("+---------------------------------------------------+\n");

        // Quit loop if the remaining lives are zero
        if (livesRemaining == 0)
        {
            break;
       
        }

        // Quit loop if the remaining moves are zero
        if (movesRemaining == 0)
        {
            break;
        }

        // Determining the next move
        do {
            printf("Next Move [1-20]: ");
            scanf("%d", &movePosition);

            if (movePosition < 1 || movePosition > game.pathlength)
            {
                printf("  Out of Range!!!\n");
            }

        } while (movePosition < 1 || movePosition > game.pathlength);
        printf("\n");

        if (player.positionHistory[movePosition - 1] == 1)
        {
            printf("===============> Dope! You've been here before!\n\n");
            currentPosition[movePosition - 1] = 'V';
            movesRemaining++; // so that the time when it decrements, there is no effect
        }

        else if (game.bombs[movePosition - 1] == 1 && game.buriedTreasures[movePosition - 1] == 1)
        {
            printf("===============> [&] !!! BOOOOOM !!! [&]\n");
            printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
            positionItem[movePosition - 1] = '&';
            currentPosition[movePosition - 1] = 'V';
            livesRemaining--;
            player.treasuresFound++;
        }

        else if (game.bombs[movePosition - 1] == 1)
        {
            printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
            positionItem[movePosition - 1] = '!';
            currentPosition[movePosition - 1] = 'V';
            livesRemaining--;
        }

        else if (game.buriedTreasures[movePosition - 1] == 1)
        {
            printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
            positionItem[movePosition - 1] = '$';
            currentPosition[movePosition - 1] = 'V';
            player.treasuresFound++;
        }

        else
        {
            printf("===============> [.] ...Nothing found here... [.]\n\n");
            positionItem[movePosition - 1] = '.';
            currentPosition[movePosition - 1] = 'V';
        }

        // Storing the position in history array
        player.positionHistory[movePosition - 1] = 1;

        // Decrementing the number of moves left
        movesRemaining--;

        if (livesRemaining == 0)
        {
            printf("No more LIVES remaining!\n\n");
        }
        if (movesRemaining == 0)
        {
            printf("No more MOVES remaining!\n\n");
        }

    }
    while (movesRemaining >= 0 && livesRemaining >= 0);

    // Printing the final table


    // GAME OVER
    printf("\n##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n");

    printf("\nYou should play again and try to beat your score!\n");

    return 0;
}