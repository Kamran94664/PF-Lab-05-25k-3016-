#include<stdio.h>

int main(){
	int r;
	printf("What is your rating for 'The Lion King':  ");
	scanf(" %d",&r);
	
	if(r==1){
		printf("Feedback:Terrible");
	}
	else{
		if(r==2){
			printf("Feedback:Poor");
		}
		else{
			if(r==3){
				printf("Feedback:Average");
			}
			else{
				if(r==4){
					printf("Feedback:Good");
				}
				else{
					if(r==5){
						printf("Feedback:Excellent");
					}
					else{
						printf("Invalid input");
					}
				}
			}
		}
	}
	return 0;
}
