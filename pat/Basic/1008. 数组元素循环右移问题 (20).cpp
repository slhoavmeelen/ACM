#include <cstdio>

void reverse(int arr[], int start, int end){
	for(int i=0; i<=(end-start)/2; i++){
		int temp = arr[start+i];
		arr[start+i] = arr[end-i];
		arr[end-i] = temp;
	}
}

int main(){
	int n,m;
	int data[100];
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",&data[i]);
	}
	if(m%n > 0){
		m = n-m%n;
		reverse(data, 0, m-1);
		reverse(data, m, n-1);
		reverse(data, 0, n-1);	
	}
	for(int i=0; i<n; i++){
		if(i != 0) printf(" ");
		printf("%d",data[i]);
	}
	
	return 0;
}
