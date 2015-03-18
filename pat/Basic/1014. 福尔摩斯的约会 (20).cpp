/*
	教训：一定要严格控制范围，数据不会好心的都在合法范围内
	先在前两个字符串内找A~G范围的公共大写字母，代表星期几
	再找0~9A~N范围内公共字符，代表24小时之一
	然后在后两个字符串内找第一个公共英文字母 
*/
#include <cstdio>
#include <cstring>
#include <ctype.h>

const int maxn = 61;

const char DAY[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main(){
	char s1[maxn],s2[maxn],s3[maxn],s4[maxn];
	int p1=0,p2=0;
	bool isFirst = true;
	scanf("%s%s%s%s",s1,s2,s3,s4);
	for(int i=0; i<strlen(s1) && i<strlen(s2); i++){
		if(s1[i] == s2[i]){
			if(isFirst && isupper(s1[i])){
				if(s1[i]>='A' && s1[i]<='G'){
					printf("%s ",DAY[s1[i]-'A']);
					isFirst = false;	
				}
				
			}else if(!isFirst){
				if(isdigit(s1[i])){
					printf("%02d:",s1[i]-'0');
					break;
				}else if(s1[i]>='A' && s1[i]<='N'){
					printf("%02d:",s1[i]-'A'+10);
					break;
				}
			}
		}
	}
	for(int i=0; i<strlen(s3) && i<strlen(s4); i++){
		if(s3[i]==s4[i] && isalpha(s3[i])){
			printf("%02d\n",i);
		}
	}
	
	return 0;
}
