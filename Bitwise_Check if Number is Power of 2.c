#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("No");
    }
    else if( ((n)^(n-1))==(2*n-1) )   
     {
         printf("Yes");
     }
    else{
        printf("No");
    }
    
    return 0;
}