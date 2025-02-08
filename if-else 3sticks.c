#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }
    else if(a==b && b!=c){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }
    else if(b==c && c!=a){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }
    else if( (a+b)<=c || (b+c)<=a ){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
    else if((c+a)<=b){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
    else if(c==a && a!=b){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("Exactly two sides are equal.\n");
    }
     
    else if((a+b)>c || (b+c)>a){
        if( a!=b && b!=c ){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
            }     
    }
    else if((c+a)>b){
        if( a!=b && b!=c ){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");  
         }
    }   
    
   
   
    else{
        printf("invalid inputs");
    }
    return 0;
}