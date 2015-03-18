#include <cstdio>

bool isPrime(int n){
	for(int i=2; i*i<=n; i++){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
	int prime[10000];
	int n,cnt=0,quantity=0;
	scanf("%d",&n);
	for(int i=2; i<=n; i++){
		if(isPrime(i)) prime[cnt++] = i; 
	}
	for(int i=0; i<cnt-1; i++){
		if(prime[i+1] == prime[i]+2) quantity++; 
	}
	printf("%d\n",quantity);
	
	return 0;
}
