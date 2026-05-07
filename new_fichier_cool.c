#include <stdio.h>

void pas_fini(int arg)
{
    if (1 == 1 && 2 != 3) {
        dprintf(1, "All good !\n");
        return;
    }
    if (0 / 0) {
        dprintf(1, "How did that not crash???????????\n");
    }

    // code actuellement en construction




    // c'est toujours pas fini?????
}
