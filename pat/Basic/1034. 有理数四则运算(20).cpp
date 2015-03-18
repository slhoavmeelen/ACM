#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

struct Fraction{
	ll up;
	ll down;
}; 

ll gcd(ll a, ll b){
	return b==0 ? a:gcd(b, a%b);
}

Fraction reduction(Fraction &result){
	if(result.down < 0){
		result.up = -result.up;
		result.down = -result.down;
	}
	if(result.up == 0){
		result.down = 1;
	}else{
		int d = gcd(abs(result.up), abs(result.down));
		result.up /= d;
		result.down /= d;
	}
	return result;
} 

Fraction operator + (const Fraction &f1, const Fraction &f2){
	Fraction result;
	result.up = f1.up*f2.down+f2.up*f1.down;
	result.down = f1.down*f2.down;
	return reduction(result);
}

Fraction operator - (const Fraction &f1, const Fraction &f2){
	Fraction result;
	result.up = f1.up*f2.down-f2.up*f1.down;
	result.down = f1.down*f2.down;
	return reduction(result);
}

Fraction operator * (const Fraction &f1, const Fraction &f2){
	Fraction result;
	result.up = f1.up*f2.up;
	result.down = f1.down*f2.down;
	return reduction(result);
}

Fraction operator / (const Fraction &f1, const Fraction &f2){
	Fraction result;
	result.up = f1.up*f2.down;
	result.down = f1.down*f2.up;
	return reduction(result);
}

void showResult(Fraction r){
	r = reduction(r);
	if(r.up < 0) printf("(");
	if(r.down == 1) printf("%lld",r.up);
	else if(abs(r.up) > r.down){
		//<cmath> ¸¡µã´íÎó ´ð°¸´íÎó 
//		int b = r.up/r.down;
//		printf("%lld %lld/%lld", b, abs(r.up) - b*r.down, r.down);
		//error: invalid operands of types '__gnu_cxx::__enable_if<true, double>::__type {aka double}' and 'll {aka long long int}' to binary 'operator%'
		printf("%lld %lld/%lld", r.up/r.down, abs(r.up) % r.down, r.down);
	}else{
		printf("%lld/%lld",r.up,r.down);
	}
	if(r.up < 0) printf(")");
}

int main(){
	Fraction a,b;
	scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
	
	showResult(a);
	printf(" + ");
	showResult(b);
	printf(" = ");
	showResult(a+b);
	printf("\n");

	showResult(a);
	printf(" - ");
	showResult(b);
	printf(" = ");
	showResult(a-b);
	printf("\n");
	
	showResult(a);
	printf(" * ");
	showResult(b);
	printf(" = ");
	showResult(a*b);
	printf("\n");
	
	showResult(a);
	printf(" / ");
	showResult(b);
	printf(" = ");
	if(b.up == 0) printf("Inf");
	else showResult(a/b);	
	printf("\n");		
	
	return 0;
}
