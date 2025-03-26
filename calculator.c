#include <cs50.h>
#include <stdio.h>

// Int add function used here -int add(int a, int b);-

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

   // int z = add( x, y);

   //Division version of calculator/ issue of truncation, type casting to variable to floating point value. Floating point imprecision. Using float and double as function and type casting
   double z =(double) x / (double) y;
    printf("%.20f\n", z);
}

/*
int add(int a, int b)
{
    return a + b;
}
*/