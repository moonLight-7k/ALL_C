#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1; // Target not found
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", n);

    int target = 5;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        printf("Element not present in array\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
