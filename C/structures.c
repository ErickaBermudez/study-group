#include <stdio.h>

struct Car
{
    char make[20];
    char model[20];
    int year;
};

int main()
{
    struct Car myCar;
    myCar.year = 2021;
    printf("Year: %d\n", myCar.year);

    return 0;
}