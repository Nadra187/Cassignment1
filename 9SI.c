//to calculate simple interest
# include<stdio.h>

int main(){
    float P,R,SI,T;
    int Y,M,D;
    printf("Enter the Principal value on which the interest is to be calculated.\t Rs.");
    scanf("%f",&P);
    printf("Enter the rate at which the interest is to be calculated.\t");
    scanf("%f",&R);
    printf("Enter the time for which the interest is to be calculated.\t");
    printf("\n YEARS-->\t ");
    scanf("%d",&Y);
    printf("\n MONTHS-->\t ");
    scanf("%d",&M);
    printf("\n DAYS-->\t");
    scanf("%d",&D);
    T=Y+(M/12)+(D/365);
     SI=(P*R*T)/100;
     printf("Simple Interest= Rs. %f",SI);
}