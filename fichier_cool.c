#include <stdio.h>

void super_guesser(int nb)
{
    dprintf(1, "I'm gonna guess your number.\n");
    for (int i = 0; i < nb - nb + 3; i++) {
        dprintf(1, "I'm thinking. \n");
    }
    dprintf(1, "\nI think your number is %d !\n", nb);
    dprintf(1, "I'm so smart omg!!!\n");
}