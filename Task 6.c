#include<stdio.h>
int main(){
	int Num1,Num2;
	
	printf("What are the two numbers:  ");
	scanf("%d%d",&Num1,&Num2);
	
	(Num1>Num2)?printf("Num1 is Max"):printf("Num2 is Max");
	
	return 0;
}
