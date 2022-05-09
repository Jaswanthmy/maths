/*PROGRAM TO INSERT AND DELETE ELEMENTS IN AN ARRAY*/
#include <stdio.h>

void insert(int element, int arr[], int *size)
{
    arr[*size] = element;
    *size = *size + 1;
}

int delete (int arr[], int *size)
{
    int element = arr[*size - 1];
    *size = *size - 1;
    return element;
}
int main()
{
    
    printf("20BCS065  RAVI GOWRI JASWANTH\n\n");
    
    int arr[10] = {9, 3, 4, 1, 10};
    int size = 5;

    printf("Array before insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nInserted: 6,7,8,9\n");
    insert(6, arr, &size);
    insert(7, arr, &size);
    insert(8, arr, &size);
    insert(9, arr, &size);
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printf("Deleted element: %d \n", delete (arr, &size));
    printf("Deleted element: %d \n", delete (arr, &size));
    printf("Deleted element: %d \n", delete (arr, &size));

    printf("\nArray after deletion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}