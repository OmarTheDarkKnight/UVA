#include<stdio.h>

int main() {
    unsigned long int a, b, x, x1, x2, s;

    while(scanf("%lu %lu", &a, &b) == 2) {
        if(a == 0 && b == 0)
            break;
        else {
            s = 0;
            x=0;
            while(a > 0 || b > 0) {
                x1 = a % 10;
                a = a / 10;
                x2 = b % 10;
                b = b / 10;
                x = (x + x1 + x2);
                if(x >= 10)
                    s++;
                x = x / 10;
            }
            if(s == 0)
                printf("No carry operation.\n");
            else if(s == 1)
                printf("1 carry operation.\n");
            else printf("%lu carry operations.\n", s);
        }
    }
    return 0;
}
