#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[500000+1];

int main()
{	
	int end=0,start=0,num,i=0;
	bool isWord = false, isSpace = false, isHead = true;
	
	fgets(str, 500000+1, stdin);
	num = strlen(str);
	i = num-1;
	
	while(i>0){
		if(isspace(str[i])){
			if(isSpace){				
				while(i>0 && str[--i] == ' ');
			}else{//��һ�μ�⵽�ո� 
				isSpace = true;
				isWord = false;
				
				//��ӡ���� 
				start = i+1;
				for(int j=start; j<=end; j++){
					printf("%c",str[j]);
				}
				
				i--;
			}
		}else{
			if(isWord){				
				
			}else{//��һ�μ�⵽���� 
				if(!isHead)
					printf(" ");
			
				isHead = false;
				isSpace = false;
				isWord = true; 
				
				end = i;
			}
			i--; 
		}
	}
	
	if(!isspace(str[0])){
		start = 0;
		for(int j=start; j<=end; j++){
			printf("%c",str[j]);
		}	
	}		
	
	return 0;
}
