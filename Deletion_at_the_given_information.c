#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};  
int main()
{
    int x,spy=0;
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

    printf("Deletion at the given information in linked list\n");
    printf("Enter the number you want to delete at the end: ");
    scanf("%d",&x);
    cpt=first;
    while(cpt->next!=NULL)
    {
        if(cpt->data==x)
        {
            ptr->next=cpt->next;
            free(cpt);
            spy=1;
            break;
        }
        ptr=cpt;
        cpt=cpt->next;
    }
    if(spy==0)
    {
        printf("The number is not found in the linked list\n");
    }
    printf("The linked list after deletion at the end is: ");
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