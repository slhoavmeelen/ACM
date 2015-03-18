#include <cstdio>

int main(){
	int coef,index;
	bool isFirst = true;
	while(scanf("%d%d",&coef,&index) != EOF){
		if(index == 0) break;
		if(!isFirst) printf(" ");
		printf("%d %d",coef*index, index-1);
		isFirst = false;
	}
	if(isFirst) printf("0 0\n");
	
	return 0;
}
