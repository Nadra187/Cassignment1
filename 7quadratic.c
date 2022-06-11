//roots of a quadratic equation
#include<stdio.h>
#include<math.h>
//first find discriminant,if it is greater then 0,then distinct and real roots,if equal to 0,then equal and real roots, otherwise imaginary roots 
int main(){
    float a,b,c,D,root1,root2,root,real,imag;
    printf("Enter a of the equation");
    scanf("%f",&a);
    printf("Enter b of the equation");
    scanf("%f",&b);
    printf("Enter c of the equation");
    scanf("%f",&c);
    D=(pow(b,2))-(4*a*c);
    if(D>0){
         root1=(-b+sqrt(D))/(2*a);
         root2=(-b-sqrt(D))/(2*a);
         printf("Roots of the quadratic equation are %f and %f",root1,root2);
    }
    else if(D==0){
         root=(-b)/(2*a);
         printf("Roots of the quadratic equation are %f and %f",root,root);
    }
     else{
         real=(-b)/(2*a);
         imag=(sqrt(-D))/(2*a);
         printf("Roots of the quadratic equation are %f+%fi and %f-%fi",real,imag,real,imag);
    }
   
    return 0;
}
