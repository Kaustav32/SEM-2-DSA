#include <stdio.h>

void hello(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
}

int insertion(int arra[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arra[i + 1] = arra[i];
    }
    arra[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    hello(arr, size);
    insertion(arr, size, element, 100, index);
    size += 1;
    printf("\n");
    hello(arr, size);
    return 0;
}