/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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

    } 
    while (player.nLives>MAXLIVES||player.nLives<MINLIVES);

    printf("Player configuration set-up is complete\n\n");

    // Game Coniguration
    printf("GAME Configuration\n");
    printf("------------------\n");

    //Loop used for setting the Path length 

    do
    {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d%*c", &game.pathlength);
        if (game.pathlength > MAXPATHLENGTH || game.pathlength < MINPATHLENGTH||game.pathlength%5 != 0)
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }

    } 
    while (game.pathlength > MAXPATHLENGTH || game.pathlength < MINPATHLENGTH || game.pathlength % 5 != 0);

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
    printf("(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

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
    printf("(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

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

    //Concluding lines of the game
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n\n");

    return 0;
}
