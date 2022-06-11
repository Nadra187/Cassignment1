//to find all paalindrome numbers in a given range

//time complexity: O(e-s)
//k time anadar wla looop k inst
//ye chalega d times. d=no of digits of num .so nested loop,t(n)=d*k
//bahar wala chalega,jb jb tk start end k barabar nhi hota.i.e. (end-start) times
//so total=(e-s)*d*k =>(e-s)*d
//with continuasly changing e and s , d will change slowly. so (e-s)


#include<stdio.h>

int main(){
    int start,end,dig,reverse,num,k;
    printf("Enter the range in which you want to find the palindrome numbers.\t");
    scanf("%d %d",&start,&end);
    printf("Palindrome numbers in the given range= ");
    while(start<=end){                  //start=90,91 
        num=start;
        reverse=0;                     
        while(num!=0){
        dig=num%10;
        reverse=reverse*10+dig;        //09,19        
        num/=10;
        }     //printf("%d, ",reverse);          //09 
        if((start==reverse)&&(start>=10)){
            printf("%d\n",reverse);
        }
        start++; 
    }
    return 0;
}