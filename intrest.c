#include<stdio.h>
int main(){
	int p,t;
	float roi,total_interest;
	printf("enter the value of principle amount:");
	scanf("%d",&p);
	printf("\nenter the value of rate of interest:");
	scanf("%f",&roi);
	printf("\nenter the value of time in years:");
	scanf("%d",&t);
	total_interest=((p*roi*t)/100);
	printf("\nTOTAL INTEREST:%f",total_interest);
    return 0;
}