#include <stdio.h>

int main(){
	int res = 0,temp = 0;
	char op = '+',ch;
	while(scanf("%c",&ch)==1){
		if(ch>='0' && ch<='9'){
			temp = temp*10+ch-'0';	
		}else{
			if(op == '+'){
				res += temp;
			}else if(op == '-'){
				res -= temp;
			}else if(op == '*'){
				res *= temp;
			}else if(op=='/' && temp!=0){
				res /= temp;
			}else{
				printf("ERROR\n");
				break;
			}
			if(ch == '='){
				printf("%d\n",res);
				break;
			}
			else op = ch;
			temp = 0;
		}
	}
	
	return 0;
} 
