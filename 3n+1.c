#include<stdio.h>
int main(){
    long long int a, b, i, j, temp, k, count;

    while(scanf("%lld %lld",&a, &b) != EOF){
        printf("%lld %lld ", a, b);
        if(a > b){
            temp = b;
            b = a;
            a = temp;
        }
        k = 0;
        for(j = a; j <= b; j++){
            count=1;
            for(i = j; i > 1; ){
                if(i%2 == 1){
                    i = 3*i + 1;
                    i /= 2;
                    count += 2;
                }
                else{
                    i /= 2;
                    count++;
                }
            }
            if(count > k)
                k = count;
        }
        printf("%lld\n", k);
    }
    return 0;
}
