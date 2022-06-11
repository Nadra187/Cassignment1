//sum of first and last digit of a number

//time complexity: O(no.of digits)
#include<stdio.h>

int main(){
    int num,dig,sum,first_dig,last_dig;
    printf("Enter the number.\t");
    scanf("%d",&num);
    for(int i=0;num!=0;i++){
        dig=num%10;
        num/=10;
        if(num==0){
            first_dig=dig;
        }
        else if(i==0){
             last_dig=dig;
        }
    }
    sum=first_dig+last_dig;
    printf("Sum of first and last digit of the number= %d",sum);
    return 0;
}