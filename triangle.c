#include<stdio.h>
int main()
{
    int s1,s2,s3;

    printf("Enter sides of triangle:");
    scanf("%d %d %d", &s1,&s2,&s3);

    if (s1==s2&&s2==s3)
    printf("Equilateral triangle:");

    else if (s1==s2||s2==s3||s3==s1)
    printf("isosceles triangle:");

    else 
    printf("Scalene triangle;");

    return 0;

}   