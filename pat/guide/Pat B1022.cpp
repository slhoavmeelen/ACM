#include <cstdio>

int main(){
	int a,b,c,d,cnt=0;
	int res[33];
	scanf("%d%d%d",&a,&b,&d);
	c = a+b;
	do{
		res[cnt++] = c%d;
		c /= d;
	}while(c != 0);
	for(int i=cnt-1; i>=0; i--){
		printf("%d",res[i]);
	}
	
	return 0;
}
