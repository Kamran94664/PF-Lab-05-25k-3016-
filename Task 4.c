#include<stdio.h>

int main(){
	int amount=0;
printf("What is the amount:$ ");
scanf("%d",&amount);

   if (amount<=500){
	if(amount%20==0){
   		printf("Wiithdrawal Approved\n");
	}
	else{
		printf("Wiithdrawal denied");
	}
}
else {
	printf("Wiithdrawal denied");
}
return 0;
}
