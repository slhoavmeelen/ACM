#include <cstdio>

int main(){
	//��P������xת��Ϊʮ������y 
	int p,x,y=0,product=1;
	scanf("%d%d",&p,&x);
	while(x != 0){
		y += (x%10)*product;
		x /= 10;
		product *= p;
	}
	printf("%d\n",y);
	
	return 0;
}
