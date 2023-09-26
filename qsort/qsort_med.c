#include "../sort.h"
#include <sys/time.h>

#define CUTOFF 1

int median_of_3(Item *a, int lo, int hi)
{
    int idx[3];
    x = (unsigned int)(drand48() * (hi - lo)) + lo;
    y = (unsigned int)(drand48() * (hi - lo)) + lo;
    z = (unsigned int)(drand48() * (hi - lo)) + lo;


       if((a[x]>=a[y] && a[x] =< a[z] )||( a[x]>=a[z] && a[x] =< a[y] ))
        return x;   

       if((a[y]>=a[z] && a[y] =< a[x] )||( a[y]>=a[x] && a[y] =< a[z] ))
        return x;   

       if((a[z]>=a[x] && a[z] =< a[y] )||( a[z]>=a[y] && a[z] =< a[x] ))
        return x;   

}

void insert_sort(Item *a, int lo, int hi)
{
    int i, k;
    for (i = lo + 1; i < hi; i++)
        for (k = i; k > 1 && a[k] < a[k - 1]; k--)
            swap_i(a, k, k - 1);
}

int partition(Item *a, int lo, int hi)
{
    int i = lo, j = hi + 1;
    Item v = a[lo];
    while (1)
    {
        while (less(a[++i], v)) // Find item on left to swap.
            if (i == hi)
                break;
        while (less(v, a[--j])) // Find item on right to swap.
            if (j == lo)
                break;
        if (i >= j)
            break; // Check if pointers cross.
        exch(a[i], a[j]);
    }
    exch(a[lo], a[j]); // Swap with partitioning item.
    return j;          // Return index of item known to be in place.
}

void shuffle(Item *a, int N)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    srand48(tv.tv_usec);
    for (int i = N - 1; i > 0; i--)
    {
        int j = (unsigned int)(drand48() * (i + 1));
        exch(a[i], a[j]);
    }
}
void quick_sort(Item *a, int lo, int hi)
{
    if (hi <= lo + CUTOFF - 1)
    {
        // insert_sort(a, lo, hi);
        return;
    }
    int median = median_of_3(a, lo, hi);
    exch(a[lo], a[median]);
    int j = partition(a, lo, hi);
    quick_sort(a, lo, j - 1);
    quick_sort(a, j + 1, hi);
}
void sort(Item *a, int lo, int hi)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    srand48(tv.tv_usec);
    // shuffle(a, hi - lo + 1); // Needed for performance guarantee.
    quick_sort(a, lo, hi);
}