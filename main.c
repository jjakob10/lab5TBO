#include <stdio.h>
#include <stdlib.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char *argv[])
{
    int i, n;
    if(argc != 2)
        exit(1);
    sscanf(argv[1],"%d", &n);
    // printf("%d",n);

    int *data = malloc(sizeof(Item) * n);

    for (i = 0; i < n; i++)
        scanf("%d", data + i);

    sort(data, 0, n);

    free(data);
}