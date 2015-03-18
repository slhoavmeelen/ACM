#include <stdio.h>

void reverse(char str[], int start, int end){
	char temp;
	for(int i=0; i<=(end-start)/2; i++){
		temp = str[start+i];
		str[start+i] = str[end-i];
		str[end-i] = temp;
	}
}

int main(){
	char str[100+1];
	int N,len=0;
	gets(str);
	while(str[len] != '\0') len++;

	scanf("%d",&N);
	N %= len;
	if(N == 0)
		printf("%s\n",str);
	else{
		reverse(str,0,N-1);
		reverse(str,N,len-1);
		reverse(str,0,len-1);
		printf("%s\n",str);
	}
	
	return 0;
}
