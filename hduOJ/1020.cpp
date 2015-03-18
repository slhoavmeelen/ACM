#include <cstdio>
#include <cstring>
char str[100010];
int main(){
    int n, cnt, len;
    char ch;
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++){
        fgets(str, sizeof(str), stdin);
        cnt = 1;
        ch = str[0];
        len = strlen(str);//算上'/0'
        for(int j=1; j<len; j++){
            if(str[j] == ch) cnt++;
            else{
                if(cnt != 1){
                    printf("%d",cnt);
                }
                printf("%c",ch);
                ch = str[j];
                cnt = 1;
            }
        }
        printf("\n");
    }
}
