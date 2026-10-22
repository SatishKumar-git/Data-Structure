#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};  
int main()
{
    struct node *ptr,*cpt,*first;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    first=ptr;
    printf("Enter the number: ");
    scanf("%d",&ptr->data);
    do{
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("Enter the number: ");
        scanf("%d",&cpt->data);
        ptr->next=cpt;  
        ptr=cpt;
        printf("Do you want to continue(y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y');
    cpt->next=NULL;
    printf("The linked list is: ");
    printf("%d ",first->data);
    cpt=first->next;
    while(cpt->next!=NULL)
    {
        printf("%d ",cpt->data);
        cpt=cpt->next;

    }   
    printf("%d",cpt->data);
    printf("->NULL\n");

    printf("Deletion in the beginning in linked list\n");
    cpt=first->next;
    free(first);
    first=cpt;
    printf("The linked list after deletion in the beginning is: ");
    printf("%d ",first->data);
    cpt=first->next;
    while(cpt->next!=NULL)
    {
        printf("%d ",cpt->data);
        cpt=cpt->next;

    }
    printf("%d",cpt->data);
    printf("->NULL\n");

    return 0;   
}