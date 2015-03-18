#include <stdio.h>
#include <math.h>

int main()
{	
	bool isNS = true;
	int n;
	scanf("%d",&n);
	for(int i=1; i*i<=n; i++){
		for(int j=i; j*j<=n; j++){
			if(i*i+j*j == n){
				isNS = false;
				printf("%d %d\n",i,j);
			}
		}
	}
	
	if(isNS) printf("No Solution\n");
	
	return 0;
}
