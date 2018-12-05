//CS270 HW1 2.1.2017 main.c

#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"
#include "insertionsort.h"
#include "quicksort.h"

int size = 100;
int arr[100];


int main() {

    //variables used for switch to keep array from remaining sorted
    int importarray = 0;
    int sort = 0;
    while(importarray != 5){

    
    switch(importarray){  

	//input unsorted array
        case 0: {
            FILE * infile;
            infile = fopen("array.txt", "r");
            if (infile == NULL){
                printf("Unable to Open file");
            }
            char c;
            int i = 0;
            while(!feof(infile)){
                fscanf(infile, "%d", &arr[i]);    
                i++;
            }
            fclose(infile);

            printf("Initial array contents: \n");
	    int l = 0;
            while(l!=100){
                printf("%d", arr[l]);
                printf(" ");
		l++;
            }    
            printf("\n");
            sort++;
            if(sort == 1)
                importarray = 1;
            if(sort == 2)
                importarray = 2;
            if(sort == 3)
                importarray = 3;
            break;
        }
        case 1: {
            printf("\nBubblesort..");
            Bubblesort(100);
            importarray = 4; //jump to printing final array
            break;
        }
        case 2: {
            printf("\nInsertionsort..");
            Insertionsort(1);
            importarray = 4; //jump to printing final array
            break;
        }
        case 3: {
            printf("\nQuicksort..");
            Quicksort(0, 99);
            importarray = 4; //jump to printing final array
            break;
        }

        //print sorted array
        case 4: {
	    int j = 0;
            printf("\nFinal array contents: \n");
            while(j!= 100){
                printf("%d", arr[j]);
                printf(" ");
		j++;
            }
            printf("\n\n");
            if(sort == 3){   //all 3 sorts have happened
                importarray = 5;
                break;
            }
            else{
                importarray = 0; //import array again
                break;
            }
        }
        case 5:{
            return 0;  //terminate program
	    break;
        }
        default:
            importarray = 5;
    }
    }
    return 0;   
    
}


