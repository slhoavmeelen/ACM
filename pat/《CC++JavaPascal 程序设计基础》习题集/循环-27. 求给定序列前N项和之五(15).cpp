#include <stdio.h>

int main(){
	int n,temp;
	double sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
			sum += (double)1/i;
	} 
	printf("sum = %.6lf",sum);
			
	return 0;
}
