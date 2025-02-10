#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int k=(n)&(n-1);
    if(n==0){
        printf("-1");
    }
    else if(k==0){
        printf("1");
    }
    else if( (k!=0) || (n<0)){
        printf("-1");
    }
    return 0;
}