#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_pointer;
    f_pointer = fopen("text1.txt", "w+");
    fputs("I drunked coffee today", f_pointer);

    fseek(f_pointer, 10, SEEK_SET); // start from beginning
    fputs(" tea  ", f_pointer);     // updating out text file

    fclose(f_pointer);
    return 0;
}