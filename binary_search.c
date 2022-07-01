#include <stdio.h>
int binary(int array[], int size, int element)
{
    int low = 0, mid, high = size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 23, 45, 56, 67, 78};
    int size = sizeof(arr) / sizeof(int);
    int element = 45;
    int a = binary(arr, size, element);
    printf("KAUSTAV CHAMOLA\n");
    printf("The element %d was found at index: %d", element, a);
    return 0;
}