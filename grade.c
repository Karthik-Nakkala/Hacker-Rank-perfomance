#include<stdio.h>
int main(){

	float marks;
	printf("enter the marks:");
	scanf("%f",&marks);
	if(marks>=90){
	printf("grade:A");
	}
	else if(marks<=89&&marks>=81){
	printf("grade:B");
	}
	else if(marks<=80&&marks>=71){
	printf("grade:C");
	}
	else if(marks<=70&&marks>=61){
	printf("grade:C");
	}
	else if(marks<=60&&marks>=51){
	printf("grade:D");
	}
	else if(marks<=50&&marks>35){
	printf("grade:E");
	}
	else if(marks<=35){
	printf("FAIL");
	}
	else
	printf("INVALID INPUT");
   }