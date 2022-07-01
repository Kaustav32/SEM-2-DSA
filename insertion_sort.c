#include <stdio.h>
int unsorted(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
}

int insertionsort(int array[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    printf("\n");
}
int main()
{
    int arr[] = {12, 54, 67, 7, 23, 9};
    int n = 6;
    unsorted(arr, n);
    insertionsort(arr, n);
    unsorted(arr, n);
    return 0;
}