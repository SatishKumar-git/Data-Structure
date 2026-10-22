#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *f, *r, *first;
    char ch;

    f = (struct node*)malloc(sizeof(struct node));
    first = f;

    printf("Enter the number: ");
    scanf("%d", &f->data);

    do {
        r = (struct node*)malloc(sizeof(struct node));
        printf("Enter the number: ");
        scanf("%d", &r->data);
        f->next = r;
        f = r;
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y');

    r->next = NULL;

    printf("The linked list is: ");
    printf("%d ", first->data);

    r = first->next;
    while (r->next != NULL) {
        printf("%d ", r->data);
        r = r->next;
    }
    printf("%d", r->data);
    printf("->NULL\n");

    return 0;
}
