//to calculate area of circle
# include<stdio.h>
# include<math.h>

int main(){
   float r,pie,area,circumference;
   printf("ENTER THE RADIUS(in cm).\t");
   scanf("%f",&r);
   pie=22.0/7.0;
   area=pie*pow(r,2);   
   printf("AREA OF THE CIRCLE(in cm square) IS %f  \n",
   area);
   circumference=2*pie*r;
   printf("CIRCUMFERENCE OF THE CIRCLE(in cm) IS %f",circumference);
    


}