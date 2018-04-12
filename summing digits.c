#include<stdio.h>

 int re_sum(unsigned long int i){
    unsigned long int x=0;
    if(i / 10 == 0)
        return i;
    else {
        do {
            x += i%10;
            i= i/10;
            if(i < 10){
                x += i;
                break;
            }
        } while((i/10) >= 0);
        i = x;
        return re_sum(i);
    }
 }

 int main(){
    unsigned long int a, sum;

    while(scanf("%lu", &a) == 1)
    {
        if(a == 0)
            break;
        else if (a < 10)
            sum = a;
        else
            sum=re_sum(a);
        printf("%lu\n", sum);
    }
    return 0;
 }
