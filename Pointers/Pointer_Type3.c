#include <stdio.h>

int main()
{
    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1,2,3,4,5};

    char *char_pointer = (char *) int_array;
    int *int_pointer  = (int *) char_array;

    //char_pointer =  //Typecast into the
    //int_pointer = // pointer's data type

    for(i = 0; i < 5; i++){
        printf("[integer pointer] points to %p, which contains the char '%c'\n",
            int_pointer, *int_pointer);
        int_pointer = (int *) ((char *) int_pointer + 1);
    }

    for(i = 0; i < 5; i++) { // Iterate through the char array with the char_pointer.
        printf("[char pointer] points to %p, which contains the integer %d\n",
            char_pointer, *char_pointer);
        char_pointer = (char *) ((int *) char_pointer + 1);
    }
}