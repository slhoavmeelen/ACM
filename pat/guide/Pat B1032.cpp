#include <cstdio>

const int maxn = 100010;

int school[maxn] = {};

int main(){
	int n,max = 0,mid = -1;
	int schID,score;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d%d",&schID,&score);
		school[schID] += score;
		if(school[schID] > max){
			max = school[schID];
			mid = schID;
		}
	}
	printf("%d %d\n",mid,max);
	
	return 0;
}
