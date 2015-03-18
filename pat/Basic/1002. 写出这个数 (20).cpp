#include <cstdio>
#include <string.h>


int main(){
	char num[100+1];
	int sums[4] = {};
	//py[10][5] test1  Ã»¹ý 
	char py[10][10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0,temp,digit = 0;
	scanf("%s",num);
	for(int i=0; i<strlen(num); i++){
		sum += num[i]-'0';
	}
	temp = sum;
	while(temp > 0){
		sums[digit++] = temp%10;
		temp /= 10;
	}
	if(sum == 0){
		sums[digit++] = 0;
	} 
	for(int i=digit-1; i>=0; i--){
		if(i != digit-1) printf(" ");
		printf("%s",py[sums[i]]);
	}
	
	return 0;
}
