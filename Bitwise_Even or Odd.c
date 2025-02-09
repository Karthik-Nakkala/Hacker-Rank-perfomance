#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k;
    scanf("%d",&k);
    if((k&1)==0){
        printf("Even");
    }
    else if((k&1)!=0){
        printf("Odd");
    }
    return 0;
}