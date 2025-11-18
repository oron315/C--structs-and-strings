/*------------------------------------------------------
* Filename: [array_series.c]
* Description: [This program decides if a given array is increasing, decreasing, constant, or messed up. ]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

#define ARRAY_LENGTH 15


int main() {
    //Setting variables for input
    int arr[ARRAY_LENGTH] = {0};

    // initiating counter used to tell about the array's behavior.
    int counter_up = 0;
    int counter_down = 0;

    printf("This program recives a %d long array and tells its behavior.\n\n", ARRAY_LENGTH);

    // loop to update the counter for each relation between one cell and its prior in the array.
    for(int i = 0; i < ARRAY_LENGTH - 1 ; ++i){
        //Taking two inputs at one time so we can use only one for loop
        //Considering the array has an odd size dor the last cell we need just one input.
        if(i + 2 == ARRAY_LENGTH && ARRAY_LENGTH % 2 !=0){
            printf("Enter one last number because an even number of cells:\n");
            scanf("%d", &arr[ARRAY_LENGTH - 1]);

        }else if(i < ARRAY_LENGTH / 2){
            printf("Enter two integer numbers at each in a format of x,y :\n");
            scanf("%d,%d", &arr[2 * i], &arr[2 * i + 1]); //keep strating to input at even cells 
        }

        if(arr[i + 1] > arr[i]){
            ++counter_up;

        }else if(arr[i + 1] < arr[i]){
            --counter_down;
        }
    }

    // The -1 is because the number of checks between to cells is the array length -1
    if(counter_up == ARRAY_LENGTH - 1){
        printf("The array is increasing.\n");
    }else if(counter_down == -1 *(ARRAY_LENGTH - 1)){
        printf("The array is decreasing.\n");
    }else if(counter_up > 0 || counter_down < 0){
        printf("The array is messed up.\n");
    }else{
        printf("The array is constant.\n");
    }


    return 0;
}