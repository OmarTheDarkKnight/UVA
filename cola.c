#include<stdio.h>
#include<stdbool.h>

int main() {
    int boughtCokes, emptyBottles, i, j , k;

    while(scanf("%d", &boughtCokes) != EOF) {
        emptyBottles = boughtCokes;
        int newBottles = boughtCokes;
        while(emptyBottles >= 3) {
            boughtCokes = emptyBottles/3;
            newBottles += boughtCokes;
            emptyBottles = emptyBottles % 3;
            emptyBottles += boughtCokes;

        }
        if(emptyBottles >= 2)
            newBottles++;
        printf("%d\n", newBottles);
    }
    return 0;
}
