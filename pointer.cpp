#include "pointer.h"

void update(int* a, int* b){
    int i  = *a;
    *a += *b;
    *b = i-*b;
}