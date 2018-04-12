#include<stdio.h>


int main() {
    double v, v0, currentLength, longestLength;
    int i, numberOfDiscs;

    while(scanf("%lf %lf", &v, &v0) != EOF && (v > 0.0 || v0 > 0.0)) {
        longestLength = -1;
        numberOfDiscs = 0;
        for(i = 1 ; v/i > v0; i++) {
            currentLength = (double)i*0.3*sqrt(v/i - v0);
            if(longestLength <= currentLength) {
                if(fabs(longestLength - currentLength) <= 1e-12)
                    numberOfDiscs = 0;
                else numberOfDiscs = i;
                longestLength = currentLength;
            }
        }
        printf("%d\n", numberOfDiscs);
    }
    return 0;
}
