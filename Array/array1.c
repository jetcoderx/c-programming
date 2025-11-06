/*Wap to read n elements and print these elements using 1d array*/
#include<stdio.h>
int main()  {
    int A[100],n,i;

    printf("Enter number of elements:");
    scanf("%d",&n); 
    
    for (i=0;i<n;i++)
    {
        printf("Enter elementA[%d]:",i);
        scanf("%d",&A[i]);
    }

    for (i=0;i<n;i++)
    {
        printf("%d\n",i,A[i]);
    }
    return 0;
}