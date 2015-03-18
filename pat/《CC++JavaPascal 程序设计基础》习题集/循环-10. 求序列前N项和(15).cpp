#include <stdio.h>

int main()
{	
	int N,i=1;
	double fz=2,fm=1;
	double res = 0;
	scanf("%d",&N);
	
	for(int i=0; i<n; i++){
		res += fz / fm;
		fz = fz+fm;
		fm = fz-fm;
	}
	printf("%.2lf",res);
	
	return 0;
}
