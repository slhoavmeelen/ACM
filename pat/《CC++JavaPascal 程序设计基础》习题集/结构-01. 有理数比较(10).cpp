#include <cstdio>
//ֱ�Ӹ���Ƚϲ��Ǻ��Ͻ�����ȻҲ�ܹ������о������⣬��Ϊͬ��ĸ���ȽϷ��ӣ�ת�����ͱȽ� 

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
