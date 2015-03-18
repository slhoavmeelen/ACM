#include <stdio.h>

int compare(char str1[], char str2[]){
	int i=0,j=0;
	while(1){
		if(str1[i]!='\0' && str2[j]!='\0'){
			if(str1[i] < str2[j]){
				return -1;
			}else if(str1[i] > str2[j]){
				return 1;
			}else{
				i++;
				j++;
			}
		}else if(str1[i]=='\0' && str2[j]=='\0'){
			return 0;
		}else if(str1[i] != '\0'){
			return 1;
		}else return -1;
	}
}

void copy(char src[], char dst[]){
	int i=0;
	while(src[i] != '\0'){
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int main(){
	char str[100][10+1],temp[10+1];
	int n,k,i,j;
	scanf("%d%d\n",&n,&k);
	for(int i=0; i<n; i++){
		gets(str[i]);
	}
	for(i=0; i<k; i++){
		for(j=0; j<n-1-i; j++){
			if(compare(str[j],str[j+1]) == 1){
				//printf("before: %s %s\n",str[j],str[j+1]);
				copy(str[j],temp);
				copy(str[j+1],str[j]);
				copy(temp,str[j+1]);
			//	printf("after: %s %s\n",str[j],str[j+1]);
			}
		}
	}
	for(i=0; i<n; i++){
		j=0;
		while(str[i][j] != '\0'){
			printf("%c",str[i][j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
