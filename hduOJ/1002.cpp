#include <cstdio>
#include <cstring>

char s1[1005], s2[1005];
int s3[1010];

int calc(char s1[], char s2[]){
    int idx1 = 0, idx2 = 0, carry = 0, tmp, len3=0;
    idx1 = strlen(s1)-1;
    idx2 = strlen(s2)-1;
    while(idx1>=0 && idx2>=0){
        tmp = s1[idx1]-'0'+s2[idx2]-'0'+carry;
        s3[len3++] = tmp%10;
        carry = tmp/10;
        idx1--;
        idx2--;
    }
    while(idx1 >= 0){
        tmp = s1[idx1]-'0'+carry;
        s3[len3++] = tmp%10;
        carry = tmp/10;
        idx1--;
    }
    while(idx2 >= 0){
        tmp = s2[idx2]-'0'+carry;
        s3[len3++] = tmp%10;
        carry = tmp/10;
        idx2--;
    }
    return len3;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s %s",s1, s2);
        printf("Case %d:\n",i+1);
        printf("%s + %s = ", s1, s2);
        int len = calc(s1, s2);
        for(int j=len-1; j>=0; j--){
            printf("%d",s3[j]);
        }
        printf("\n");
        if(i < n-1)
            printf("\n");
    }
    return 0;
}
