#include <stdio.h>

int main(){
	int monkeys[1000+1]={};
	int n,cnt=3,left,idx=1;
	scanf("%d",&n);
	left = n;
	while(left != 1){
		if(monkeys[idx] == 0) cnt--;
		if(cnt == 0){
			cnt = 3;
			monkeys[idx] = 1;
			left--;
		}
		idx++;
		if(idx == n+1) idx = 1; 
	}	
	for(int i=1; i<=n; i++){
		if(monkeys[i] == 0){
			printf("%d\n",i);
			break;
		}
	}
			
	return 0;
}
