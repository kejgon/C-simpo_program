#include <conio.h>
#include <stdio.h>

/////////////////////// LOGICAL QUESTIONS ////////////////////
int main()
//Fibonacci Series
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the numbers of N's?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf(" %d\n", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
// int main()
// //Sum of all the digits in a given number
// {
//     int i, n, sum = 0;
//     printf("Enter the numbers of N's?\n");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         i = n % 10;
//         sum += i;
//         n = n / 10;
//     }
//     printf("The sum number of %d => %d", n, sum);

//     return 0;
// }
// int main()
// //Finding the factorial number
// {
//     int i, n, fact = 1;
//     printf("Enter the numbers of N's?\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     printf("The factorial number of %d => %d", n, fact);

//     return 0;
// }

////////////////////////////////PATTERNS IN C
// int main()
// {
//     int i, j, k, n, c = 80;

//     printf("Enter the value of N's?\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= c / 2 - i; j++)
//         {
//             printf("-");
//         }
//         for (k = 1; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
//     //  let's say N's is =>    10
//     // ---------------------------------------*
//     // --------------------------------------***
//     // -------------------------------------*****
//     // ------------------------------------*******
//     // -----------------------------------*********
//     // ----------------------------------***********
//     // ---------------------------------*************
//     // --------------------------------***************
//     // -------------------------------*****************
// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j >= i; j--)
//         {
//             printf(" + ");
//         }
//         for (j = i; j >= 1; j--)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }

//     return 0;

//     // *****
//     // ****
//     // ***
//     // **
//     // *
// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

//     // *****
//     // ****
//     // ***
//     // **
//     // *
// }
// int main()
// {
//     int i, j;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = i; j >= 1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

//     // *****1
//     // ****2
//     // ***3
//     // **4
//     // *5
// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j <= 5; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;

//     // *****1
//     // ****2
//     // ***3
//     // **4
//     // *5
// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j >= 1; j--)
//         {
//             printf("*");
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// *1
// **2
// ***3
// ****4
// *****5
// }
// {
//     int i, j;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 5; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// *5
// **4
// ***3
// ****2
// *****1

// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ///PERFECT NUMBER
// int main()
// {

//     int i, n, sum = 0;
//     printf("Enter the N's number?\n");
//     scanf("%d", &n);

//     for (i = 1; i < n; i++)
//     {
//         if (i % n == 0)
//         {
//             sum += i;
//         }
//     }

//     if (sum == n)
//     {
//         printf("N's :%d is a perfect number.\n", n);
//     }
//     else
//     {
//         printf("N's :%d is not a perfect number.\n", n);
//     }

//     return 0;
// }
// ///WHILE LOOP
// int main()
// {

//     int i = 0, j = 0;

//     while (i++ <= 3)
//     {
//         while (j++ <= 3)
//         {
//         }

//     }
//     printf("%d\t %d", i, j);

//     return 0;
// }
// int main()
// {

//     int i = 0, j = 0;

//     while (++i <= 7)
//     {

//         while (++j <= 5)
//         {
//             printf("%d\n", j);
//         }
//         printf("%d\n", j);
//     }

//     return 0;
// }

// int main()
// {

//     if (7)
//         printf("Hi \n");
//     else
//         printf("Hello \n");

//     printf("Bye\n");

//     return 0;
// }

//Modify Operators
// int main()
// {

//     int a = 2, b = 3;

//     b = a++ + b--;
//     printf("A=%d, B=%d\n", a, b);
//     a = a-- + ++b;
//     printf("A=%d, B=%d\n", a, b);
//     b = ++a + --b;
//     printf("A=%d, B=%d\n", a, b);

//     return 0;
// }
// int main()
// {

//     int x = 5;

//     x = x++ + ++x;

//     printf("X=%d\n", x);

//     return 0;
// }
// int main()
// {

//     int x = 10, y = 20, z;

//     z = x++ * --y;

//     printf("X=%d, Y=%d, Z=%d \n", x, y, z);

//     return 0;
// }
// //Printing ASCII
// int main()
// {

//     char ch;

//     printf("Enter one character?\n");
//     scanf("%c", &ch);

//     printf("The character number is : %d", ch);

//     return 0;
// }
// int main()
// {

//     unsigned short m = -3;
//     printf(" %u", m);

//     return 0;
// }