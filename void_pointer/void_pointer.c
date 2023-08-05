#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
    printf("starting...\n");

    // void *vp;

    // printf("%p\n", vp);
    // printf("%zu\n", sizeof vp); // 4
    // printf("%d\n", *vp);

    // void * is basically a normal pointer
    // just without a type

    // int my_num = 0b00000001;
    int my_num = 1;
    int *p = &my_num;
    void *pointer = &my_num;

    // int my_num_copy = *p;
    int my_num_copy = *(int *)pointer;
    printf("%i\n", my_num_copy);

    printf("pointer: %p\n", pointer);
    printf("pointer: %p\n", p);

    // printf("pointer value: %i\n", *(int *)my_num);
    // printf("pointer value: %i\n", *p);

    return 0;
}