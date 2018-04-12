#include<stdio.h>
#include<string.h>

int main(){
    int i, k, members, money, p_num, j, new_line = 0;
    char giver[100], receiver[100];

    while(scanf("%d", &members)!=EOF){
        struct gift{
            char name[100];
            int spend;
            int receive;
        } a[20]={0,0,0};

          for(i = 0; i < members; i++)
            scanf("%s", a[i].name);

          for(i = 0; i < members; i++){
            scanf("%s", giver);
            scanf("%d %d", &money, &p_num);

            for(j = 0; j < members; j++)
                if( strcmp( giver, a[j].name) == 0)
                break;
            if( p_num == 0)
                a[j].receive += money;
            else a[j].receive += money % p_num;

            a[j].spend += money;

            for(j = 0; j < p_num; j++){
                scanf("%s", receiver);
                for(k = 0; k < members; k++)
                    if( strcmp( receiver, a[k].name) == 0)
                        a[k].receive += money / p_num;
            }
          }
          if(new_line)
            printf("\n");
          new_line = 1;
          for(i = 0; i < members; i++){
            printf("%s %d", a[i].name, a[i].receive - a[i].spend);
            printf("\n");
          }


    }
    return 0;
}
