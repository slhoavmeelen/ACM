#include <cstdio>

struct ratio{
	int a;
	int b;
	ratio(int a, int b):a(a),b(b){
	}
};

int getgcd(int a, int b){
	while(b){
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}

void add(ratio &r1, ratio &r2){
	int numerator = r1.a*r2.b + r2.a*r1.b;
	int denominator = r1.b * r2.b;
	int gcd = getgcd(numerator, denominator);
	r1.a = numerator/gcd;
	r1.b = denominator/gcd;
}

int main(){
	int n;
	scanf("%d",&n);
	ratio res(0,1);
	for(int i=0; i<n; i++){
		ratio temp(0,0);
		scanf("%d/%d",&temp.a, &temp.b);
		add(res, temp);
	}
	
	int resa = res.a;
	int resb = n*res.b;
	int gcd = getgcd(resa,resb);
	if(resb/gcd == 1)
		printf("%d\n",resa/gcd);
	else
		printf("%d/%d\n",resa/gcd,resb/gcd);
				
	return 0;
}
