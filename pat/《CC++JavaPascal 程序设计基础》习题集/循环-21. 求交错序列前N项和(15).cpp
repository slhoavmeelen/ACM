#include <stdio.h>
#include <string.h>

int main(){
	int n;
	double sum = 0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2 == 0)
			sum -= (double)i/(i*2-1);
		else
			sum += (double)i/(i*2-1);
	}
	printf("%.3lf",sum);
			
	return 0;
}
