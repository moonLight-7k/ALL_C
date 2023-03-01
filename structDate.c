#include <stdio.h>

// Define the structure for a date
struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    // Declare variables to store the two dates
    struct Date date1, date2;

    // Input the first date
    printf("Enter the first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

    // Input the second date
    printf("Enter the second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        printf("The dates are equal.\n");
    }
    else
    {
        printf("The dates are unequal.\n");
    }

    return 0;
}
