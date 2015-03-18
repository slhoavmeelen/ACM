#include <stdio.h>

bool find(int arr1[], int arr2[], int idx, int len2){
	for(int i=0; i<idx; i++){
		if(arr1[i] == arr1[idx]) return true;
	}
	for(int i=0; i<len2; i++){
		if(arr1[idx] == arr2[i]) return true;
	}
	return false;
}

int main(){
	int n1,n2,cnt=0;
	int arr1[20],arr2[20],arr3[40];
	scanf("%d",&n1);
	for(int i=0; i<n1; i++){
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&n2);
	for(int i=0; i<n2; i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0; i<n1; i++){
		if(!find(arr1,arr2,i,n2)) arr3[cnt++]=arr1[i];
	}
	for(int i=0; i<n2; i++){
		if(!find(arr2,arr1,i,n1)) arr3[cnt++]=arr2[i];
	}
	printf("%d",arr3[0]);
	for(int i=1; i<cnt; i++){
		printf(" %d",arr3[i]);
	}
			
	return 0;
}
