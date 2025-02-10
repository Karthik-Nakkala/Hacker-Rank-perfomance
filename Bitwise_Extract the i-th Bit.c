#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int i;
    scanf("%d %d",&n,&i);
    int k=n>>i;
    int p=k&1;
    if(p==1){
        printf("1");
    }
    else if(p!=1){
        printf("0");
    }
    return 0;
}