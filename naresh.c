#include <conio.h>
#include <stdio.h>

/////////////////////// LOGICAL QUESTIONS ////////////////////

int fact(int n);
int main()
{
    //// RECURSION FUNCTION

    int n, result;
    printf("Enter the value of N's?\n");
    scanf("%d", &n);

    result = fact(n);
    printf("The Factorial of %d is %d", n, result);

    return 0;
}
int fact(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else
    {
        res = n * fact(n - 1);
    }
    return res;
}
// int main()
// //ARMSTRONG NUMBER
// {

//     int n, remainder, sum = 0, cube, temp;

//     printf("Enter N's value?");
//     scanf("%d", &n);
//     temp = n;
//     while (n > 0)
//     {
//         remainder = n % 10;
//         cube = remainder * remainder * remainder;
//         sum += cube;
//         n /= 10;
//     }
//     n = temp;
//     if (sum == n)
//     {
//         printf("%d is Armstrong number.", n);
//     }
//     return 0;
// }
// int main()
// //GETTING A RANGE OF PERFECT NUMBERS
// {

//     long long n, i, limits, sum;

//     printf("Enter numbers limits?\n");
//     scanf("%d", &limits);

//     for (n = 1; n <= limits; n++)
//     {

//         sum = 0;
//         for (i = 1; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 sum += i;
//             }
//         }
//         if (n == sum)
//         {
//             printf("%d,", sum);
//         }
//     }
//     return 0;
// }
// int main()
// //STRONG NUMBER
// {
//     int i, j, cur, lastDigit, end;
//     long long fact, sum;

//     /* Input upper limit from user */
//     printf("Enter upper limit: ");
//     scanf("%d", &end);

//     printf("All Strong numbers between 1 to %d are:\n", end);

//     /* Iterate from 1 to end */
//     for (i = 1; i <= end; i++)
//     {
//         /* Number to check for strong number */
//         cur = i;

//         sum = 0;

//         /* Find the sum of factorial of digits */
//         while (cur > 0)
//         {
//             fact = 1ll;
//             lastDigit = cur % 10;

//             /* Find factorial of last digit of current num. */
//             for (j = 1; j <= lastDigit; j++)
//             {
//                 fact = fact * j;
//             }

//             sum += fact;

//             cur /= 10;
//         }

//         /* Print 'i' if it is strong number */
//         if (sum == i)
//         {
//             printf("%d, ", i);
//         }
//     }

//     return 0;
// }
// int main()
// //PRIME NUMBER
// {
//     int i, n, count = 0;
//     printf("Enter the numbers of N's?\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         printf("It's a Prime number.");
//     }
//     else
//     {
//         printf("It's not a prime number.");
//     }

//     return 0;
// }
// int main()
// //PALINDROME NUMBER
// {
//     int n, r, sum = 0, temp;
//     printf("Enter the numbers of N's?\n");
//     scanf("%d", &n);
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = sum * 10 + r;
//         n = n / 10;
//     }
//     n = temp;
//     if (n == sum)
//     {
//         printf("It's a Panlindrome number: %d", sum);
//     }
//     else
//     {
//         printf("It's not a palindrome number : %d", sum);
//     }
//     return 0;
// }
// int main()
// //Fibonacci Series
// {
//     int i, n, a = 0, b = 1, c;
//     printf("Enter the numbers of N's?\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         printf(" %d\n", a);

//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }
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