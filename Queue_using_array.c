#include<stdio.h>
int main()
{
    int a[10],f=0,r=0,choice;
    f++;
    do{
        printf("Enter the number:");
        r++;
        scanf("%d",&a[r]);
        printf("Do you want to continue(1 for yes,0 for no)?: ");
        scanf(" %d",&choice);
    }while(choice==1);
    printf("The queue is: ");   

    for(int i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}