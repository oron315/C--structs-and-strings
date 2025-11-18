/*------------------------------------------------------
* Filename: [array_series.c]
* Description: [This program decides if a given array is increasing, decreasing, constant, or messed up. ]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

#define ARRAY_LENGTH 15

void array_sorter(int arr[ARRAY_LENGTH]){
    // initiating counter used to tell about the array's behavior.
    int counter = 0;
    // loop to update the counter for each relation between one cell and its prior in the array.
    for(int i = 0; i < ARRAY_LENGTH - 1; ++i){
        if(arr[i + 1] > arr[i]){
            ++counter;

        }else if(arr[i + 1] < arr[i]){
            --counter;
        }
    }
    // The -1 is because the number of checks between to cells is the array length -1
    if(counter == ARRAY_LENGTH - 1){
        printf("The array is increasing.\n");
    }else if(counter == -1 *(ARRAY_LENGTH - 1)){
        printf("The array is decreasing.\n");
    }else if(counter > 0){
        printf("The array is messed up.\n");
    }else{
        printf("The array is constant.\n");
    }
}

int main() {
    //Setting variables for input
    int arr[15] = {0};
    //Input from the user by loop just for the code being oragnized.
    for(int j = 0; j < ARRAY_LENGTH; ++j){
        printf("Enter an integer number:\n");
        scanf("%d", &arr[j]);
    }
    
    //Using the sorting funtion
    array_sorter(arr);


    return 0;
}