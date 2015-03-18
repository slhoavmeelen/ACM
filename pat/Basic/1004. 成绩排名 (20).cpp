#include <cstdio>
#include <cstring>

using namespace std;

struct stu{
	char name[10+1];
	char id[10+1];
	int score;
};

int main(){
	stu arr[1000];
	int n,max=0,min=100,maxidx=-1,minidx=-1;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s %s %d",&arr[i].name,&arr[i].id,&arr[i].score);
		if(arr[i].score > max){
			max = arr[i].score;
			maxidx = i;
		}
		if(arr[i].score < min){
			min = arr[i].score;
			minidx = i;
		}
	}
	printf("%s %s\n",arr[maxidx].name, arr[maxidx].id);
	printf("%s %s\n",arr[minidx].name, arr[minidx].id);
	return 0;
}
