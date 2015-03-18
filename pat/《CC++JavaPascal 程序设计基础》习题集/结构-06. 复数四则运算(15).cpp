#include <cstdio>
#include <cmath>

using namespace std;

struct Complex{
	double a,b;
	Complex(double a=0, double b=0):a(a),b(b){} 
};

Complex operator + (const Complex &A, const Complex &B){
	return Complex(A.a+B.a, A.b+B.b);
}

Complex operator - (const Complex &A, const Complex &B){
	return Complex(A.a-B.a, A.b-B.b);
} 

Complex operator * (const Complex &A, const Complex &B){
	return Complex(A.a*B.a-A.b*B.b, A.a*B.b+A.b*B.a);
}

Complex operator / (const Complex &A, const Complex &B){
	return Complex((A.a*B.a+A.b*B.b)/(B.a*B.a+B.b*B.b), (B.a*A.b-A.a*B.b)/(B.a*B.a+B.b*B.b));
}

char* repr(Complex num, bool isRes, char *p){
	if(abs(num.a) < 0.05) num.a = 0;
	if(abs(num.b) < 0.05) num.b = 0;
	
	if(isRes){
		if(num.a==0 && num.b==0){
			sprintf(p, "0.0");
		}else if(num.a == 0){
			sprintf(p,"%.1lfi",num.b);
		}else if(num.b == 0){
			sprintf(p,"%.1lf",num.a);
		}else if(num.b > 0){
			sprintf(p,"%.1lf+%.1lfi",num.a,num.b);
		}else if(num.b < 0){
			sprintf(p,"%.1lf%.1lfi",num.a,num.b);
		}
	}else{
		if(num.b >= 0) sprintf(p, "%.1lf+%.1lfi",num.a,num.b);
		else if(num.b < 0) sprintf(p, "%.1lf%.1lfi",num.a,num.b); 
	}
	return p;
}

int main(){
	char tmp1[20],tmp2[20],tmp3[20];
	Complex num1,num2;
	scanf("%lf %lf %lf %lf",&num1.a,&num1.b,&num2.a,&num2.b);
	printf("(%s) + (%s) = %s\n",repr(num1,false,tmp1),repr(num2,false,tmp2),repr(num1+num2,true,tmp3));
	printf("(%s) - (%s) = %s\n",repr(num1,false,tmp1),repr(num2,false,tmp2),repr(num1-num2,true,tmp3));
	printf("(%s) * (%s) = %s\n",repr(num1,false,tmp1),repr(num2,false,tmp2),repr(num1*num2,true,tmp3));
	printf("(%s) / (%s) = %s\n",repr(num1,false,tmp1),repr(num2,false,tmp2),repr(num1/num2,true,tmp3));				
	return 0;
}
