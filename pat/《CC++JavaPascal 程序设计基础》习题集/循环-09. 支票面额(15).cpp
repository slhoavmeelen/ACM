#include <stdio.h>

int main()
{	
	int n;
	bool isNS = true;
	scanf("%d",&n);
	for(int y=0; y<100 && isNS; y++){
		for(int f=0; f<100 && isNS; f++){
			if(f*100+y-n == 2*y*100+2*f){
				isNS = false;
				printf("%d.%d",y,f);
			}
		}
	}
	if(isNS){
		printf("No Solution");
	}
	
	
	return 0;
}
