#include <cstdio>
#include <cstring>

using namespace std;

bool isCorrect(char chs[]){
	int i1,i2,len=strlen(chs);
	bool isfp=true,isft=true; 
	for(int i=0; i<len; i++){
		if(chs[i]=='P' && isfp){
			i1 = i;
			isfp = false;
		}else if(chs[i]=='T' && isft){
			i2 = i;
			isft = false;
		}else if(chs[i] == 'A'){
			continue;	
		}else return false;
	}
	if(i2-i1>=2 && ((i2-i1-1)*i1 == len-1-i2)) return true;
	return false; 
}

int main(){
	int n;
	char chs[100+1];
	scanf("%d",&n);
	while(n--){
		scanf("%s",chs);
		if(isCorrect(chs)) printf("YES\n");
		else printf("NO\n");
	} 
	
	return 0;
}
