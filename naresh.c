#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// //////////////////? FILES ?//////////////
void main()
{
    FILE *file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        int ch;
        while ((ch = fgetc(file)) != EOF)
        {
            printf("%c", ch);
        }
    }
}
// // //////////////////? DMA ?//////////////
// void main()
// {
//     int n, *arr;

//     printf("Enter the N's size.\n");
//     scanf("%d", &n);
//     arr = (int *)calloc(n, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("No memory error.\n");
//     }
//     else
//     {

//         printf("ARRAY ELEMENTS.\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d\t", *(arr + i));
//         }
//         // printf("Enter %d elements\n", n);
//         // for(int i=0; i< n; i++){
//         //   scanf("%d\n", &*(arr+i));
//         // }
//         //  printf("ARRAY ELEMENTS.\n");
//         //  for(int i=0; i< n; i++){
//         //   printf("%d\t", *(arr+i));
//         // }
//     }
// }

// //////////////////? DMA ?//////////////
// struct Emp
// {
//     int emp_No;
//     char emp_Name[20];
//     double emp_Salary;
// };

// void main()
// {
//     struct Emp *ptr;
//     ptr = (struct Emp *)malloc(sizeof(struct Emp));

//     if (ptr == NULL)
//     {
//         printf("Out of Memory error.\n");
//     }
//     else
//     {
//         printf("Enter Employee's Details :\n");
//         scanf("%d\n%s\n%d", &ptr->emp_No, ptr->emp_Name, &ptr->emp_Salary);
//     }
//     printf("EMP_NO : %d\nEMP_NAME : %s\nEMP_SALARY : %d", ptr->emp_No, ptr->emp_Name, ptr->emp_Salary);
// }

// //////////////////? POINTERS ?//////////////
// // // CALLED BY REFERENCE
// void SWAPPING(int *, int *);
// int main()
// {
//     int a = 10, b = 20;

//     printf("Value before SWAPPING , A : %d, B: %d\n", a, b);
//     SWAPPING(&a, &b);
//     printf("Values  of => A : %d, B: %d", a, b);
// }
// void SWAPPING(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     printf("Value after SWAPPING FUNCTION, A : %d, B: %d\n", *x, *y);
// }
// // CALLED BY VALUE
// void SWAPPING(int, int);
// int main()
// {
//     int a = 10, b = 20;

//     printf("Value before SWAPPING , A : %d, B: %d\n", a, b);
//     SWAPPING(a, b);
// }
// void SWAPPING(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("Value before SWAPPING , A : %d, B: %d", x, y);
// }

// //////////////////? STRUCTURES ?//////////////
// struct emp
// {
//     //STRUCTURES WITH ARRAYS
//     int e_no;
//     char e_full_name[50];
//     float e_salary;
// };
// int main()
// {
//     int n;
//     printf("Enter the number of employees you want to register.\n");
//     scanf("%d", &n);
//     struct emp e[n];
//     for (int i = 0; i < n; i++)
//     {

//         printf("Enter employee Reg no.\n");
//         scanf("%d", &e[i].e_no);
//         printf("Enter employee Full name.\n");
//         scanf("%s", &e[i].e_full_name);
//         printf("Enter employee Salary.\n");
//         scanf("%f", &e[i].e_no);
//     }
//     for (int j = 0; j < n; j++)
//     {
//         printf("Employee Infos :\t Emp_No: %d\tEmp Full name: %s\tEmp Salary :%f\n", e[j].e_no, e[j].e_full_name, e[j].e_salary);
//     }
//     return 0;
// }
// struct emp
// {
//     int e_no;
//     char e_full_name[20];
//     float e_salary;
// };
// int main()
// {

//     struct emp e = {1020276, "Kejgon James Laa", 10.9999};

//     printf("The size of the Structure is : %d\n", sizeof(e));
//     printf("Employee Infos :\t Emp_No: %d\tEmp Full name: %s\nEmp Salary :%lf", e.e_no, e.e_full_name, e.e_salary);

//     return 0;
// }

// int main()
// {
//     // INSERTING ELENENTS OF ONE ARRAY TO ANOTHER ARRAY
//     int a[6] = {12, 1, 14, 45, 65, 76}, b[3] = {100, 200, 300}, firstArr = 6, secArr = 3, loc;

//     printf("Enter the location to insert?\n");
//     scanf("%d", &loc);
//     // SHIFTING ALL THE ELEMENTS OF THE ARRAY
//     for (int i = firstArr - 1; i >= loc; i--)
//     {
//         a[i + secArr] = a[i];
//     }

//     //INSERTING  ALL THE ELEMENTS OF SEC ARRAY INTO FIRST ARRAY
//     for (int i = 0; i < secArr; i++)
//     {
//         a[loc + i] = b[i];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d, ", a[i]);
//     }
//     return 0;
// }

// int main()
// //?? INSERTING INTO AN ARRAY AND CHANGING ARRAY ELEMENTS BASE ON THE INDEX LOCATION
// {

//     int arr[50], n, i, key, loc;

//     printf("Enter the size of the array?\n");
//     scanf("%d", &n);
//     printf("Enter %d elements of N's.\n", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Array's Element are : \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");

//     printf("Enter the new elements?\n");
//     scanf("%d", &key);
//     printf("Enter location you would like to store in.\n");
//     scanf("%d", &loc);
//     for (i = n - 1; i >= loc; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[loc] = key;

//     printf("The new array is : \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d, ", arr[i]);
//     }

//     return 0;
// }

/////////////////////// LOGICAL QUESTIONS ////////////////////
// /* C program to arrange numbers in descending order DescOrder.C */

// void main()
// {
//     //variable declaration
//     int number[30];
//     int i, j, a, n;

//     //asking user to enter size of array
//     printf("Enter the value of N\n");
//     scanf("%d", &n); //reading array size

//     //asking user to enter array elements
//     printf("Enter the numbers \n");
//     for (i = 0; i < n; ++i)
//         scanf("%d", &number[i]); //reading array elements

//     /* Logic for sorting and checking */

//     for (i = 0; i < n; ++i)
//     {
//         for (j = i + 1; j < n; ++j)
//         {
//             if (number[i] < number[j])
//             {
//                 a = number[i];
//                 number[i] = number[j];
//                 number[j] = a;
//             }
//         }
//     }

//     printf("The numbers arranged in descending order are given below\n");
//     for (i = i; i > 0; i--)
//     {
//         printf("%d\n", number[i]); //printing numbers in descending order
//     }
// }

// int fact(int n);
// int main()
// {
//     //// RECURSION FUNCTION

//     int n, result;
//     printf("Enter the value of N's?\n");
//     scanf("%d", &n);

//     result = fact(n);
//     printf("The Factorial of %d is %d", n, result);

//     return 0;
// }
// int fact(int n)
// {
//     int res;
//     if (n == 0)
//     {
//         res = 1;
//     }
//     else
//     {
//         res = n * fact(n - 1);
//     }
//     return res;
// }
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