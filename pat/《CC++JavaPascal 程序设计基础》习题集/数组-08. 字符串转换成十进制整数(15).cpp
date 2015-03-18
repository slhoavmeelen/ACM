#include <stdio.h>

int main(){
	char ch;
	int hex[1000] = {},cnt=0;
	long long product=1,oct=0;
	bool isFirst = true,isPositive = true;
	while(scanf("%c",&ch)==1 && ch!='#'){
		if(isFirst && ch=='-')  isPositive = false;
		if(ch>='a'&&ch<='f'){
			isFirst = false;
			ch -= 'a'-'A';
		}
		if(ch>='0'&&ch<='9'){
			isFirst = false;
			hex[cnt++] = ch-'0';
		}else if(ch>='A' && ch<='F'){
			isFirst = false;
			hex[cnt++] = ch-'A'+10;
		}
	}
//	for(int i=0; i<cnt; i++){
//		printf("%d ",hex[i]);
//	}
	for(int i=cnt-1; i>=0; i--){
		oct += hex[i]*product;
		product *= 16;
	} 
	if(!isPositive && oct!=0) printf("-");
	printf("%lld\n",oct);
			
	return 0;
}
