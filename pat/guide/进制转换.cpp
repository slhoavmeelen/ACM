#include <cstdio>

const int P = 8;

int main(){
//	��P������xת��Ϊʮ������y 
	int y = 0, product = 1;
	while(x != 0){
		y = y+(x%10)*product;
		x /= 10;
		product = product * P;
	}
//	��ʮ������yת��ΪQ������z 
	int z[40],num = 0;
	do{
		z[num++] = y%Q;
		y = y/Q;
	}while(y != 0);
	
	return 0;
} 
