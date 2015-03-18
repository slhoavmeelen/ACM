#include <stdio.h>

int main()
{	
	double yuzhi,res=1.0,pi=0;
	int n=0;
	scanf("%lf",&yuzhi);
	
	do{
		res *= (double)n/(2*n+1);
		
		if(n == 0)
			res = 1;
		n++;
		pi += res;		
//		printf("%lf %lf\n",res,pi);		
	}while(res > yuzhi);
	printf("%.6lf",pi*2);
	
	return 0;
}
