//insertionsort.c Dustin Pierce
#include "insertionsort.h"


void Insertionsort(int current){
    if(current < size){
        int temp = arr[current];
        int j = current;
        int i = current - 1;
        while(temp < arr[i]){
            arr[j] = arr[i];
            i--;
            j--;
        }
        if(j!=current)
            arr[j]= temp;
        Insertionsort(current+1);
        return;
    }
    return;
}
