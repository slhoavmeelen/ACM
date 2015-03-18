#include <cstdio>

int main(){
	int a,b,c,d;
	int res[33],len=0;
	scanf("%d%d%d",&a,&b,&d);
	c = a + b;
	do{
		res[len++] = c%d;
		c = c/d;
	}while(c > 0);
	for(int i=len-1; i>=0; i--){
		printf("%d",res[i]);
	}
		
	return 0;
}
