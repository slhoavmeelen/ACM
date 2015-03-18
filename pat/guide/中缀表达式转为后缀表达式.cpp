#include <cstdio>
#include <stack>
#include <queue>
#include <map>
#include <string>
using namespace std;

struct node{
	double num;
	char op;
	bool flag; //true num, false op
};

stack<node> s;//操作符栈 
queue<node> q;//后缀表达式序列 
map<char, int> op; 

void Change(string str){
	double num;
	node temp;
	for(int i=0; i<str.length();){
		if(str[i]>='0' && str[i]<='9'){
			temp.flag = true;
			printf("%c",str[i]);
			temp.num = str[i++]-'0';
			while(i<str.length() && str[i]>='0' && str[i]<='9'){
				printf("%c",str[i]);
				temp.num = temp.num*10 + (str[i]-'0');
				i++;
			}
			printf("-----%lf\n",temp.num);
			q.push(temp);
		}else{
			temp.flag = false;
			while(!s.empty() && op[str[i]]<=op[s.top().op]){
				q.push(s.top());
				s.pop();
			}
			temp.op = str[i];
			s.push(temp);
			i++;
		}
	}
	while(!s.empty()){
 		q.push(s.top());
		s.pop();
	} 
}

int main(){
	string str = "157+2*3/49-4/13";
	op['+'] = op['-'] = 1;
	op['*'] = op['/'] = 2;
	while(!s.empty()) s.pop();
	Change(str);
	printf("%d %d\n",q.empty(),s.empty());
	while(!q.empty()){
		if(q.front().flag){
			printf("%3lf",q.front().num);
		}else{
			printf("%c",q.front().op);
		}
		q.pop();
	}
	
	return 0;
} 
