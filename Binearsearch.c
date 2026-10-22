#include <stdio.h>
int main() {
    int a[10],x,lb=0,ub=9,mid,spy=0;
    
    printf("Enter the number of elements in the array: ");
    for(int i = 0; i <10; i++) {
    scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search: ");    
    scanf("%d", &x);
    
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==x)
        {
            printf("The number present at index %d", mid);
            spy++;
            break;
        }
        else if(x>a[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    if(spy==0)
        {
            printf("The number is not present in the array");
        }

}