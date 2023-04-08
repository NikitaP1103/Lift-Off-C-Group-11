#include<stdio.h>
int main()
{
    int size,i,count=0,n;
    printf("Enter number of elements:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to find its occurence:");
    scanf("%d",&n);

    for(i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            count++;
        }
    }
    printf("\nOccurence of %d is:%d",n,count);
    return 0;
}