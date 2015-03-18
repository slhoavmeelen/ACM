#include <stdio.h>

int main(){
	int n,temp,sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		temp = 1;
		for(int j=1; j<=i; j++){
			temp *= 2;
		}
		sum += temp;
	} 
	printf("sum = %d",sum);
			
	return 0;
}
