#include <cstdio>
#include <algorithm>

using namespace std;

const double eps = 1e-8;

struct mooncake{
	double store;
	double sell;
	double price;
}cake[1010];

bool cmp(mooncake a, mooncake b){
	return a.price > b.price;
}

int main(){
	int n;
	double left;
	scanf("%d%lf",&n,&left);
	for(int i = 0; i < n; i++){
		scanf("%lf",&cake[i].store);
	}
	for(int i = 0; i < n; i++){
		scanf("%lf",&cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store;
	}
	sort(cake, cake+n, cmp);
	double ans = 0;
	for(int i = 0; i < n; i++){
		if(cake[i].store <= left){
			left -= cake[i].store;
			ans += cake[i].sell;
		}else{
			ans += cake[i].price*left;
			break;
		}
	}
	printf("%.2f\n",ans+eps);
		
	return 0;
}
