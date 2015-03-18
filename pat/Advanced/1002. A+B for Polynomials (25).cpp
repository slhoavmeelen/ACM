#include <cstdio>
#include <cstring>

const double eps = 1e-8;
const int maxn = 1005;

int main(){
	double p[maxn] = {0};
	int k,cnt=0,n;
	double a;
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&n,&a);
		p[n] += a;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&n,&a);
		p[n] += a;
	}
	for(int i=0; i<maxn; i++){
		if(p[i] != 0) cnt++;
	}
	printf("%d",cnt);	
	for(int i=maxn-1; i>=0; i--){
		if(p[i] != 0) printf(" %d %.1lf",i,p[i]);
	}
	
	return 0;
}
