#include <stdio.h>

int main(){
	char ch;
	while(scanf("%c",&ch)==1 && ch!='#'){
		if(ch>='a' && ch<='z'){
			printf("%c",ch-('a'-'A'));
		}else if(ch>='A' && ch<='Z'){
			printf("%c",ch+('a'-'A'));
		}else{
			printf("%c",ch);
		}
	} 
			
	return 0;
}
