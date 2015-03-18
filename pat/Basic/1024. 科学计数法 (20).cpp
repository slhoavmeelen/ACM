#include <cstdio>
#include <cstring>
#include <ctype.h>

//maxn 10000 时有个测试点过不去 
const int maxn=10010;

int main(){
	char str[maxn];
	fgets(str, sizeof(str), stdin);
	int len = strlen(str)-1;
	if(str[0] == '-') printf("-");
	
	int pos = 0;
	while(str[pos] != 'E'){
		pos++;
	} 
	
	int exp = 0;
	for(int i = pos + 2; i < len; i++){
		exp = exp*10+(str[i]-'0');
	}
	
	if(exp == 0){
		for(int i=1; i<pos; i++){
			printf("%c",str[i]);
		}
		return 0;
	}
	
	if(str[pos+1] == '-'){
		printf("0.");
		for(int i = 0; i < exp-1; i++){
			printf("0");
		}
		printf("%c",str[1]);
		for(int i = 3; i < pos; i++){
			printf("%c",str[i]);
		}
	}else{
		for(int i=1; i < pos; i++){
			if(str[i] == '.') continue;
			printf("%c",str[i]);
			if(i==exp+2 && pos-3!=exp){
				printf(".");
			}
		}
		for(int i = 0; i < exp - (pos - 3); i++){
			printf("0");
		}
	}
		
	return 0;
}
