#include <cstdio>
#include <cmath>

using namespace std;

struct vec{
	double x,y;
};

vec add(vec v1, vec v2){
	vec v;
	v.x = v1.x+v2.x;
	v.y = v1.y+v2.y;
	return v;
}

int main(){
	vec v1,v2,v3;
	scanf("%lf %lf %lf %lf",&v1.x,&v1.y,&v2.x,&v2.y);
	v3 = add(v1,v2);
	// -0.05 3 0.01 3
	// (-0.0, 6.0)
	if(abs(v3.x) < 0.05) v3.x = 0;
	if(abs(v3.y) < 0.05) v3.y = 0;
 	printf("(%.1lf, %.1lf)\n",v3.x,v3.y);
				
	return 0;
}
