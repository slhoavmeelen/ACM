#include <stdio.h>

int main(){
	long long num = 0; 
	char ch;
	bool isFirstZero = true;
	while(scanf("%c",&ch)){
		if(ch == '0'){
			if(!isFirstZero) num *= 10;
		}if(ch>'0' && ch<='9'){
			isFirstZero = false;
			num = num*10+ch-'0';
		}else if(ch == '\n'){
			break;
		}
	}
	printf("%lld",num);
			
	return 0;
}
