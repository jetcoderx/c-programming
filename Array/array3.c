/*WAP to read 1d array find the largest and second largest element of the 
arrray then swap their position and print the new array*/
#include<stdio.h>
int main(){
    int A[100],n,i,max1,max2,p1,p2,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter A[%d]",i);
        scanf("%d",&A[i]);

    }
    max1=A[0];
    max2=A[0];

    for(i=0;i<n;i++)
    {
        if (max1<A[i])
        {
            max1=A[i];
            p1=i;
        }
    }
    for (i=0;i<n;i++)
    {   
        if(i==p1)
        continue;
        else if (max2<A[i])
        max2=A[i];
        p2=i;

    }
    printf("Largest=%d and Second largest=%d",max1,max2);
    temp=A[p1];
    A[p1]=A[p2];
    A[p2]=temp;

    printf("\nNew Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);

    }

    return 0;

}
    