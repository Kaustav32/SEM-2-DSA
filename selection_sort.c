#include <stdio.h>
int unsorted(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
}

int selectionsort(int array[], int n)
{
    int c, z;
    for (int i = 0; i < n - 1; i++)
    {
        c = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[c])
            {
                c = j;
            }
        }
        z = array[i];
        array[i] = array[c];
        array[c] = z;
    }
    printf("\n");
}
int main()
{
    int arr[] = {3, 5, 2, 13, 2};
    int n = 5;
    unsorted(arr, n);
    selectionsort(arr, n);
    unsorted(arr, n);
    return 0;
}