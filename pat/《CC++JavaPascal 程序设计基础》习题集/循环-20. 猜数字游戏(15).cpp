#include <stdio.h>

int main(){
	int answer,guess,times,i=0;
	scanf("%d%d",&answer,&times);
	while(times--){
		scanf("%d",&guess);
		i++;
		if(guess < 0){
			printf("Game Over\n");
			return 0;
		}else if(guess < answer){
			printf("Too small\n");
		}else if(guess > answer){
			printf("Too big\n");
		}else{
			if(i == 1)
				printf("Bingo!\n");
			else if(i <= 3)
				printf("Lucky You!\n");
			else
				printf("Good Guess!\n");
			return 0;
		}
	}
	printf("Game Over\n");
		
	return 0;
}
