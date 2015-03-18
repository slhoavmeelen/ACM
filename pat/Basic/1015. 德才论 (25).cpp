#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

struct Student{
	int id,moral,ability;
}; 

bool cmp(Student a, Student b){
	int suma = a.moral+a.ability;
	int sumb = b.moral+b.ability;
	if(suma != sumb){
		return suma>sumb;
	}else if(a.moral != b.moral){
		return a.moral>b.moral;
	}else{
		return a.id<b.id;
	}
}

void printVec(vector<Student> vec){
	for(int i=0; i<vec.size(); i++){
		printf("%d %d %d\n",vec[i].id,vec[i].moral,vec[i].ability);
	}
}

int main(){
	int n,low,high;
	vector<Student> l1,l2,l3,l4;
	scanf("%d%d%d",&n,&low,&high);
	while(n--){
		Student tmp;
		scanf("%d%d%d",&tmp.id,&tmp.moral,&tmp.ability);
		if(tmp.moral >= low && tmp.ability >=low){
			if(tmp.moral >= high && tmp.ability >= high){
				l1.push_back(tmp);
			}else if(tmp.ability < high && tmp.moral >= high){
				l2.push_back(tmp);
			}else if(tmp.ability < high && tmp.moral < high && tmp.moral >= tmp.ability){
				l3.push_back(tmp);
			}else{
				l4.push_back(tmp);
			}
		}
	}
	
	sort(l1.begin(), l1.end(), cmp);
	sort(l2.begin(), l2.end(), cmp);
	sort(l3.begin(), l3.end(), cmp);
	sort(l4.begin(), l4.end(), cmp);
	
	printf("%d\n",l1.size()+l2.size()+l3.size()+l4.size());
	printVec(l1);
	printVec(l2);
	printVec(l3);
	printVec(l4);
		
	return 0;
}
