#include <stdio.h>
#include <string.h>

int main(){
	int arr[10][10],n;
	memset(arr,0,sizeof(arr));
	arr[0][0] = 1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int j = 0;
		arr[i][j] = 1;
		for(j=1; j<i; j++){
			arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
		}
		for(j=n-i; j>0; j--) printf(" ");
		while(arr[i][j] != 0){
			printf("%4d",arr[i][j++]);
		}
		printf("\n");
	}
			
	return 0;
}
