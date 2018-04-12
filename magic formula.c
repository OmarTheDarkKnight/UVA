#include<stdio.h>
#include<math.h>

int main() {
    int i, j, count;
     long long int a, b, c, d, l, x;

    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l) == 5 ) {
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
            break;
        count = 0;
        for(i = 0; i <= l; i++) {
            x = a*pow(i,2) + b*i + c;
            if(x%d == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
