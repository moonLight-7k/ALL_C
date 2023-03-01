#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Hotel
{
    char name[100];
    char address[100];
    int grade;
    double roomCharges;
    int numRooms;
};

void printHotels(struct Hotel *hotels, int numHotels, int grade)
{
    struct Hotel **gradeHotels = (struct Hotel **)malloc(numHotels * sizeof(struct Hotel *));
    int numGradeHotels = 0;

    for (int i = 0; i < numHotels; i++)
    {
        if (hotels[i].grade == grade)
        {
            gradeHotels[numGradeHotels] = &hotels[i];
            numGradeHotels++;
        }
    }

    for (int i = 0; i < numGradeHotels; i++)
    {
        for (int j = i + 1; j < numGradeHotels; j++)
        {
            if (gradeHotels[i]->roomCharges > gradeHotels[j]->roomCharges)
            {
                struct Hotel *temp = gradeHotels[i];
                gradeHotels[i] = gradeHotels[j];
                gradeHotels[j] = temp;
            }
        }
    }

    printf("Hotels of grade %d in order of room charges:\n", grade);
    for (int i = 0; i < numGradeHotels; i++)
    {
        printf("%s, %s, Room Charges: $%.2f\n", gradeHotels[i]->name, gradeHotels[i]->address, gradeHotels[i]->roomCharges);
    }

    free(gradeHotels);
}

int main()
{
    struct Hotel hotels[5] = {
        {"Hotel A", "123 Main St", 2, 100.00, 50},
        {"Hotel B", "456 Elm St", 3, 150.00, 75},
        {"Hotel C", "789 Oak St", 2, 80.00, 40},
        {"Hotel D", "321 Pine St", 4, 200.00, 100},
        {"Hotel E", "654 Maple St", 3, 120.00, 60},
    };

    printHotels(hotels, 5, 3);

    return 0;
}
