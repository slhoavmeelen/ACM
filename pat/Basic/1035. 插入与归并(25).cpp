#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 111;
int origin[N], tmpOri[N], changed[N];
int n;

bool isSame(int A[], int B[]){
	for(int i=0; i<n; i++){
		if(A[i] != B[i]) return false;
	}
	return true;
}

bool showArray(int A[]){
	for(int i=0; i<n; i++){
		printf("%d",A[i]);
		if(i < n-1) printf(" ");
	}
	printf("\n");
}

bool insertSort(){
	bool flag = false;
	for(int i=1; i<n; i++){
		if(i!=1 && isSame(tmpOri, changed)){
			flag = true;
		}
		int tmp = tmpOri[i],j=i;
		while(j > 0 && tmpOri[j-1] > tmp){
			tmpOri[j] = tmpOri[j-1];
			j--;
		}
		tmpOri[j] = tmp;
		if(flag == true){
			return true;	
		}
	}
	return false;
}

void mergeSort(){
	bool flag = false;
	for(int step = 2; step / 2 <= n; step *= 2){
		if(step != 2 && isSame(tmpOri, changed)){
			flag = true;
		}
		for(int i=0; i<n; i += step){
			sort(tmpOri+i, tmpOri+min(i+step, n));	
		}
		if(flag == true){
			showArray(tmpOri);
			return;
		}
	}
}

int main(){	
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&origin[i]);
		tmpOri[i] = origin[i];
	}
	for(int i=0; i<n; i++){
		scanf("%d",&changed[i]);
	}
	if(insertSort()){
		printf("Insertion Sort\n");
		showArray(tmpOri);
	}else{
		printf("Merge Sort\n");
		for(int i=0; i<n; i++){
			tmpOri[i] = origin[i];
		}
		mergeSort();
	}
	
	return 0;
}
