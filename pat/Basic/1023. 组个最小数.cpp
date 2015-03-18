#include <cstdio>

int main(){
	int digit[10] = {};
	for(int i=0; i<10; i++){
		scanf("%d",&digit[i]);
	}
//	if(digit[0] != 0){
//		int i=1;
//		while(digit[i++] == 0);
//		digit[i-1]--;
//		printf("%d",i-1);
//	}
	for(int i=1; i<10; i++){
		if(digit[i] > 0){
			printf("%d",i);
			count[i]--;
			break;
		}
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<digit[i]; j++){
			printf("%d",i);
		}
	}
		
	return 0;
}
