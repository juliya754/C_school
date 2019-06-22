#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* p = malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++)
        p[i] = i + 1;
    free(p);
    return 0;
}
