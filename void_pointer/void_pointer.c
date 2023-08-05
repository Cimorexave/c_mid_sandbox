#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
    printf("starting...\n");

    void *vp;

    // printf("%p\n", vp);
    printf("%zu\n", sizeof vp);
    // printf("%d\n", *vp);

    return 0;
}