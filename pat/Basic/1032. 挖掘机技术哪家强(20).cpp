#include <cstdio>

const int maxn = 100005;

int id[maxn] = {};

int main(){
	int n,max = 0, idx = -1;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		int n,score;
		scanf("%d %d",&n,&score);
		id[n] += score;
		if(id[n] > max){
			max = id[n];
			idx = n;
		}
	}
	printf("%d %d",idx, id[idx]);
		
	return 0;
}
