
#include <stdio.h>

int main()
{

    int numbers[5] = {1, 2, 3, 4, 5};
    numbers[0] = 10;

    printf("Num: %d\n", numbers[0]);

    int arr_size = sizeof(numbers);
    printf("Size of array: %d\n", arr_size);

    // what happened?

    char name[5] = {'J', 'o', 'h', 'n', '\0'};
    // the '\0' is the null terminator, which is used to indicate the end of a string

    printf("Name: %s\n", name[0]);
    return 0;
}