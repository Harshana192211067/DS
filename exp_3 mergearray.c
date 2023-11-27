#include <stdio.h>
int main() {
	int i,j,k;
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calculate the size of the merged array
    int sizeMerged = size1 + size2;

    // Declare and initialize the merged array
    int mergedArr[sizeMerged];

    // Copy elements of the first array to mergedArr
    for (i = 0; i < size1; i++) 
	{
        mergedArr[i] = arr1[i];
    }

    // Copy elements of the second array to mergedArr
    for (j = 0, k = size1; j < size2; j++, k++) 
	{
        mergedArr[k] = arr2[j];
    }

    // Print the merged array
    printf("Merged Array: ");
    for (i = 0; i < sizeMerged; i++) 
	{
        printf("%d ", mergedArr[i]);
    }
    return 0;
}

