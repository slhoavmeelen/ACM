#include <stdio.h>

double a3,a2,a1,a0;

double f(double x){
	return a3*x*x*x+a2*x*x+a1*x+a0;
}

int main()
{	
	double fa,fb,res,a,b;
	scanf("%lf%lf%lf%lf%lf%lf",&a3,&a2,&a1,&a0,&a,&b);
	
	while(b-a > 0.0001){
		 res = f((a+b)/2);
		 if(res == 0){
		 	break;
		 }else if(res*f(a)>0){
		 	a = (a+b)/2;
		 }else{
		 	b = (a+b)/2;
		 }
	}
	printf("%.2lf",(a+b)/2);
	
	return 0;
}
