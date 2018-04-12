#include<stdio.h>

int main() {
    int t, v, ans;

    while(scanf("%d %d", &v, &t) == 2)
        if(v >= -100 && v <= 100 && t >= 0&& t <= 200) {
                ans = v * t * 2;
            printf("%d\n", ans);
        }
    return 0;
}
