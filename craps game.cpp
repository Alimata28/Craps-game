#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int fun(int sum){
	int player_point=0,i;
	for(i=1; i<=7;i++){
		if(sum==7 || sum==11){
	        printf("YOU WIN!!!\n");
	        return 1;
	   }
	    else if(sum==2 || sum==3 || sum==12){
		    printf("YOU LOSE!!!\n");
		    return 1;
	    }
	    else{
		    printf("AGAIN!!!\n");
		    return 0;
	    }
    } 
}
int main(){
	int dice1, dice2,i,sum_of_spot,k, player_point=0;
	srand(time(NULL));
	for(i=1; i<=7;i++){
	    dice1= 1 + (rand() %6);
	    dice2= 1 + (rand() %6);
	    printf("%d.tour==> dice1 =%d, dice2=%d\n", i, dice1, dice2);
	    sum_of_spot= dice1 + dice2;
		printf("Sum of spot = %d\n", sum_of_spot);
		player_point +=sum_of_spot;
		printf("Player points= %d\n", player_point);
		k=fun(sum_of_spot);
		if(k)
		  break;
		else
		  continue;
	}
    return 0;	
}
