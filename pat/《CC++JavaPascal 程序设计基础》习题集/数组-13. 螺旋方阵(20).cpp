#include <stdio.h>

int main(){
	int mat[10][10] = {};
	int n;
	scanf("%d",&n);
	
	int i=0,j=0;
	int dir = 0;
	for(int k=1; k<=n*n; k++){
		switch(dir){
			case 0:mat[i][j++]=k;if(j==n-1 || mat[i][j+1]) dir = (dir+1)%4;break;
			case 1:mat[i++][j]=k;if(i==n-1 || mat[i+1][j]) dir = (dir+1)%4;break;
			case 2:mat[i][j--]=k;if(j==0 || mat[i][j-1]) dir = (dir+1)%4;break;
			case 3:mat[i--][j]=k;if(i==0 || mat[i-1][j]) dir = (dir+1)%4;break; 
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%3d",mat[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}
