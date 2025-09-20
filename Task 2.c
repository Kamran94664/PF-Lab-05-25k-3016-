#include <stdio.h>

int main(){

int age=0;

printf("what is your age: ");
scanf("%d",&age);

if((age>=0)&&(age<13)){
	printf("Your are a Child .\n");
}
else{
	if((age>=13)&&(age<19)){
	printf("You Are a Teenager.\n");
	}
	else{
		if((age>=19)&&(age<60)){
			printf("You Are an Adult.\n");
		}
		else{
			if(age>=60){
				printf("You are Senior.\n");
			}
			else{
				printf("Invalid input\n");
			}
		}
	}
}
return 0;
}
