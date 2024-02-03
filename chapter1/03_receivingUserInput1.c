#include <stdio.h>

int main()
{
    int a, b; // this will reserve space in memory for the variables a and b. Reserved memory for each variable will be 4 bytes or 2 bytes or whatever bytes depends upon  integer size in architecture like if I am in 32 bit system
    printf("Enter the value of a\n");
    scanf("%d", &a); // "%d is called format specifier" and "&" for compiler means address of.
    printf("Enter the value of b\n");
    scanf("%d", &b); // "%d is called format specifier" and "&" for compiler means address of.
    printf("The sum of a and b is %d", a + b);
    return 0;
}