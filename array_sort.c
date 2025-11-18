/*------------------------------------------------------
* Filename: [calc_price.c]
* Description: [This program has an int array and an array of pointering to them, and changes the array pointers to order from low to high.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

#define ARRAY_SIZE 10

//Swap function
void swap(int *ptr1, int *ptr2){
    int save = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = save;
}

//Function for printing the array and the addresses
void print_arr_and_pointers(int *pointers_arr[ARRAY_SIZE]){
    for(int i = 0; i < ARRAY_SIZE; ++i){
        printf("The value of cell %d is: %d, and its address is: %p\n", i, *(pointers_arr[i]), pointers_arr[i]);
    }
}

int main() {
    //Setting the variables
    int integers_arr[ARRAY_SIZE] = {0};
    int *pointers_arr[ARRAY_SIZE] = {NULL};

    //pointing to array
    for(int i = 0; i < ARRAY_SIZE; ++i){
        pointers_arr[i] = &integers_arr[i];
        if(pointers_arr[i] == NULL){
            printf("Error in pointer assigment!\n");
        } 
    }

    //Inputing
    for(int i = 0; i < ARRAY_SIZE; ++i){
        printf("Enter an integer number:\n");
        scanf("%d", &integers_arr[i]);
    }

    print_arr_and_pointers(pointers_arr);
    // Going over all the combinations to swap anf get the lowest number
    for(int i = 0; i < ARRAY_SIZE; ++i){
        for(int j = 0; j < ARRAY_SIZE; ++j){
             if(integers_arr[i] < integers_arr[j]){
                swap(pointers_arr[i], pointers_arr[j]);
             }
        } 
    }

    print_arr_and_pointers(pointers_arr);

    return 0;
}