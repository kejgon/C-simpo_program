#include <stdio.h>

int main()
{

    int x, n;
    printf("\nHow many persons??\n");
    scanf("%d", &n);

    //Declara neccesary arrays
    int age[n][10];
    float weight[n], height[n];

    char name[n][50], gender[n][10];

    for (x = 0; x < n; x++)
    {
        printf("\nInformation person  %d infos: \n ", x + 1);

        printf("Enter the person name?\n");
        scanf("%s", &name[x]);
        printf("Enter the person age?\n");
        scanf("%d", &age[x]);
        printf("Enter the person height?\n");
        scanf("%lf", &height[x]);
        printf("Enter the person weight?\n");
        scanf("%lf", &weight[x]);
        printf("Enter the person gender?\n");
        scanf("%s", &gender[x]);
    }
    for (int k = 0; k < n; k++)
    {

        printf("\tName\t|\tAge\t|\tHeight\t|\tWeight\t|\tGender\t|\n");
        printf("_____________________________________________________\n");
        printf("\t%s\t\t%d\t\t%lf\t\t%lf\t\t%s\t", name[k], age[k], height[k], weight[k], gender[k]);
    }

    return 0;
}