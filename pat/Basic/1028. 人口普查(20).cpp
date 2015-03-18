#include <cstdio>
#include <algorithm>

using namespace std;

struct man{
	char name[10];
	int year;
}men[100001];

bool isValid(man m){
	if(m.year > 20140906 || m.year+200*10000 < 20140906){
		return false;
	}
	return true;
}

bool cmp(man a, man b){
	return a.year < b.year;
}

int main(){
	int n,cnt = 0;
	scanf("%d",&n);
	while(n--){
		man tmp;
		int yyyy,mm,dd;
		scanf("%s %d/%d/%d",tmp.name,&yyyy,&mm,&dd);
		tmp.year = yyyy*10000+mm*100+dd;
		if(isValid(tmp)){
			men[cnt++] = tmp;
		}
	}
	sort(men, men+cnt, cmp);
	if(cnt == 0)
		printf("0\n");
	else
		printf("%d %s %s\n",cnt,men[0].name,men[cnt-1].name);
		
	return 0;
}
