#include<stdio.h>
int main(){
	int Num=0;
printf ("what is the Number: ");
scanf ("%d",&Num);
    
    if((Num%3==0)&&(Num%5==0)){
    	printf("Number is divisible by both 3 and 5");
	}
	else{
		printf("Number is not divisible by both 3 and 5");
	}
	return 0;
}
