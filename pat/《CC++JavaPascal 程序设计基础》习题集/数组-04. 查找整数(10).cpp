#include <stdio.h>
#include <string.h>

int main(){
	int n;
	long long x,temp;
	scanf("%d %lld",&n,&x);
	for(int i=0; i<n; i++){
		scanf("%lld",&temp);
		if(temp == x){
			printf("%lld",i);
			return 0;
		}
	} 
	printf("Not Found\n");
			
	return 0;
}
