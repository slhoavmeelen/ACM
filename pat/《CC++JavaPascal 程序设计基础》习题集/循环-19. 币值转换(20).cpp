#include <stdio.h>
#include <string.h>

int main(){
	char low[] = {'Y','W',' '};
	char high[] = {'Q','B','S',' '};
	char print[12] = {};
	int num;
	scanf("%d",&num);
	if(num == 0){
		printf("a");
		return 0;
	}
	char str[13];
	sprintf(str,"%012d",num);
	
	bool begin = false;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			char curr = str[4*i+j];
			if(curr != '0'){
				if(!begin) begin = true;
				else if(str[4*i+j-1] == '0'){
					printf("a");
				}
				printf("%c", curr-'0'+'a');
				if(high[j] != ' ')
					printf("%c",high[j]);
			}
		}
		if(begin && low[i]!=' ')
			printf("%c",low[i]);
	}
			
	return 0;
}
