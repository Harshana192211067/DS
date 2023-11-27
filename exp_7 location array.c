#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
	int i;
    int target; 
    int index = 1; 
    printf("enter target value: ");
    scanf("%d",&target);
    // Search for the element in the array
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;  // Update index if the element is found
            break;      // Break the loop since we found the element
        }
    }

    // Print the result
    if (index != 1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

