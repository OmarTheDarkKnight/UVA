#include<stdio.h>

int main(){
    long int a, b, x, y, sq, n, i;

    while(scanf("%ld %ld", &a, &b) != EOF){
        if(a == 0 && b == 0)
            break;
        else{
            sq=0;
            x = sqrt(a);
            y = sqrt(b);
            for(i = x; i <= y; i++){
                n = i*i;
                if (n >= a && n <= b){
                    sq++;
                } else if(n > b)
                    break;
            }
        }
        printf("%ld\n", sq);
    }
    return 0;
}
