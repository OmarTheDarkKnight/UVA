#include<stdio.h>

int main() {
    int n, k, cigar, butt;

    while(scanf("%d %d", &n, &k) != EOF) {
        cigar = n;
        butt = n;
        while(n != 0) {
            n = butt / k;
            cigar += n;
            butt = (butt % k) + n;
        }
        printf("%d\n", cigar);
    }
    return 0;
}
