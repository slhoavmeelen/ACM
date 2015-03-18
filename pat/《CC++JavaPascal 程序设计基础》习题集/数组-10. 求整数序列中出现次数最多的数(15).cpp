#include <stdio.h>

int main(){
	int n;
	int record[1000][2]={},cnt=0,temp;
	bool isFound;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&temp);
		isFound = false;
		for(int i=0; i<cnt; i++){
			if(temp == record[i][0]){
				record[i][1]++;	
				isFound = true;
				break;
			}
		}	
		if(!isFound){
			record[cnt][0] = temp;
			record[cnt][1] = 1;
			cnt++;
		}
	}
	int max = 0;
	int idx = 0;
	for(int i=0; i<cnt; i++){
		if(record[i][1] > max){
			max = record[i][1];
			idx = i;
		}
	}
	printf("%d %d",record[idx][0],record[idx][1]);
			
	return 0;
}
