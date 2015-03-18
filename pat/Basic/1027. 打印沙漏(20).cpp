#include <cstdio>

int getLevel(int n){
	int level = 1;
	while(2*level*level-1 <= n) level++;
	return level-1;
}

int main(){
	int n;
	char ch;
	scanf("%d %c",&n,&ch);
	int level = getLevel(n);
	for(int i=-1*(level-1); i<level; i++){
		int tmp = i;
		if(tmp < 0) tmp *= -1;
		for(int j=0; j<level-tmp-1; j++) printf(" ");
		for(int j=0; j<2*tmp+1; j++) printf("%c",ch);
		printf("\n"); 
	}
	printf("%d\n",n-2*level*level+1);
		
	return 0;
}
