#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
    printf("starting...\n");

    int a = 1;
    int ab = 0b00000001;
    int ax = 0x00000001;

    printf("%i\n", a);
    printf("%i\n", ab);
    printf("%i\n", ax);

    

    return 0;
}