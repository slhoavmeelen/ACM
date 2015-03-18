#include <stdio.h>
#include <string.h>

int record[5000];

int main(){
	int start,end,num,sum;
	scanf("%d%d",&start,&end);
	for(int i=start; i<=end; i++){
		sum = 0;
		num = 0;
		for(int j=1; j<=i/2; j++){
			if(i%j == 0){
				sum += j;
				record[num++] = j;	
			}  
		}
		if(i == 1){
			printf("1 = 1\n");
		}
		if(i == sum){
			printf("%d =",i);
			for(int d=0; d<num; d++){
				printf(" %d",record[d]);
				if(d != num-1){
					printf(" +");
				}
			}
			printf("\n");
		}
	}
			
	return 0;
}
