#include <stdio.h>

// LOOPS Morgan, Ethan Jacob R. DIT 1-2//

int main()
{

    // While //

    int i = 0;
    printf("\n--- While Loop ---\n");
    while (i < 11)
    {
        printf("While %d\n", i);
        i++;
    }

    // Reset I //
    i = 2;

    // Do While //

    printf("\n--- Do While Loop ---\n");

    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 20);

    // For //

    printf("\n--- For Loop ---\n");

    for (i = 0; i < 6; i++)
    {
        printf("For %d\n", i);
    }

    return 0;
}
