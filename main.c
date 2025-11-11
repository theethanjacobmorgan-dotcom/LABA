#include <stdio.h>

// Declaring Variables Morgan, Ethan Jacob R. DIT 1-2//

int main()
{
    // Variables //

    char Name[50] = "Ethan Jacob R. DIT 1-2";
    int Age = 19;
    char Course[20] = "DIT";
    int yearLevel = 1;
    int section = 2;
    float AverageGrade = 93.5;

    // Outputs //

    printf("===My Information===\n");
    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Course: %s %d-%d\n", Course, yearLevel, section);
    printf("Previous SY Average Grade: %.2f\n", AverageGrade);

    return 0;
}