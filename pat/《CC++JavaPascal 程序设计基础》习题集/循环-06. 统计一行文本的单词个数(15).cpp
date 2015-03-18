#include <stdio.h>

int main()
{	
	bool isWord = false;
	char ch;
	int count = 0;
	while(1){
		scanf("%c",&ch);
		if(ch == '\n')
			break;
		if(ch!=' ' && !isWord){
			count++;
			isWord = true;
		}else if(ch == ' '){
			isWord = false;
		}
	}	
	printf("%d",count);
	
	return 0;
}
