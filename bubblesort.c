//Bubblesort.c  Dustin Pierce

#include "bubblesort.h"

void Bubblesort(int swaps){
    if(swaps == 0)
        return;
    int first = 0, second = 1;
    int counter = 0;
    while(second != size){
        if(arr[first] > arr[second]){
            int temp = arr[second];
            arr[second] = arr[first];
            arr[first] = temp;
            counter++;
        }
        first ++;
        second ++;
    }
    Bubblesort(counter);
    return;
}


