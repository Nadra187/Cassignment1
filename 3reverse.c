//revere the case of input character

//time complexity: O(1)

#include<stdio.h>
#include<ctype.h>

int main(){
    char alphabet;
    printf("Enter any alphabet.\t");
    scanf("%c",&alphabet);
    if(islower(alphabet)){
        printf("%c",toupper(alphabet));
    }
    else{
         ("%c",tolower(alphabet));
    }

    
    return 0;
}