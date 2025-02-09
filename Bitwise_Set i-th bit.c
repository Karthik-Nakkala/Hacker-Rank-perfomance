#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,k,p;
    scanf("%d",&n);
    scanf("%d",&i);
    k=1<<i;
    p=n|k;
    printf("%d",p);
    return 0;
}