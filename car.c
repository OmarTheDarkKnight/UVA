#include<stdio.h>
#include<math.h>

int main() {
    float u, v, a, t, s;
    int x, i=0;

    while(scanf("%d", &x) == 1) {
            if(x == 0)
                break;
        switch(x) {
            case 1:
                scanf("%f %f %f", &u, &v, &t);
                s = ((u+v)/2) * t;
                a = (v-u) / t;
                printf("Case %d: %0.3f %0.3f\n", i+1, s, a);
                i++;
                break;

            case 2:
                scanf("%f %f %f", &u, &v, &a);
                t = (v-u) / a;
                s = ((u+v)/2) * t;
                printf("Case %d: %0.3f %0.3f\n", i+1, s, t);
                i++;
                break;

            case 3:
                scanf("%f %f %f", &u, &a, &s);
                v = sqrt(pow(u,2) + 2 * a * s);
                t = (v-u) / a;
                printf("Case %d: %0.3f %0.3f\n", i+1, v, t);
                i++;
                break;

            case 4:
                scanf("%f %f %f", &v, &a, &s);
                u = sqrt(pow(v,2) - 2 * a * s);
                t = (v-u) / a;
                printf("Case %d: %0.3f %0.3f\n", i+1, u, t);
                i++;
                break;
        }
    }
    return 0;
}
