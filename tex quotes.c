#include<stdio.h>
#include<string.h>

int main(){
    int pos_in, pos_out, n, count;
    char in[2000];

    while(gets(in)){

        char out[3000];

        for(pos_in = 0, pos_out = 0; pos_in < strlen(in); pos_in++){
            if(in[pos_in] == '"'){
                count++;
                if(count%2 == 1){
                    out[pos_out] = '`';
                    pos_out++;
                    out[pos_out] = '`';
                    pos_out++;
                }
                else{
                    out[pos_out] = '\'';
                    pos_out++;
                    out[pos_out] = '\'';
                    pos_out++;
                }
            }
            else{
                out[pos_out] = in[pos_in];
                pos_out++;
            }
        }
        for(n = 0; n < pos_out; n++)
            printf("%c", out[n]);
        printf("\n");
    }
    return 0;
}
