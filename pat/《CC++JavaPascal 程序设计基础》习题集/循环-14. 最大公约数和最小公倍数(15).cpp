#include <stdio.h>
#include <math.h>
/*
 * ���Լ����Greatest common divisor շת����� 
 * ��С��������Lease common multiple   m * n / gcd
 */

int main()
{	
	//      ������   ����    ���� 
	int m,n,dividend,divisor,remainder;
	scanf("%d%d",&m,&n);
	dividend = m;
	divisor = n;
	remainder = dividend % divisor;
	while(remainder != 0){	
		dividend = divisor;
		divisor = remainder;
		remainder = dividend % divisor;
	}
	printf("%d %d",divisor,m*n/divisor);
	
	return 0;
}
