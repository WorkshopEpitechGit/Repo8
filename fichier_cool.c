#include <stdio.h>
#include <stdlib.h>

void super_guesser(int nb)
{
    dprintf(1, "I'm gonna guess your number.\n");
    for (int i = 0; i < nb - nb + 3; i++) {
        dprintf(1, "I'm thinking. \n");
    }
    dprintf(1, "\nI think your number is %d !\n", nb);
    dprintf(1, "I'm so smart omg!!!\n");
}

int main(int ac, char const **argv)
{
    if (ac > 1 && atoi(argv[1]) > 0)
        super_guesser(atoi(argv[1]));
}

// gcc fichier_cool.c -o binary