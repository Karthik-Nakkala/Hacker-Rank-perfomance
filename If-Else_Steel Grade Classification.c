#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT
 1.Hardness must be greater than 50.
2. Carbon content must be less than 0.7.
3. Tensile strength must be greater than 5600.*/   
    int h,t;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    if(h>50 && c<0.7){
        if(t>5600){
            printf("The grade of the steel is: 10\n");
            printf("All of the conditions met.\n");
            
        }
        else{
            printf("The grade of the steel is: 9\n");
            printf("Two conditions met.\n");
        }
    }
    else if(c<0.7 && t>5600){
        printf("The grade of the steel is: 8\n");
        printf("Two conditions met.\n");
    }
    else if(h>50 && t>5600){
        printf("The grade of the steel is: 7\n");
        printf("Two conditions met.\n");
    }
    else if(h>50){
        if(c>=0.7 && t<=5600){
           printf("The grade of the steel is: 6\n"); 
            printf("Only one condition met.\n");
        }
    }
     else if(c<0.7){
        if(h<=50 && t<=5600){
           printf("The grade of the steel is: 6\n"); 
            printf("Only one condition met.\n");
        }
    }
     else if(t>5600){
        if(h<=50 && c>=0.7){
           printf("The grade of the steel is: 6\n"); 
            printf("Only one condition met.\n");
        }
    }
    else if(t<=5600 && h<=50){
        if(c>=0.7){
            printf("The grade of the steel is: 5\n");
            printf("None of the conditions met.\n");
        }
    }
    else{
        printf("invalid inputs");
    }
    return 0;
}