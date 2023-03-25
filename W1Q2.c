#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    {
        if(n<0)
        printf("Number is negative.");
        else if (n>0)
        printf("Number is positive.");
        else
        printf("Number is zero.");

    }
    return 0;
}
