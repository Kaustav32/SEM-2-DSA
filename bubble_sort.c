#include <stdio.h>
int unsorted(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
}

int bubblesort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int c = array[j];
                array[j] = array[j + 1];
                array[j + 1] = c;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 54, 67, 7, 23, 9};
    int n = 6;
    unsorted(arr, n);
    bubblesort(arr, n);
    printf("*****After bubble sort*****");
    unsorted(arr, n);
    return 0;
}