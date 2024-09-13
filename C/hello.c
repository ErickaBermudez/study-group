// compile program: gcc hello.c -o hello
// run program: ./hello or hello in windows

#include <stdio.h>

// we can define functions before the main function
// int get_sum(int a, int b);

// constants in C are defined with #define
#define PI 3.14159

int main()
{
    // but we can also define a constant with const
    // const int NUM = 5;
    // NUM = 8; // this will throw an error

    // strings are a little bit different in C. "String" is an array of characters
    // char name[5] = "Pamela";
    // const char prompt[] = "Enter a value: ";

    // C is very strict with types
    // int x = 2.5;
    // printf("Hello, %s!\n", x);

    // Order of function definition matters in C
    // int sum = get_sum(2, 3);
    // printf("The sum is %d\n", sum);

    // we can declare multiple variables in one line
    // int a, b, c;

    // use fflush to clear the buffer
    /**
    printf("Enter a character: ");
    char a = getchar();
    printf("Type another character: ");
    char b = getchar();
    printf("a: %c", a);
    printf("b: %c", b);
    */

    // OR = ||
    // AND = &&

    // booleans in C are defined with <stdbool.h>, but usually we use 0 for false and 1 for true

    /**
    while (1) {
        printf("Enter a number: ");
        int num;
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
    }
    */

    // what is i++?

    // what's the output of this code?
    /**
    for (int i = 0; i < 5; i++)
    {
        break;
        printf("%d\n", i);
    }
    */

    // and this one?
    /**
    while(0) {
        printf("Hello\n");
        break;
    }
    */

    // and this one?
    /**
    for(int i = 0; i < 5; i++) {
        if(i == 3) {
            continue;
        }
        printf("%d\n", i);
    }
    */

    // and this one?
    /**
    for(int i = 0; i < 5; i--) {
        printf("oops!");
        printf("%d\n", i);
    }
    */

    // and this one?
    /**
    for(int i = 0; i < 5; i++) {
        i = 6;
        printf("%d\n", i);
    }
    */

    // and this one?
    /**
    int x = 1;
    switch (x)
    {
    case 1:
        printf("1\n");
    case 2:
        printf("2\n");
    case 3:
        printf("3\n");
    default:
        printf("default\n");
    }
    */

    // and this one?
    /**
    char c = '5';
    switch (c)
    {
    case 2:
        printf("2\n");
        break;
    case 5:
        printf("5\n");
        break;
    default:
        printf("default\n");
    }
    */

    return 0;
}

int get_sum(int a, int b)
{
    return a + b;
}
