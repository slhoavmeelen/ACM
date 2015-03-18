#include <stdio.h>

int main(){
	int n,num,max=0;
	int digit[10] = {};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&num);
		while(num>0){
			digit[num%10]++;
			num /= 10;
		}
	}
	for(int i=0; i<10; i++){
		if(digit[i] > max) max = digit[i];
	}
	printf("%d:",max);
	for(int i=0; i<10; i++){
		if(digit[i] == max) printf(" %d",i);
	}
			
	return 0;
}
