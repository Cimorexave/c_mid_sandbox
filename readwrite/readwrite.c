#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int get_lines_count(FILE *f)
{
    bool condition = true;
    int lines_count = 0;
    while (condition)
    {
        char c = fgetc(f);
        if (c == '\n')
            lines_count++;
        if (c == EOF)
            condition = false;
    }
    return lines_count;
}

char **get_lines(FILE *f)
{
    char *lines[100];
    char *line;
    int i = 0;
    int j = 0;

    bool condition = true;
    while (condition)
    {
        char c = fgetc(f);

        if (c == '\n')
        {
            printf("%s\n", line);
            lines[j] = line;
            i = 0;
            line = "";
            continue;
        }

        line[i] = c;

        i++;

        if (c == EOF)
            condition = false;
    }

    return lines;
}

int main(int argc, char **argv)
{
    printf("starting...\n");

    FILE *filep = fopen("./assets/readme.txt", "r");

    printf("%p\n", filep);
    // printf("%s\n", *filep);

    // bool condition = true;
    // while (condition)
    // {
    //     char c = fgetc(filep);
    //     printf("%c", c);
    //     if (c == EOF)
    //         condition = false;
    // }

    int lines_count = get_lines_count(filep);
    printf("number of lines: %d\n", lines_count);

    char **lines = get_lines(filep);
    for (int i = 0; i < lines_count; i++)
    {
        printf("here\n");
        char *line = lines[i];
        printf("line is: %s\n", line);
    }

    // char c;
    // while ((c = fgetc(filep)) != EOF)
    // {
    //     printf("%c", c);
    // }

    fclose(filep);

    return 0;
}