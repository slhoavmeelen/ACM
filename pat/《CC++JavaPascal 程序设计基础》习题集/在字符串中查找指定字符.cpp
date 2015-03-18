#include <stdio.h>
#include <math.h>

int main(){
	char str[81],ch;
	int flag = 0;
	gets(str);
	scanf("%c",&ch);
	for(int i=0; i<81 && str[i]!='0'; i++){
		if(ch == str[i]){
			 while(str[i] != '\0'){
			 	printf("%c",str[i++]);
			 } 
			 printf("\n");
			 flag = 1;
			 break;
		} 
	}
	if(!flag)
		printf("Not found");
	return 0;
}
