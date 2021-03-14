

#include <stdio.h>

int main()
{
    int array[5] = {2, 5, 7, 43, 6};
    int large = array[0], i;

    for (i = 1; i < 6; i++)
    {
        if (array[i] < large)
        {
            large = array[i];
        }
    }
    printf("The large Number is : %d", large);

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int n, sum = 0, c, value;

//     printf("Enter the number of integers you want to add\n");
//     scanf("%d", &n);

//     printf("Enter %d integers\n", n);

//     for (c = 1; c <= n; c++)
//     {
//         scanf("%d", &value);
//         sum = sum + value;
//     }

//     printf("Sum of entered integers = %d\n", sum);

//     return 0;
// }