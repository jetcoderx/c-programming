/*WAP to read two 1-d array and save sum of corresponding array elements in third array and print array*/
#include<stdio.h>
int main()
{
    int A[100],B[100],c[100],n,i,sum;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter elements of A[%d] and B[%d]",i,i);
        scanf("%d %d",&A[i], &B[i]);
        sum=A[i]+B[i];
        c[i]=sum;

    }
    printf("\nNEW ARRAY\n");

    for(i=0;i<n;i++)
    printf("%d\t",c[i]);

    return 0;
}