#include<stdio.h>
#include<string.h>

int main() {
    int i, x;
    char in[1000];

    while(gets(in)) {
        for(i = 0; i < strlen(in); i++) {
            x = in[i] - 7;
            printf("%c", x);
        }
        printf("\n");
    }
    return 0;
}
