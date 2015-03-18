#include <stdio.h>

int main()
{	
	int a,b,sum=0,count=0;
	scanf("%d%d",&a,&b);
	for(int i=a; i<=b; i++){
		sum += i;
		printf("%5d",i);
		if(++count % 5 == 0) printf("\n");
	}
	if(count % 5 != 0) printf("\n");
	printf("Sum = %d",sum);
	
	return 0;
}
