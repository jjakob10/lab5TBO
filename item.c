#include "item.h"
void swap_i(Item *a, int i, int j){
    Item temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}