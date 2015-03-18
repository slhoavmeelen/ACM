#include <cstdio>

int main(){
	int n;
	char id[20];
	bool isAllPass = true, isNum = true;
	int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	scanf("%d\n",&n);
	for(int i=0; i<n; i++){
		fgets(id, sizeof(id), stdin);
		int sum = 0;
		int j;
		for(j=0; j<17 && id[j]>='0' && id[j]<='9'; j++){
			sum += weight[j]*(id[j]-'0');
		}
		if(j!=17 || m[sum%11] != id[17]){
			isAllPass = false;
			printf("%s",id);
		}
	}
	if(isAllPass){
		printf("All passed\n");
	}
		
	return 0;
}
