#include <cstdio>

int main(){
	int n,i=0;
	scanf("%d",&n);
	while(n/100 > 0){
		n -= 100;
		printf("%c",'B');
	}
	while(n/10 > 0){
		n -= 10;
		printf("%c",'S');
	}
	while(n--){
		printf("%d",++i);
	}
	
	return 0;
}
