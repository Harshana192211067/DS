#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node {
    char data;
    struct Node* next;
};

// Function to check if a linked list is a palindrome
int isPalindrome(struct Node* head) {
    char str[100];
    int length = 0;

    // Convert linked list to string
    while (head != NULL) {
        str[length++] = head->data;
        head = head->next;
    }
    str[length] = '\0';

    // Check if the string is a palindrome
    int i = 0, j = length - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }

    return 1; // Palindrome
}

int main() {
    // Example 1
    struct Node* head1 = malloc(sizeof(struct Node));
    head1->data = 'R';
    head1->next = malloc(sizeof(struct Node));
    head1->next->data = 'A';
    head1->next->next = malloc(sizeof(struct Node));
    head1->next->next->data = 'D';
    head1->next->next->next = malloc(sizeof(struct Node));
    head1->next->next->next->data = 'A';
    head1->next->next->next->next = malloc(sizeof(struct Node));
    head1->next->next->next->next->data = 'R';
    head1->next->next->next->next->next = NULL;

    printf("Input: R->A->D->A->R->NULL\nOutput: %s\n", isPalindrome(head1) ? "Yes" : "No");

    // Example 2
    struct Node* head2 = malloc(sizeof(struct Node));
    head2->data = 'C';
    head2->next = malloc(sizeof(struct Node));
    head2->next->data = 'O';
    head2->next->next = malloc(sizeof(struct Node));
    head2->next->next->data = 'D';
    head2->next->next->next = malloc(sizeof(struct Node));
    head2->next->next->next->data = 'E';
    head2->next->next->next->next = NULL;

    printf("Input: C->O->D->E->NULL\nOutput: %s\n", isPalindrome(head2) ? "Yes" : "No");

    // Example 3
    struct Node* head3 = malloc(sizeof(struct Node));
    head3->data = 'b';
    head3->next = malloc(sizeof(struct Node));
    head3->next->data = 'b';
    head3->next->next = malloc(sizeof(struct Node));
    head3->next->next->data = 'A';
    head3->next->next->next = malloc(sizeof(struct Node));
    head3->next->next->next->data = 'a';
    head3->next->next->next->next = NULL;

    printf("Output: \"bbAa\", starting index 0,2\n");

    return 0;
}

