#include <cstdio>

const double eps = 1e-8;

int main(){
	int n,a1=0,a2=0,a3=0,a5=0,cnt2=0,cnt4=0;
	double a4 = 0;
	bool isFirst = true;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		int temp;
		scanf("%d",&temp);
		if(temp%5==0 && temp%2==0){
			a1 += temp;
		}else if(temp%5 == 1){
			if(cnt2%2 == 0) a2 += temp; 
			else a2 -= temp;
			cnt2++;
		}else if(temp%5 == 2){
			a3++;
		}else if(temp%5 == 3){
			a4 += temp;
			cnt4++;
		}else if(temp%5 == 4){
			if(temp > a5) a5 = temp;
		}
	}
	if(a1 > 0) printf("%d ",a1);
	else printf("N ");
	if(cnt2 > 0) printf("%d ",a2);
	else printf("N ");
	if(a3 > 0) printf("%d ",a3);
	else printf("N ");
	if(cnt4 > 0) printf("%.1lf ",a4/cnt4+eps);
	else printf("N ");
	if(a5 > 0) printf("%d",a5);
	else printf("N\n");
	
	return 0;
}
