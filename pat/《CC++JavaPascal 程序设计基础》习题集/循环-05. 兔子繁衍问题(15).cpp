#include <stdio.h>

int main()
{	
	int n,month=3,num1=1,num2=2,num=2;
	scanf("%d",&n);
	if(n==1)
		printf("1");
	else{
		while(num < n){
			num = num1+num2;
			num1 = num2;
			num2 = num;
			month++;
		}
		printf("%d",month);
	}	
	
	return 0;
}
