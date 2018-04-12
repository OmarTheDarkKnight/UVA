#include<stdio.h>
#include<string.h>

int main() {
    int i, j, k, a, b, x, y;
    float m, n, r;
    char name1[1000], name2[1000];
    char s1[27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char s2[27]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    while(gets(name1) && gets(name2)) {
        a = b = x = y = 0;
        for(i = 0; i < strlen(name1); i++) {
            if(name1[i] >= 97 && name1[i] <= 122) {
                for(j = 0; j < 26; j++){
                    if(name1[i] == s1[j])
                        a += (j+1);
                }
            }
            else if(name1[i] >= 65 && name1[i] <= 90) {
                for(j = 0; j < 26; j++){
                    if(name1[i] == s2[j])
                        a += (j+1);
                }
            }
            else continue;
        }

        for(i = 0; i < strlen(name2); i++) {
            if(name2[i] >= 97 && name2[i] <= 122) {
                for(j = 0; j < 26; j++){
                    if(name2[i] == s1[j])
                        b += (j+1);
                }
            }
            else if(name2[i] >= 65 && name2[i] <= 90) {
                for(j = 0; j < 26; j++){
                    if(name2[i] == s2[j])
                        b += (j+1);
                }
            }
            else continue;
        }

        while(1) {
            x += (a % 10);
            a = a / 10;
            if(a < 10) {
                x += a;
                a = x;
                x = 0;
            }
            if(x < 10 && a < 10) {
                x = a;
                break;
            }
        }
        m = x;

        while(1) {
            y += (b % 10);
            b = b / 10;
            if(b < 10) {
                y += b;
                b = y;
                y = 0;
            }
            if(y < 10 && b < 10) {
                y = b;
                break;
            }
        }
        n = y;

        if(m >= n)
            r = (n / m) * 100;
        else r = (m / n) * 100;
        printf("%0.2f %%\n", r);
    }
    return 0;
}
