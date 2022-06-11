//to convert from celcius to fahrenheit degree
# include<stdio.h>

int main(){
    float C,F;
    printf("Enter the temperature in celsisus degree. \t ");
    scanf("%f",&C);
    F=((C*9/5)+32)/32;
    printf("The temperature in Fahrenheit degree is %f",F);
    }