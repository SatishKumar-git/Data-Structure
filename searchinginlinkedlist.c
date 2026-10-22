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
    printf("Travering the linked list\n");
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

    int search,spy=0;
    printf("Now, lets search for a number in the linked list\n");
    printf("Enter the number you want to search: "); 
    scanf("%d",&search);
    cpt=first;
    while(cpt->next!=NULL)
    {
        if(cpt->data==search)
        {
            printf("The number is found in the linked list\n");
            spy++;
            break;
        }
        cpt=cpt->next;
        if(cpt->data==search)
        {
            printf("The number is found in the linked list\n");
            spy++;
            break;
        }
    }
        if(spy==0)
        {
            printf("The number is not found in the linked list\n");
        }
    
}