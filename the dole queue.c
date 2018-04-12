#include<stdio.h>

int main() {
    int n, k, m, i, j, x, y;

    while(scanf("%d %d %d", &n, &k, &m) == 3) {
        if(n == 0 && k == 0 && m == 0)
            break;
        int q[21], c ;
        q[0] = c = 0;
        for(i = 1; i <= n; i++)
            q[i] = 1;

        for(i = 0, j = n+1; ;) {
            x = y = 0;
            while(x < k) {
                i++;
                if(i > n)
                    i -= n;
                if(q[i] == 1)
                    x++;
            }

            while(y < m) {
                j--;
                if(j < 1)
                    j += n;
                if(q[j] == 1)
                    y++;
            }

            q[i] = 0;
            q[j] = 0;

            if(i == j) {
                printf("%3d", i);
                c ++;
            }
            else {
                printf("%3d%3d", i, j);
                c += 2;
            }

           if(c == n)
                break;
            else
                printf(",");
        }
        printf("\n");
    }
}
