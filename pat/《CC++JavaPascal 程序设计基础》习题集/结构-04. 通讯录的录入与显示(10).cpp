#include <cstdio>

using namespace std;

struct person{
	char name[10+1];
	char birth[10+1];
	char gender;
	char fixtel[20];
	char mobtel[20];
};

int main(){
	person p[10];
	int size,times,temp;
	char ch;
	scanf("%d",&size);
	for(int i=0; i<size; i++){
		scanf("%s %s %c %s %s\n",&p[i].name,&p[i].birth,&p[i].gender,&p[i].fixtel,&p[i].mobtel);
	}
	
	scanf("%d",&times);
	while(times--){
		scanf("%d",&temp);
		// temp < 0 
		if(temp>=size || temp<0){
			printf("Not Found\n");
			continue;
		}
		printf("%s %s %s %c %s\n",p[temp].name,p[temp].fixtel,p[temp].mobtel,p[temp].gender,p[temp].birth);
	}
				
	return 0;
}
