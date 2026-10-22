#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
int main()
{
    int a[10],i,n,x,top=0;
    char ch;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        top++;
        scanf("%d",&a[top]);
    }
    do{
        printf("enter the choice:");
        printf("\n enter 1 for push or \n 2 for pop:");
        scanf("%d",&x);
        switch(x)
        {
            case 1 : push();
                    break;
            case 2 : pop();
                    break;
            default :
                    printf("wrong choice:");

        }
        printf("do you want to continue \n enter 1 for yes any other key for no:");
        scanf(" %c ",&ch);
    }while(ch=='1');
    push();
      {
        if(top==9)//stack is full
        {
            printf("stack is full");
        }
        else
        {
            printf("enter the number:");
            top++;
            scanf("%d",&a[top]);
        }
      }
    
    pop();
      {
        if(top==0)//stack is empty
        {
            printf("stack is empty");
        }
        else
        {
            printf("the number is %d",a[top]);
            top--;
        }
        }  
        return 0;   
    }