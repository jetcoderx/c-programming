#include<stdio.h>
int main()
{
    int rad,area;

    printf("Enter Radius of a cirle:");
    scanf("%d",&rad);

    area=3.14*rad*rad;

    printf("Area of circle is=%d",area);

    return 0;
}