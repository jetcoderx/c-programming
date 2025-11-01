/*To find greatest of two numbers*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,greatest;

    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1==num2&&num2==num3)
    printf("All numbers are same");

    else {
        
         greatest=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    
        printf("Greatest Number is %d",greatest);

    }
   

    return 0;

}