#include <stdio.h>
#include <math.h>

int main()
{	
	int p[10];
	int n,sum=0,temp;
	scanf("%d",&n);
	for(int i=0; i<=9; i++){
		p[i] = pow(i,n);
	}
	for(int i=pow(10,n-1); i<pow(10,n); i++){
		temp = i;
		sum = 0;
		for(int j=0; j<n; j++){
			sum += p[temp%10];
			temp /= 10;
		}
		if(sum == i){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
