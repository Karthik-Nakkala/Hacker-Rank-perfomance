#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n>>1;
    b=n>>2;
    c=n>>3;
    
    int res=0;
    if( (n&1)==1 ){
        res=res+1;
    }
    else{
        res=res+0;   
    }
    if( (a&1)==1 ){
        res=res+1;
    }
    else{
        res=res+0;
    }
    if( (b&1)==1 ){
        res=res+1;
    }
    else{
        res=res+0;   
    }
    if( (c&1)==1 ){
        res=res+1;
    }
    else{
        res=res+0;
    }
    printf("%d",res);
    return 0;
}