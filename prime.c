#include<stdio.h>
int main()
{
    int num,i=2,count=0;

    printf("Enter a number:");
    scanf("%d",&num);

    while(i<=num/2)
     {
        if(num%i==0)
        count=count+1;
        i=i+1;
     }
    if (count==0)
    printf("PRIME NUMBER:");

    else
    printf("NOT PRIME NUMBER:");

    return 0;

}