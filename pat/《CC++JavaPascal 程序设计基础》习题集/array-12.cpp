//#include <stdio.h>
//
//void display(char mat[][10], int n){
//	for(int i=1; i<=2*n; i++){
//		for(int j=1; j<=2*n; j++){
//			if(j != 1) printf(" ");
//			printf("%c",mat[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	char mat[10][10] = {},temp,times;
//	int n,x1,y1,x2,y2,cnt=0,errs=3,left;
//	scanf("%d\n",&n);
//	left = 2*n*n;
//	for(int i=1; i<=2*n; i++){
//		for(int j=1; j<=2*n; j++){
//			scanf("%c%c",&mat[i][j],&temp);
//		}
//	}
////	display(mat, n);
//	scanf("%d",&times);
//	while(times--){
//		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//		if(mat[x1][y1]==mat[x2][y2] && mat[x1][y1]!='*'){
//			mat[x1][y1] = '*';
//			mat[x2][y2] = '*';
//			
//			left--;
////			printf("left=%d\n",left);
//			if(left > 0){
//				display(mat, n);
//			}else{
//				printf("Congratulations!\n");
//				return 0;
//			}
//		}else{
//			errs--;
//			printf("Uh-oh\n");
//			if(errs == 0){
//				printf("Game Over\n");
//				return 0;
//			}
//		}
//	}
//			
//	return 0;
//}
#include<cstdio>
int main()
{
  char grid[10][10];
  int n,t;
  char ch;
  scanf("%d\n",&n);
  for(int i = 0 ; i < 2*n ; i++)
    for(int j = 0 ; j < 2*n ; j++)
      scanf("%c%c",&grid[i][j],&ch);
  scanf("%d",&t);
  int x1,y1,x2,y2;
  int error = 0;
  int clear = 0;
  while(t--)
  {
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(grid[x1-1][y1-1] == grid[x2-1][y2-1] && grid[x1-1][y1-1] != '*') //core
    {
      grid[x1-1][y1-1] = '*';
      grid[x2-1][y2-1] = '*';
      clear+=2;
      if(clear == n*n*4)
      {
        printf("Congratulations!\n");
        return 0;
      }
      for(int i = 0 ; i < 2*n ; i++)
      {
        for(int j = 0 ; j < 2*n ; j++)
        {
          printf("%c",grid[i][j]);
          if(j != 2*n-1)
            printf(" ");
        }
        printf("\n");
      }
    }
    else
    {
      error++;
      printf("Uh-oh\n");
      if(error == 3)
      {
        printf("Game Over\n");
        return 0;
      }
    }
  }
  return 0;
}
