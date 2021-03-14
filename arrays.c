#include <stdio.h>

int main()
{

    int nums[10], i, n;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the numbers\n");
        scanf("%d", &nums[i]);
        // printf("index %d =>  %s\n", i, &name[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Index :%d Numbers : %d\t ", i, nums[i]);
    }

    return 0;
}
// int main()
// {

//     char name[4][3] = {"ke", "hane", "ked"};
//     int nums[10], i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("index %d =>  %s\n", i, name[i]);
//         // printf("index %d =>  %s\n", i, &name[i]);
//     }
//     // for (i = 0; i < 11; i++)
//     // {
//     //     printf("index %d ", nums[i]);
//     // }

//     return 0;
// }