#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int i;
    scanf("%d",&n);
    scanf("%d",&i);
    int k=~(1<<i);
    int p=n&k;
    printf("%d",p);
    return 0;
}