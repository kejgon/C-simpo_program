#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "empInfos.h"

int main()
{
    struct user jane;
    struct user james;

    jane.userID = 1;
    james.userID = 2;

    puts("Enter the name of user 1?");
    gets(jane.firstName);
    puts("Enter the name of user 2?");
    gets(james.firstName);

    printf("User 1 id is : %d\n", jane.userID);
    printf("User 1 First Name is : %s\n", jane.firstName);
    printf("User 2 id is : %d\n", james.userID);
    printf("User 2 First Name is : %s", james.firstName);

    return 0;
}