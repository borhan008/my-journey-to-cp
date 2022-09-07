#include <stdio.h>
void printingName()
{
    printf("Borhan \n");
    printingName();
}

int main()
{
    printingName();
    return 0;
}