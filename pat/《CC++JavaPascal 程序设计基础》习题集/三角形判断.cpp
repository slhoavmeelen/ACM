/*给定平面上任意三个点的坐标(x1,y1)、(x2,y2)、(x3,y3)，检验它们能否构成三角形。

输入格式：

输入在一行中顺序给出6个[-100, 100]范围内的数字，即3个点的坐标x1, y1, x2, y2, x3, y3。

输出格式：

若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。

输入样例1：
4 5 6 9 7 8
输出样例1：
L = 10.13, A = 3.00
输入样例2：
4 6 8 12 12 18
输出样例2：
Impossible
*/
#include <stdio.h>
#include <math.h>

int main(){
	double x1,y1,x2,y2,x3,y3;
	double a,b,c,p,L,A;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	if((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1))
		printf("Impossible");
	else {
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		L = a+b+c;
		p = L/2;
		A = sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("L = %.2lf, A = %.2lf",L,A);	
	}
	return 0; 
}
