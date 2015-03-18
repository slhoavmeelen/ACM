#include <cstdio>
#include <cstring>
int main(){
    int cnt = 0;
    char str[81];
    while(scanf("%s", str) != EOF){
        if(strcmp(str, "<br>") == 0){
            printf("\n");
            cnt = 0;
        }else if(strcmp(str, "<hr>") == 0){
            if(cnt != 0) printf("\n");
            for(int i=0; i<80; i++){
                printf("-");
            }
            printf("\n");
            cnt = 0;
        }else{
            if(cnt+strlen(str)+(cnt==0?0:1) > 80){
                printf("\n%s", str);
                cnt = strlen(str);
            }else{
                if(cnt != 0) printf(" ");
                printf("%s", str);
                cnt += strlen(str)+1;
            }
        }
    }
    printf("\n");
    return 0;
}
