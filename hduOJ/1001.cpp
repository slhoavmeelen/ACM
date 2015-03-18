#include <cstdio>
// the result will be in the range of 32-bit signed integer
// but n*(n+1) may bigger than 32-bit
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        if(n%2 == 0)
            printf("%d\n\n",n/2*(n+1));
        else
            printf("%d\n\n",(1+n)/2*n);
    }
    return 0;
}
