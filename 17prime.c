//to check whether a number is prime or not

//time complexity: O(num)
//time compexity is the time taken to execute all instructions.
//let a simple instructions takes k unit of time.
//then we can say time complexity is no of intructions executing for n input.
//yani input size no of instructions ko kese vary kr rha .
//which happens for only loop and recursion.
//in this ques, loop starts from 2 and ends to n-1.
//so no of times it is executing=n-1-2,i.e. n-3
//removing non dominant 3 so  => n.

#include<stdio.h>

int main(){
    int num,flag;
    printf("Enter the number.\t");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){        //better one: for(int i=2;i*i<=num;i++){
        if(num%i==0)
        flag=1;
    }
    if(flag==1){
        printf("NOT PRIME!");
    }
    else{
        printf("PRIME!");
    }
    return 0;
}