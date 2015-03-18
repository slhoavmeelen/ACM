#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

void tag(int idx, int arr[], int len, bool isKey[]){
	int temp;
	if(!isKey[idx]) return;
	temp = arr[idx];
	while(temp != 1){
		if(temp%2 == 0){
			temp /= 2;
		}else{
			temp = temp+(temp+1)/2;
		}
		
		for(int i=0; i<len; i++){
			if(i == idx) continue;
			if(arr[i]==temp && isKey[i]){
				isKey[i] = false;
				break;
			}
		}
	}
}

int main(){
	int n;
	int num[10000],cnt=0;
	bool isKey[100],isFirst = true;
	memset(isKey, true, sizeof(isKey));
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&num[i]);
	}
	for(int i=0; i<n; i++){
		tag(i, num, n, isKey);
	}
	for(int i=0; i<n; i++){
		if(isKey[i]) num[cnt++] = num[i];
	}
	sort(num, num+cnt);
	for(int i=cnt-1; i>=0; i--){
		if(i != cnt-1) printf(" ");
		printf("%d",num[i]);
	}
	
	return 0;
}
