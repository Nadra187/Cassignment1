//swap two numbers without using variable
# include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two numbers.\n");
    scanf("%d \t %d",&a,&b);
    //technique-- first change second variable,,then first.
    a=a+b;   //a stores the sum of a and b
    b=a-b;   //b stores the value of a,as sum-b=a stored in b
    a=a-b;   //sum-a=b ,stored in a

    printf("Numbers after swapping are %d and %d",a,b);
}