#include<stdio.h>

int main (){
	int Year=0;
printf("what is the Year: ");
scanf("%d",&Year);
    
    if (Year%4==0){
    	if(Year%100!=0){
    		printf( "is a Leap Year");
		}
		else if(Year%100==0){
			if(Year%400==0){
				printf(" is a Leap Year");
			}
			else{
				printf(" is not a Leap year");
			}
		}
	}
	else{
		printf("Not a Leap Year");
	}
	return 0;
}
