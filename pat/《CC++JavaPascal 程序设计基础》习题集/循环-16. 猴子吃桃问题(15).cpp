#include <stdio.h>

int main()
{	
	int n,total=1;
	scanf("%d",&n);
	for(int i=1; i<n; i++){
		total = (total+1)*2;
	}
	printf("%d",total);
	
	return 0;
}
