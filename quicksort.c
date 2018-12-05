//quicksort.c  Dustin Pierce
#include "quicksort.h"


extern int size;
extern int arr[];


void Quicksort(int first, int last){
    
    int pivot;

    if( first < last ) {
        pivot = Pivot(first, last );
        Quicksort(first, pivot-1 );
        Quicksort(pivot+1, last );
    }
}

int Pivot(int first, int last){
    int  p = first;
    int pivot = arr[first];
    int k = first +1;
    while( k <= last ) {
        if( arr[k] <= pivot ) {
            p++;
            Swap(k, p);
        }
	k++;
    }
    Swap(first, p);
    return p;
}

void Swap(int a1, int a2){
    int temp = 0;
    temp = arr[a1];
    arr[a1] = arr[a2];
    arr[a2] = temp;
    return;
}

