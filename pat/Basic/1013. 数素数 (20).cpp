#include <cstdio>

const int maxn = 1000001;

int prime[maxn],num;
bool p[maxn] = {};

void findPrime(int n){
	for(int i=2; i<maxn; i++){
		if(!p[i]){
			prime[num++] = i;
			if(num >= n) break;
			for(int j=i+i; j<maxn; j+=i){
				p[j] = true;
			}
		}
	}
}

int main(){
	int m,n,cnt=0;
	scanf("%d%d",&m,&n);
	findPrime(n);
	for(int i=m; i<=n; i++){
		printf("%d",prime[i-1]);
		cnt++;
		if(cnt%10!=0 && i<n) printf(" ");
		else printf("\n");
	}
	
	return 0;
}
