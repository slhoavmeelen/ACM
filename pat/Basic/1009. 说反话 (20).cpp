#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char inputs[81][81];
	char ch;
	char str[81];
	int cnt = 0;
	while(scanf("%s%c",str,&ch)){
		strcpy(inputs[cnt++],str);
		if(ch == '\n') break;
	}
	
	for(int i=cnt-1; i>=0; i--){
		printf("%s",inputs[i]);
		if(i != 0) printf(" ");
	}
	
	return 0;
}
