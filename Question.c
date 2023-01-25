#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int grades;

        scanf("%d", &grades);
        int temp = grades % 5;

        if (grades >= 38)
        {
            if (temp == 1 || temp == 2)
            {
                if (temp == 1)
                {
                    grades = grades - 1;
                }
                else
                {
                    grades = grades - 2;
                }
            }
            if (temp == 3)
            {
                if (temp == 4)
                {
                    grades += 1;
                }

                grades += 2;
            }
            printf("\n%d\n", grades);
        }
        else
            printf("%d\n", grades);
    }
}