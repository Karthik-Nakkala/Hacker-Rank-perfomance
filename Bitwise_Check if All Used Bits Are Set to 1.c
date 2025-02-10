#include <stdio.h>
#include <stdbool.h>

int main() {
    
    
     
    int n;
    
    scanf("%d",&n);
   
    int k=n+1;
    
   if( ((k)&(k-1))==0 ){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}