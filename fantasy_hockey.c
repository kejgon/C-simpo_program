#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    int player[5] = {56, 66, 68, 71, 87};
    int goals[5] = {26, 39, 25, 29, 31};
    int gamePlayed[5] = {30, 30, 28, 30, 26};

    float point_per_game[5];
    float best_Player_point_per_g = 0.0;
    int bestPlayer;

    for (i = 0; i < 5; i++)
    {
        point_per_game[i] = (float)goals[i] / gamePlayed[i];
        printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamePlayed[i], point_per_game[i]);

        if (point_per_game[i] > best_Player_point_per_g)
        {
            best_Player_point_per_g = point_per_game[i];
            bestPlayer = player[i];
        }
    }
    printf("\n The best player is %d \n", bestPlayer);

    return 0;
}