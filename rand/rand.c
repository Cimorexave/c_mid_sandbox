#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int random_val()
{
    // Seed the random number generator with the current time (only once)
    static int seed_initialized = 0;
    if (!seed_initialized)
    {
        srand(time(NULL));
        seed_initialized = 1;
    }

    // Generate a random integer between 0 and RAND_MAX
    int random_integer = rand();

    // Scale the random integer to the desired range (100 to 3000)
    int range_min = 100;
    int range_max = 3000;
    int random_value = (random_integer % (range_max - range_min + 1)) + range_min;

    return random_value;
}

int main(int argc, char **argv)
{
    for (int i = 0; i < 10; i++)
    {
        printf("random number is: %i\n", random_val());
    }

    return 0;
}