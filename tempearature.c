#include<stdio.h>
int main(){


	float f,c;
	int choice;
 	printf("TEMPARARURE CONVERSATION");
	printf("\n1. FAHREINHEIT TO CELCIUS");
	printf("\n2. CELCIUS TO FAHREINHEIT");
	printf("\nchoice:");
	scanf("%d",&choice);
	if(choice==1){
			printf("enter the value of fahreinheit temperature:\n");
			scanf("%f",&f);
			c=(5.0/9.0)*(f-32);
			printf("temperature in celcius:%f",c);
		     }
	else if(choice==2){
			   printf("enter the value of celcius temperature:\n");
			scanf("%f",&c);

			f=(9.0/5.0)*(c+32);//in this formula i m getting wrong output
			printf("\ntemperature in FAHREINHEIT:%f",f);
			 }
	else
	     printf("INVALID INPUT");
	return 0;
}
