#include <stdio.h>

int main()
{	
	int n,u,d,height=0,time=0;
	scanf("%d%d%d",&n,&u,&d);
	while(height < n){
		height += u;
		time++;
		if(height >= n)
			break;
		height -= d;
		time++;
	}
	printf("%d",time);
	
	return 0;
}
