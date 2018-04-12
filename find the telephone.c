#include<stdio.h>
#include<string.h>

int main() {
    int i;
    char t[50];

    while(gets(t)) {
        for(i = 0; i < strlen(t); i++) {
            if(t[i] == 'A' || t[i] == 'B' || t[i] == 'C')
                printf("2");
            else if(t[i] == 'D' || t[i] == 'E' || t[i] == 'F')
                printf("3");
            else if(t[i] == 'G' || t[i] == 'H' || t[i] == 'I')
                printf("4");
            else if(t[i] == 'J' || t[i] == 'K' || t[i] == 'L')
                printf("5");
            else if(t[i] == 'M' || t[i] == 'N' || t[i] == 'O')
                printf("6");
            else if(t[i] == 'P' || t[i] == 'Q' || t[i] == 'R' || t[i] == 'S')
                printf("7");
            else if(t[i] == 'T' || t[i] == 'U' || t[i] == 'V')
                printf("8");
            else if(t[i] == 'W' || t[i] == 'X' || t[i] == 'Y' || t[i] == 'Z')
                printf("9");
            else printf("%c", t[i]);
        }
        printf("\n");
    }
    return 0;
}
