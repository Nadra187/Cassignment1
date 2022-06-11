//reverse a number

//time complexity: O(log num)      (BUT ANS N KI TERMS MEIN CHAHIYE)
//if no of digits=d
//then the number lies between 10^(d-1) and 10^d
// 10^(d-1)<=num<10^d
//taking log,   (d-1)<=log(base 10)num<d
//(d-1)<=log(base 10)num    and     log(base 10)num<d
//d<=log num + 1  and     log num<d
//combining both,      log num<d<=log num + 1
//as 1 is non-dominant term, then we can see that 
//d is both upper and lower bounded by log num
//hence, d is big theta of log num.as well as big o and big ohm.
//yani d se bhi neeche hai log num.
//as ye program O(d) hai to ye O(log num) bhi hoga.
#include<stdio.h>

int main(){
    int num,dig,reverse=0;
    printf("ENTER THE NUMBER.\t");
    scanf("%d",&num);
    while(num!=0){
        dig=num%10;
        reverse=reverse*10+dig;
        num/=10;
    }
    printf("REVERSED NUMBER= %d",reverse);
    return 0;
}
