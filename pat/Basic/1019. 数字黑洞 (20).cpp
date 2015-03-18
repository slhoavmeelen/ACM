#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int getInt(int num[], int n){
	int res = 0;
	for(int i=n-1; i>=0; i--){
		res = res*10+num[i];
	}
	return res;
}

bool cmp(int a, int b){
	return a > b;
}

void toIntArr(int num, int arr[], int n){
	memset(arr,0,sizeof(arr));
	do{
		arr[--n] = num%10;
		num /= 10;
	}while(num > 0);
} 

int main(){
	int num[4] = {};
	int n,i=3,num1,num2,res;
	scanf("%d",&n);
	do{
		num[i--] = n%10;
		n /= 10;
	}while(n > 0);
	while(1){
		sort(num,num+4);
		num1 = getInt(num,4);
		sort(num,num+4,cmp);
		num2 = getInt(num,4);
		res = num1-num2;
		if(res == 0 || res == 6174){
			printf("%04d - %04d = %04d\n",num1,num2,res);
			break;
		}
		printf("%04d - %04d = %04d\n",num1,num2,res);
		toIntArr(res, num, 4);
	}
		
	return 0;
}
