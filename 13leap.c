//to check if the year is a leap year or not# include<stdio.h>

int main(){
    int year;
    printf("ENTER THE YEAR.\t");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is the Leap Year",year);
    }
    else{
        printf("%d is not the Leap Year",year);
    }
    
}