#include <cstdio>
//直接浮点比较不是很严谨，虽然也能过，但有精度问题，化为同分母，比较分子，转成整型比较 

struct Rational{
	int a,b;
};

int main(){
	Rational r1,r2;
	scanf("%d/%d %d/%d",&r1.a,&r1.b,&r2.a,&r2.b);
	int norm1 = r1.a*r2.b;
	int norm2 = r2.a*r1.b;
	if(norm1 == norm2){
		printf("%d/%d = %d/%d\n",r1.a,r1.b,r2.a,r2.b);
	}else if(norm1 > norm2){
		printf("%d/%d > %d/%d\n",r1.a,r1.b,r2.a,r2.b);
	}else{
		printf("%d/%d < %d/%d\n",r1.a,r1.b,r2.a,r2.b);
	}
				
	return 0;
}
