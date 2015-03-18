#include <stdio.h>

int main(){
	int m,n;
	int matrix[20][20];
	bool isFound = false;
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int i=1; i<m-1; i++){
		for(int j=1; j<n-1; j++){
			if(matrix[i][j]>matrix[i][j-1] && matrix[i][j]>matrix[i][j+1] &&
			matrix[i][j]>matrix[i-1][j] && matrix[i][j]>matrix[i+1][j]){
				isFound = true;
				printf("%d %d %d\n",matrix[i][j],i+1,j+1);  	
			}
		}
	}
	if(!isFound) printf("None %d %d\n",m,n);
			
	return 0;
}
