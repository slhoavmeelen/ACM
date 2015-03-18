#include <cstdio>

int main(){
	int n,step=0;
	scanf("%d",&n);
	while(n != 1){
		printf("--%d\n",n);
		if(n%2 == 0) n /= 2;
		else n = n+(n+1)/2;	//Ô¤·ÀÒç³ö 
		step++;
	}
	printf("%d\n",step);
	
	return 0;
}
