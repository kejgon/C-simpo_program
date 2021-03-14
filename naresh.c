#include <conio.h>
#include <stdio.h>

int main()
{

    if (7)
        printf("Hi \n");
    else
        printf("Hello \n");

    printf("Bye\n");

    return 0;
}

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