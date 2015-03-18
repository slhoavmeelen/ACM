#include <stdio.h>
#include <math.h>

int main(){
	char str[32+1];
	int temp;
	gets(str);
	for(int i=0; i<4; i++){
		temp = 0;
		for(int j=0; j<8; j++){
			if(str[8*i+j] == '1')
				temp += pow(2,8-j-1);
		}
		printf("%d",temp);
		if(i != 3)
			printf(".");
	}
	return 0;
}
