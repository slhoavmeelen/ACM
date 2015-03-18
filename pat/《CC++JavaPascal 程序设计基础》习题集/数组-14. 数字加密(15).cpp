#include <stdio.h>

int main(){
	int arr[4] = {};
	int n,i;
	scanf("%d",&n);
	i = 3;
	while(n>0){
		arr[i--] = n%10;
		n /= 10;
	}
	for(i=0; i<4; i++){
		arr[i] = (arr[i]+9)%10;
	}
	i = arr[0];
	arr[0] = arr[2];
	arr[2] = i;
	i = arr[1];
	arr[1] = arr[3];
	arr[3] = i;
	printf("The encrypted number is %d%d%d%d\n",arr[0],arr[1],arr[2],arr[3]);
				
	return 0;
}
