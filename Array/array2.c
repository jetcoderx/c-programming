#include<stdio.h>
int main(){
    int A[100],n,i,max,min;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter A[%d]",i);
        scanf("%d",&A[i]);

    }
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    min=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]<min)
        min=A[i];

    }
    printf("Largest value of the array is %d",max);
    printf("\nSmallest value of the array is %d",min);

    return 0;
}