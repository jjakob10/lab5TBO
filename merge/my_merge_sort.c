#include "item.h"
#include "sort.h"

void merge(Item *a, Item *aux, int lo, int mid, int hi)
{
  int i;
  for (i = lo; i <= hi; i++)
    aux[i] = a[i];
  int j = lo, k = mid + 1;
  for (i = lo; i <= hi; i++)
  {
    if (j > mid)
      a[i] = aux[k++];
    else if (k > hi)
      a[i] = aux[j++];
    else if (less(aux[k], aux[j]))
      a[i] = aux[k++];
    else
      a[i] = aux[j++];
  }
}

void merge_sort(Item *a, Item *aux, int lo, int hi)
{
  if (hi <= lo)
    return;
  int m = lo + (hi - lo) / 2;
  merge_sort(a, aux, lo, m);
  merge_sort(a, aux, m + 1, hi);
  merge(a, aux, lo, m, hi);
}
void sort(Item *a, int lo, int hi)
{
  Item *aux = malloc(sizeof(Item) * (hi - lo + 1));
  merge_sort(a, aux, lo, hi);
  free(aux);
}