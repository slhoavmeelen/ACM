#include <cstdio>
#include <cstring>
#include <ctype.h>

int main(){
	char str1[100], str2[100];
	bool hashTable[128] = {false};
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	int len1 = strlen(str1)-1;
	int len2 = strlen(str2)-1;
	for(int i=0; i<len1; i++){
		int j;
		char c1,c2;
		for(j=0; j<len2; j++){
			c1 = str1[i];
			c2 = str2[j];
			if(c1>='a' && c1<='z') c1 -= 32;
			if(c2>='a' && c2<='z') c2 -= 32;
			if(c1 == c2) break;
		}
		if(j==len2 && hashTable[c1]==false){
			printf("%c",c1);
			hashTable[c1] = true;
		}
	}
		
	return 0;
}
