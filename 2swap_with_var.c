//swap two variables using a variable

//time complexity: O(1)

#include<stdio.h>

int main(){
    int num1,num2,tem;
    printf("Enter the first number.\t");
    scanf("%d",&num1);
    printf("Enter the second number.\t");
    scanf("%d",&num2);
    
    tem=num2;  
    num2=num1; 
    num1=tem;
    printf("After swapping, first number= %d",num1);
    printf("\nAfter swapping, second number= %d",num2);

    return 0;
}