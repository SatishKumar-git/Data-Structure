#include<stdio.h>
void traverse();
void push();
void pop();
int a[10],f=0,r=0,choice;
int main()
{  
    do{
        printf("Enter the number:");
        r++;
        scanf("%d",&a[r]);
        printf("Do you want to continue(1 for yes,0 for no)?: ");
        scanf(" %d",&choice);
    }while(choice==1);

    printf("The queue is: ");
    for(int i=f+1;i<=r;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n1. Push\n2. Pop\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: push();
                traverse();
                break;
        case 2: pop();
                traverse();
                break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
void push() {
    if (r == 10) { // Queue is full
        printf("Queue is full\n");
    } else {
        r++;
        printf("Enter the number: ");
        scanf("%d", &a[r]);
    }
}

void pop() {
    if (f == r) { // Queue is empty
        printf("Queue is empty\n");
    } else if (f +1 == r) { // Only one element left
        a[f+1] = '\0';
        f = 0;
        r = 0;
    } else {
        a[f+1] = '\0'; // Remove the front element
        f++;
    }
}
void traverse() {
   
        printf("The queue is: ");
        for (int i = f + 1; i <= r; i++) { // Adjusted to start from f + 1
            printf("%d ", a[i]);
        }
        printf("\n");
    }

