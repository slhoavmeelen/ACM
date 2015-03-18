#include <stdio.h>
#include <string.h>

bool isPrime(int num){
	if(num == 1)
		return false;
	for(int i=2; i*i <= num; i++){
		if(num%i == 0)
			return false;
	}
	return true;
}

int main()
{	
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n/2; i++){
		if(isPrime(i)){
			if(isPrime(n-i)){
				printf("%d = %d + %d",n,i,n-i);
				break;
			}
		}
	}
	return 0;
}


