#include <stdio.h>
#include <stdlib.h>

void printSomething();

int main()
{
    printSomething();
    return 0;
}
//void means return nothing
void printSomething()
{
    printf("This is a function");
    return;
}