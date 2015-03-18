#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,alpha,beta,delta;
	scanf("%lf%lf%lf",&a,&b,&c);
	delta = b*b-4*a*c;
	if(a==0 && b==0 && c==0){
		printf("Zero Equation");
	}else if(a==0 && b==0 && c!=0){
		printf("Not An Equation");
	}else if(b*b-4*a*c == 0){
		printf("%.2lf",-1*b/(2*a));
	}else if(b*b-4*a*c > 0){
		if(a == 0)
			printf("%.2lf",-1*c/b);
		else{
			printf("%.2lf\n",(-1*b+pow(delta,0.5))/(2*a));
			printf("%.2lf\n",(-1*b-pow(delta,0.5))/(2*a));	
		}
	}else{
		alpha = -b/(2*a);	//-0直接输出也是错误，必须是0 
		if(alpha == 0)		//但是-0跟0比较，是相同的 
			alpha = 0;
		beta = pow(-1*delta,0.5)/(2*a);
		printf("%.2lf+%.2lfi\n",alpha,beta);
		printf("%.2lf-%.2lfi\n",alpha,beta);
	}
	
	return 0;
}
