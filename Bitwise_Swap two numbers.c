#include <stdio.h>
void swap_using_xor(int *A, int *B) {
    *A = *A ^ *B;
    *B = *A ^ *B;
    *A = *A ^ *B;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    #include <stdio.h>




    int A, B;
    
    // Input
    scanf("%d", &A);
    scanf("%d", &B);
    
    // Swap the values using XOR
    swap_using_xor(&A, &B);
    
    // Output the swapped values
    printf("%d\n", A);
    printf("%d\n", B);
    
    return 0;
}