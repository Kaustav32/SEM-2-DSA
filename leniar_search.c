#include <stdio.h>
int search(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 23, 45, 56, 67, 78};
    int size = sizeof(arr)/sizeof(int);         /*To find size of the array automatically*/
    int element = 56;
    int a = search(arr, size, element);
    printf("The element %d was found at index: %d", element, a);
    return 0;
}