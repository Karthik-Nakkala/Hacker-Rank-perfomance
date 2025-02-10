#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int i;
    scanf("%d",&n);
    scanf("%d",&i);
    int r=n^(1<<i);
    printf("%d",r);
    return 0;
}