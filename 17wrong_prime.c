//to check whether a number is prime or not
//check it for 15, it will show prime.whereas it is not prime.it is showing prime becoz
//agr 15 ko loop k first number(2) se divide kroge to,0 rem nhi dega,yani if statement mein nhi else statemnet mein jayega.
//or wahan prime print krdega...isliye better hai k flag use kro 
#include<stdio.h>

int main(){
    int num,i;
    printf("Enter the number.\t");
    scanf("%d",&num);
    for(i=2;i<num;i++){   //loop all the values of i till that number
        if(num%i==0){  
               //if i have value other than 1 and the number, n divide the number,tht is, i is the factor of the number
               printf("NOT PRIME");
               break;
         }
        else{
            printf("PRIME");      
            break;                //bcoz prime was printed many times.
        }
    }

     
    return 0;
}