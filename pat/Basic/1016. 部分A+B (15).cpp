#include <cstdio>

int main(){
	long long a,b;
	long suma=0,sumb=0;
	int da,db;
	//pat c++(g++ 4.72) ��ʹ��%lld �𰸴���
	//��ѵ�� ʹ��scanf���ϸ�ʹ����������Ͷ�Ӧ 
	scanf("%lld %d %lld %d",&a,&da,&b,&db);
	while(a > 0){
		if(a%10 == da) suma = suma*10+da;
		a /= 10;
	}
	while(b > 0){
		if(b%10 == db) sumb = sumb*10+db;
		b /= 10;
	}
	printf("%lld\n",suma+sumb);
		
	return 0;
}
