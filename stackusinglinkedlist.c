#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};  
int main()
{
    struct node *ptr,*top,*first;
    char ch;
    first=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number: ");
    scanf("%d",&first->data);
    first->next=NULL;
    ptr=first;  

    do{
        top=(struct node*)malloc(sizeof(struct node));
        printf("Enter the number: ");
        scanf("%d",&top->data);
        top->next=ptr;
        ptr=top;
        printf("Do you want to continue(y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y');
    ptr=top;
    while(ptr->next!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data); 
    printf("->NULL\n");
}