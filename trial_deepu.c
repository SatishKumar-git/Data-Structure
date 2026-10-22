#include<stdio.h>
int main()
{
    int a[5],spy=0,x;
    printf("Enter 5 numbers:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    
    }
    printf("you entered:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("enter the number to be searched:\n");
    scanf("%d",&x);
    for(int i=0; i<5; i++)
    {
        if(a[i]==x)
        {
           printf("the number %d is found \n",x);
           spy++; 
        }
    }
       
    

    if(spy==0)
    {
        printf("the number %d is not found\n",x);
    }
    return 0;
}