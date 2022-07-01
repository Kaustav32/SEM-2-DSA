#include <stdio.h>

void hello(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
}

int deletion(int arra[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        arra[i] = arra[i+1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 3;
    hello(arr, size);
    deletion(arr, size, index);
    size -= 1;
    printf("\n");
    hello(arr, size);
    return 0;
}