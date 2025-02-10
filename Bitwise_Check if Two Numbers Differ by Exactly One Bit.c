#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d %d",&a,&b);
    int k=a^b;
    int p=(k)&(k-1);
    if(k==0){
        printf("No");
    }
    else if(p==0){
        printf("Yes");
    }
    else if(p!=0){
        printf("No");
    }
    return 0;
}