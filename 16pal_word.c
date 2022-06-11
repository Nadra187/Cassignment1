//to check palindrome of a word

//time complexity: O(no.of characters in string)
//as characters are integers and string is the list of characters.
//so as the value of string 

#include<stdio.h>
#include<string.h>

int main(){
    int l,n;
    char s[10];
    printf("Enter the word.\t");
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]!=s[l-i-1]){
            n=1; 
            break;
        }
    } 
    if(n==1)
    printf("%s is not palindrome",s);
    else
    printf("%s is palindrome",s);
    
       return 0;
}