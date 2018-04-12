#include<stdio.h>
#include<math.h>

int main() {
    int long t, n, i=0, j;

    while(scanf("%ld", &t) == 1){
        while(i < t) {
            scanf("%ld", &n);
            if(n >= -1000 && n <= 1000) {
                n = n * 567;
                n = n / 9;
                n = n + 7492;
                n = n * 235;
                n = n / 47;
                n = n - 498;
            }
            n = n % 100;
            n = n / 10;
            if(n < 0) {
                n = (-1)* n;
            }

            printf("%ld\n", n);
            i++;
        }
    }
    return 0;
}
