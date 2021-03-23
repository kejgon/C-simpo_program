#include <stdio.h>
int strlength(char[]);
void main()
{
    int len;
    char x[30];
    printf("enter the string: ");
    gets(x);
    printf("\nstring is %s", x);
    len = strlength(x);
    printf("\nlength of string is %d", len);

    printf("\nnow the swapping starts\n");
    int i = 0, j = strlength(x) - 1;
    char c;
    while (i < j)
    {
        c = x[i];
        x[i] = x[j];
        x[j] = c;
        i++;
        j--;
    }
    printf("swapped string is %s ", x);
}

int strlength(char x[])
{
    int i = 0, count = 0;
    while (x[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// //GETTING THE LENGHT OF A STRING
// void main()
// {
//     char str[30];
//     int ten;
//     printf("Enter the str : \n");
//     gets(str);
//     ten = StringLength(str);
//     printf("The length of the string is : %d", ten);
// }

// int StringLength(char x[])
// {
//     int i = 0, count = 0;
//     while (x[i] != '\0')
//     {
//         count++;
//         i++;
//     }

//     //for loop
//     // int count = 0;
//     // for (int i = 0; x[i] != 0; i++)
//     // {
//     //     count++;
//     // }

//     return count;
// }