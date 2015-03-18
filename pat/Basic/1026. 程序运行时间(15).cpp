#include <cstdio>

const int CLK_TCK = 100;

int main(){
	int c1, c2,sec;
	scanf("%d%d",&c1,&c2);
	sec = (double)(c2-c1)/CLK_TCK+0.5;
	int hours = sec/3600;
	int mins = (sec-hours*3600)/60;
	int secs = sec-hours*3600-mins*60;
	printf("%02d:%02d:%02d",hours,mins,secs);
		
	return 0;
}
