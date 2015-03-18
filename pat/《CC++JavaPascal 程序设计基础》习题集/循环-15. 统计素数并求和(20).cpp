#include <stdio.h>

bool isPrime(int num){
	if(num == 1)
		return false;
	for(int i=2; i*i<=num; i++){
		if(num%i == 0)
			return false;
	}	
	return true;
}

int main()
{	
	int m,n,sum=0,count=0;
	scanf("%d%d",&m,&n);
	for(int i=m; i<=n; i++){
		if(isPrime(i)){
			sum += i;
			count++;
		}
	}
	printf("%d %d",count,sum);
	
	return 0;
}
