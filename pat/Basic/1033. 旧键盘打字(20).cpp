#include <cstdio>
#include <cstring>

const int maxn = 100005;

char word[maxn];

int main(){
	int len;
	bool isBroken[256],isPrinted =  false; 
	memset(isBroken, false, sizeof(isBroken));
	fgets(word, sizeof(word), stdin);
	len = strlen(word)-1;
	for(int i=0; i<len; i++){
		if(word[i]>='A' && word[i]<='Z'){
			word[i] += 32;
		}
		isBroken[word[i]] = true;
	}
	fgets(word, sizeof(word), stdin);
	len = strlen(word)-1;
	for(int i=0; i<len; i++){
		if(word[i]>='A' && word[i]<='Z'){
			int low = word[i]-'A'+'a';
			if(!isBroken['+']==true && !isBroken[low]){
				printf("%c",word[i]);
			}
		}else if(!isBroken[word[i]]){
			isPrinted = true;
			printf("%c",word[i]);
		}
	}
	if(!isPrinted){
		printf("\n"); 
	}
		
	return 0;
}
