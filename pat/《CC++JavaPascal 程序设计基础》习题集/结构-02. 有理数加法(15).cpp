#include <cstdio>

struct ratio{
	int a,b;
};

int getgcd(int a, int b){
	while(a != b){
		if(a > b) a = a-b;
		else b = b-a;
	}
	return a;
}

int main(){
	ratio r1,r2; 
	scanf("%d/%d %d/%d",&r1.a,&r1.b,&r2.a,&r2.b);
	int numerator = r1.a*r2.b + r2.a*r1.b;
	int denominator = r1.b * r2.b;
	int gcd = getgcd(numerator, denominator);
	if(denominator/gcd == 1){
		printf("%d\n",numerator/gcd);
	}else{
		printf("%d/%d\n",numerator/gcd,denominator/gcd);
	}
				
	return 0;
}
