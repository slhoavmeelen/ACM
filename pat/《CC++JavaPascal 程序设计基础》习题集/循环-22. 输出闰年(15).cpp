#include <stdio.h>
#include <string.h>

int main(){
	int deadline;
	scanf("%d",&deadline);
	if(deadline<=2000 || deadline>2100){
		printf("Invalid year!\n");
		return 0;
	}
	for(int i=2004; i<=deadline; i+=4){
		if((i%4==0&&i%100!=0) || (i%400==0)){
			printf("%d\n",i);
		}
	}
			
	return 0;
}
