#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int x, spy = 0;
    struct node *ptr, *cpt, *first;
    char ch;
    ptr = (struct node*)malloc(sizeof(struct node));
    first = ptr;
    printf("Enter the number: ");
    scanf("%d", &ptr->data);
    do {
        cpt = (struct node*)malloc(sizeof(struct node));
        printf("Enter the number: ");
        scanf("%d", &cpt->data);
        ptr->next = cpt;
        ptr = cpt;
        printf("Do you want to continue(y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y');
    cpt->next = NULL;

    printf("The linked list is: ");
    printf("%d ", first->data);
    cpt = first->next;
    while (cpt != NULL) {
        printf("%d ", cpt->data);
        cpt = cpt->next;
    }
    printf("->NULL\n");

    printf("Insertion at the given information in linked list\n");
    printf("Enter the number you want to insert at the given information: ");
    cpt = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &cpt->data);
    printf("Enter the number after which you want to insert: ");
    scanf("%d", &x);
    ptr = first;
    while (ptr != NULL) {
        if (ptr->data == x) {
            cpt->next = ptr->next;
            ptr->next = cpt;
            spy = 1;
            break;
        } 
        ptr = ptr->next;
    }

    if (spy == 0) {
        printf("The number is not found in the linked list\n");
    }

    printf("After insertion at the given information the linked list is: ");
    printf("%d ", first->data);
    cpt = first->next;
    while (cpt != NULL) {
        printf("%d ", cpt->data);
        cpt = cpt->next;
    }
    printf("->NULL\n");

    return 0;
}