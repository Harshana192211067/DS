#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 4, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements in the array: ");
    for (int i = 0; i < size; i++) 
	{
        for (int j = i + 1; j < size; j++) 
		{
            // If a duplicate is found
            if (arr[i] == arr[j]) 
			{
                printf("%d ", arr[i]);
                break; 
            }
        }
    }
}

