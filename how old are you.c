#include<stdio.h>

int main() {
    int t, i;
    long int d1, m1, y1, d2, m2, y2, age, x1, x2;

    while(scanf("%d", &t) == 1) {
        for(i = 0; i < t; i++) {
            scanf("%ld/%ld/%ld", &d1, &m1, &y1);
            scanf("%ld/%ld/%ld", &d2, &m2, &y2);

            x1 = (y1*365) + (m1*30) + d1;
            x2 = (y2*365) + (m2*30) + d2;
            age = x1 - x2;
            if(age < 0)
                printf("Case #%d: Invalid birth date\n", i+1);
            else {
                age = age / 365;
                if(age > 130)
                    printf("Case #%d: Check birth date\n", i+1);
                else
                    printf("Case #%d: %ld\n", i+1, age);
            }
        }
    }
    return 0;
}
