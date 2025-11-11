#include <stdio.h>

// Operators Morgan, Ethan Jacob R. DIT 1-2//

int main()
{

    // Variables //

    int a = 10;
    int b = 15;
    int c = 20;
    int d = 30;
    int e = 45;
    int f = 50;

    // Arithmitic Operators //

    printf("===Arithmitic Operators===\n");

    printf("a + b = %d\n", a + b);
    printf("c - a = %d\n", c - a);
    printf("d * b = %d\n", d * b);
    printf("e / a = %d\n", e / a);
    printf("f %% b = %d\n", f % b);

    // Logical  Operators //

    printf("===Logical Operators===\n");

    // And//

    if (a > b && c > d)
    {
        printf("Both conditions are TRUE\n");
    }
    else
    {
        printf("Both conditions are FALSE\n");
    }

    // Or//

    if (c > d || a > b)
    {
        printf("At least one condition is TRUE\n");
    }
    else
    {
        printf("Both conditions are FALSE\n");
    }

    // Not//

    if (!(e > f))
    {
        printf("NOT operator: e is NOT greater than f\n");
    }
    else
    {
        printf("NOT operator: e is greater than f\n");
    }

    // Updated Values //

    a += 5;
    b -= 3;
    c *= 2;
    d /= 3;
    e %= 7;
    printf("===Updated Values===\n");
    printf("Updated a: %d\n", a);
    printf("Updated b: %d\n", b);
    printf("Updated c: %d\n", c);
    printf("Updated d: %d\n", d);
    printf("Updated e: %d\n", e);

    return 0;
}