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

    int a_negative = ~ab + 1; // two's compliment

    printf("%i\n", a_negative);

    int a_compliment = ~ab;
    printf("%i\n", a_compliment);

    // int a_and_a = ab && ab;
    // int ab &= 0;
    // printf("%i\n", ab);

    printf("break\n");
    int x = 1;

    // x &= 0;
    x |= 0;
    // x ^= 0;

    printf("%i\n", x);
    // printf("%i\n", x |= 0);
    // printf("%i\n", x ^= 0);

    printf("break...\n");

    return 0;
}