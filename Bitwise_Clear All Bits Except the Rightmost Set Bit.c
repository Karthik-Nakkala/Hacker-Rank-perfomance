#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int k=(n)^(n-1);
    int p=k&n;
    printf("%d",p);
    return 0;
}