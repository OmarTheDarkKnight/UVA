#include<stdio.h>

int main(){
    int a, b, t, i, sum;

    while(scanf("%d", &t) == 1){
        for(i = 0; i<t; i++){
            scanf("%d %d", &a, &b);
            sum = 0;
            if (a%2 == 0)
                a += 1;
            for(; a <= b; a+=2)
                sum += a;
        printf("Case %d: %d\n", i+1, sum);
        }
    }
    return 0;
}
