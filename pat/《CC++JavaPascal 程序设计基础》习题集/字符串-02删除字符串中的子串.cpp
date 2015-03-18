#include <stdio.h>
#define str_max 80

int main(){
	char s1[str_max+1],s2[str_max+1];
	int i=0,j=0,k=0;
	gets(s1);
	gets(s2);
	while(s1[i] != '\0'){
		if(s1[i] == s2[j]){
			i++;
			j++;
			if(s2[j] == '\0'){
				for(k=i; s1[k]!='\0'; k++){
					s1[k-j] = s1[k];
				}
				s1[k-j] = '\0';
				i = 0;
				j = 0;
			}
		}else{
			i=i-j+1;
			j=0;
		}
	}
	printf("%s",s1);
	return 0;
}
