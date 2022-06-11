//to find the sum of marks in 5 subjects and their percentage
#include<stdio.h>

int main(){
    int sub1,sub2,sub3,sub4,sub5,sum,percentage,max;
    printf("Enter the maximum marks to be obtained in a subject\t");
    scanf("%d",&max);
    printf("ENTER THE MARKS OF FIVE SUBJECTS\t");
    scanf("\t%d",&sub1);
    scanf("\t%d",&sub2);
    scanf("\t%d",&sub3);
    scanf("\t%d",&sub4);
    scanf("\t%d",&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=(sum/(max*5))*100;
    printf("The sum of the marks in the five subjects and their percentage is,%d and %d,respectively",sum,percentage);

    return 0;
}