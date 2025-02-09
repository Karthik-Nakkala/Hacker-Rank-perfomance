#include <stdio.h>

int main() {

     /*Enter your code here. Read input from STDIN. Print output to STDOUT */
    int age,income,risk_tolerance;
    scanf("%d",&age);
    scanf("%d",&income);
    scanf("%d",&risk_tolerance);
    if(age>50){
       if( !(income>75000) ){
          if( risk_tolerance!=3 ){
              printf("Low Risk Portfolio: Suitable for conservative investments.");
          }      
       }
        else if(income>75000){
            
            if(risk_tolerance==3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else if( risk_tolerance==1   ){
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
            else if(risk_tolerance==2){
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
        }
       
    }
 else if(income<=30000 && age>=30){
            if(risk_tolerance==1 || risk_tolerance==2){
              printf("Low Risk Portfolio: Suitable for conservative investments.");  
            }
     
        }
    else if(age>=30 && age<=50){
        if(income<=75000){
            if(risk_tolerance==2){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
        }
        else if(income>75000){
            if(risk_tolerance==1 || risk_tolerance==2){
               printf("Medium Risk Portfolio: Balanced risk for moderate returns."); 
            }
            else if(risk_tolerance==3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
    }
    else if(age<30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }

   
    
    
    return 0;
}