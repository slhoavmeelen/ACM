#include <stdio.h>

int main(){
	int n,temp;
	double sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2 == 1)
			sum += (double)1/(3*i-2);
		else 
			sum -= (double)1/(3*i-2);
	} 
	printf("sum = %.3lf",sum);
			
	return 0;
}
