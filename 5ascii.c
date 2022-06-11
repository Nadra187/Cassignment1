//to find ASCII value of input character
#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter a alphabet.\t");
    scanf("%c",&alphabet);
    printf("The ASCII value of %c is %d",alphabet,alphabet);
    return 0;
}