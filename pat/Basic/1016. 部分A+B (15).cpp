#include <cstdio>

int main(){
	long long a,b;
	long suma=0,sumb=0;
	int da,db;
	//pat c++(g++ 4.72) 不使用%lld 答案错误
	//教训： 使用scanf，严格使输入输出类型对应 
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
