#include <cstdio>
#include <cstring>

const int maxn=1001;

int main(){
	char a[maxn];
	int len,b,tmp,remainder=0;
	bool isFirst = true;
	scanf("%s %d",a,&b); 
	len = strlen(a);
	for(int i=0; i<len; i++){
		tmp = remainder*10+a[i]-'0';
		remainder = tmp%b;
		a[i] = tmp/b+'0';
	}
	for(int i=0; i<len; i++){
		if(a[i] == '0' && isFirst && len != 1) continue;
		isFirst =  false;
		printf("%c",a[i]);
	}
	printf(" %d",remainder);
		
	return 0;
}
