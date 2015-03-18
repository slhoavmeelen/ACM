#include <stdio.h>
#include <math.h>
/*
 * 最大公约数：Greatest common divisor 辗转相除法 
 * 最小公倍数：Lease common multiple   m * n / gcd
 */

int main()
{	
	//      被除数   除数    余数 
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
