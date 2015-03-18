#include <stdio.h>
#include <string.h>

int main(){
	int n,k;
	int arr[100];
	memset(arr,0,sizeof(arr));
	 
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1; i<=k; i++){
		for(int j=0; j<n-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(i != 0) printf(" ");
		printf("%d",arr[i]);
	}
			
	return 0;
}
