#include <cstdio>

int main(){
    int n;
    char ch;
    scanf("%d %c",&n, &ch);
    for(int i=0; i<n; i++){
        printf("%c",ch);
    }
    printf("\n");
    for(int i=0; i<(n+1)/2-2; i++){
        printf("%c",ch);
        for(int j=0; j<n-2; j++){
            printf(" ");
        }
        printf("%c\n",ch);
    }
    for(int i=0; i<n; i++){
        printf("%c",ch);
    }
    return 0;
}
