#include <stdio.h>

// Else If  Morgan, Ethan Jacob R. DIT 1-2//

int main()
{

    // Variables//

    int Number;

    printf("Input A Random Number: ");
    scanf("%d", &Number);

    // Else If//

    if (Number % 2 == 0)
    {
        printf("The Number %d is Even\n", Number);
    }
    else if (Number % 2 != 0)
    {
        printf("The Number %d is Odd\n", Number);
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}
