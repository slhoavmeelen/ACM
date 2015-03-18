#include <cstdio>
#include <cstring>

const int maxn = 1001;

const char ch[3] = {'B','C','J'}; 

int main(){
	int n,win=0,draw=0,lose=0,jidx=-1,jmax=-1,yidx=-1,ymax=-1;
	char j,y;
	//B²¼ C´¸×Ó J¼ôµ¶ 
	int Jwin[3]={},Ywin[3]={};
	scanf("%d",&n,&y);
	while(n--){
		getchar();
		scanf("%c %c",&j,&y);
		int tmp = j-y;
		switch(tmp){
			case -8: lose++; Ywin[2]++; 
			break;
			case -7: win++; Jwin[1]++;
			break;
			case -1: win++; Jwin[0]++;
			break;
			case 0: draw++;
			break;
			case 1: lose++; Ywin[0]++;
			break;
			case 7: lose++; Ywin[1]++;
			break;
			case 8: win++; Jwin[2]++;
			break; 
			default: ;
		}
	}
	printf("%d %d %d\n",win,draw,lose);
	printf("%d %d %d\n",lose,draw,win);
	for(int i=0; i<3; i++){
		if(Jwin[i] > jmax){
			jmax = Jwin[i];
			jidx = i;
		}
		if(Ywin[i] > ymax){
			ymax = Ywin[i];
			yidx = i;
		}
	}
	printf("%c %c\n",ch[jidx],ch[yidx]);
		
	return 0;
}
