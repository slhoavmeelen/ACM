#include <stdio.h>
#include <string.h>

int main()
{	
	int a,step=0,count=0;
	int visit[4]={};
//	printf("%d%d%d%d-\n",visit[0],visit[1],visit[2],visit[3]);		
	scanf("%d",&a);
	for(int x=0; x<4; x++){
		visit[x] = 1;
//		printf("1 %d%d%d%d-\n",visit[0],visit[1],visit[2],visit[3]);	
		for(int i=0; i<4; i++){
			if(visit[i] == 0){
				visit[i] = 1;
//				printf("2 %d%d%d%d-\n",visit[0],visit[1],visit[2],visit[3]);
				
				for(int j=0; j<4; j++){
					if(visit[j] == 0){
						visit[j] = 1;
//						printf("3 %d%d%d%d-\n",visit[0],visit[1],visit[2],visit[3]);					
						printf("%d%d%d",a+x,a+i,a+j);
						if(++count != 6) printf(" "); 
						visit[j] = 0;
					}
				}
				visit[i] = 0;
			}
		}
		printf("\n");
		count = 0;
		visit[x] = 0;
	}
	
	return 0;
}
