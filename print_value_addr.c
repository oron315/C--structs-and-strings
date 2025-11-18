/*------------------------------------------------------
* Filename: [print_value_addr.c]
* Description: [This program recives an array and a string and for each it returns their cells input and addresses.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH 8


int main() {
    //Setting variables for input
    int arr[ARRAY_LENGTH] = {0};
    char string[ARRAY_LENGTH];

    printf("Enter an array of %d integers.\n", ARRAY_LENGTH);
    for(int i = 0; i < ARRAY_LENGTH; ++i){
        printf("Enter an integer:\n");
        scanf("%d", &arr[i]);
    }

    printf("Enter a string of %d charecters.\n", ARRAY_LENGTH);
    scanf("%s", string);

    if((int)strlen(string) != ARRAY_LENGTH){
        printf("Invalid input!\n");
        return 0;
    }


    int *p_arr = arr;
    if(p_arr == NULL){
        printf("Error in the pointer!\n");
        return 0;
    }
    char *p_string = string;
    if(p_string == NULL){
        printf("Error in the pointer!\n");
        return 0;
    }    

    for(int i = 0; i < ARRAY_LENGTH; ++i){
        // Once the value with arr[i]
        printf("The value of the cell is:%d, and its address is: %p \n", arr[i], p_arr);
        ++p_arr;
    }
    for(int i = 0; i < ARRAY_LENGTH; ++i){
        //Once the value with *(string +i)
        printf("The value of the cell is:%c, and its address is: %p\n", *(string + i), p_string );
        ++p_string;
    }


    return 0;
}