#include <stdio.h>
#include <string.h>

int record[5000];

int main(){
	int n,temp,sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		temp = 1;
		for(int j=1; j<=i; j++){
			temp *= j;
		}
		sum += temp;
	} 
	printf("%d",sum);
			
	return 0;
}
