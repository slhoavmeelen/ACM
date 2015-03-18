#include <stdio.h>
#include <stack>
#include <ctype.h>

using namespace std;

stack<char> op;
stack<int> num; 

void Calc(){
	int num1,num2,res;
	char ch = op.top();
	num2 = num.top();num.pop();
	num1 = num.top();num.pop();
	if(ch == '+') res = num1+num2;
	else if(ch == '-') res = num1-num2;
	else if(ch == '*') res = num1*num2;
	else if(ch == '/') res = num1/num2;
	op.pop();
	num.push(res);
}

int main()
{
	char ch;
	int num1,num2,temp=0;

	bool isErr = false;
	bool isNum = false;
	while(scanf("%c",&ch) == 1){
		if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='='){
			num.push(temp);
			temp = 0;
			if(!op.empty()){
				if(op.top() == '*'){
					Calc();
				}else if(op.top() == '/'){
					if(num.top() == 0){
						isErr = true;
						break;
					}
					Calc();
				}
			}
			if(ch != '=') op.push(ch);
			else break;
		}else if(isdigit(ch)){
			temp = temp*10+ch-'0';
		}else{
			isErr = true;
			break;
		}
	}
	if(isErr){
		printf("ERROR\n");
	}else{
		while(!op.empty()){
			Calc();
		}
		printf("sum=%d",num.top());
	}
	
	
	return 0;
}
