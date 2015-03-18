#include <cstdio>

int main(){
	int a,b,c;
	int num[10];
	scanf("%d%d",&a,&b); 
	c = a+b;
	if(c < 0){
		printf("-");
		c = -c;
	}
	int len = 0;
	do{
		num[len++] = c%10;
		c /= 10;
	}while(c > 0);
	for(int i=len-1; i>=0; i--){
		printf("%d",num[i]);
		if(i>0 && i%3 == 0) printf(",");
	}
	
	return 0;
}
