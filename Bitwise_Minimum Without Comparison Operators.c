#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d %d",&a,&b);
    int k=a-b;
    int p=k>>31;
    if(p){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}