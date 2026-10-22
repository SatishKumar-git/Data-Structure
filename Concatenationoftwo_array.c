#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("Enter the elements of the first array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        c[i+5]=b[i];
    }
    for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}