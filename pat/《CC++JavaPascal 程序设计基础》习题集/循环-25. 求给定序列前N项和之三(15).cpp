#include <stdio.h>
#include <string.h>

int record[5000];

int main(){
	int n,temp;
	double sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		sum += (double)1/(2*i-1);
	} 
	printf("sum = %.6lf",sum);
			
	return 0;
}
