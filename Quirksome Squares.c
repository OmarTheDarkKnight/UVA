#include<stdio.h>
#include<math.h>

int main() {
    long long int i, firstHalf, lastHalf, limit, divController;
    double tempLimit, tempDivController;
    int n;

    while(scanf("%d", &n) == 1) {
        tempLimit = pow(10, n);
        tempDivController = pow(10, (n/2));

        limit = tempLimit;
        divController = tempDivController;

        for(i = 0; i < limit; i++) {
            firstHalf = i/divController;
            lastHalf = i%divController;
            if((firstHalf+lastHalf)*(firstHalf+lastHalf) == i) {
                if(n ==2)
                    printf("%02d\n", i);
                else if(n ==4)
                    printf("%04d\n", i);
                else if(n ==6)
                    printf("%06d\n", i);
                else if(n ==8)
                    printf("%08d\n", i);
            }
        }
    }
    return 0;
}
