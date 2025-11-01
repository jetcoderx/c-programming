#include<stdio.h>
int main()
{
    int num,temp;

    printf("Enter a number:");
    scanf("%d",&num);

    temp=num/2;

    if (temp*2==num)
    printf("Number is even ");
    
    else 
    printf("Number is odd");

    return 0;
}