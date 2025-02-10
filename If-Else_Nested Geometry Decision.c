/*#include <stdio.h>

int main() {

     Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n,sd1,sd2,sd3,sd4,ang1,ang2,ang3,ang4;
    scanf("%d",&n);
    
    
         if(n==0){
             printf("Circle");
         }
         else if(n==4){
             scanf("%d %d %d %d",&sd1,&sd2,&sd3,&sd4);
             scanf("%d %d %d %d",&ang1,&ang2,&ang3,&ang4);
             if( (sd1==sd2) && (sd2==sd3) ){
                 if( (ang1==90) && (ang2==90) && (ang3==90) && (ang4==90) ){
                     printf("Square");
                 }
             }
             else if( (sd1==sd3) && (sd2==sd4) ){
                 if((ang1==90) && (ang2==90) && (ang3==90) && (ang4==90) ){
                     printf("Rectangle");
                 }
             }
             else if( ( (sd1==sd2)&&(sd2==sd3) ) && !( (ang1==90) && (ang2==90) && (ang3==90) && (ang4==90) ) &&      ((ang1==ang3) && (ang2==ang4)) ){
                 printf("Rhombus");
             }
             else if( ( (sd1==sd3) && (sd2==sd4) ) && ( (ang1==ang3) && (ang2==ang4) ) ){
                 printf("Parallelogram");
             }
         }
         else if(n==3){
             scanf("%d %d %d",&sd1,&sd2,&sd3);
             scanf("%d %d %d",&ang1,&ang2,&ang3);
             if( (sd1==sd2) && (sd2==sd3) ){
                 if( (ang1==60) && (ang2==60) && (ang3==60) ){
                     printf("Equilateral Triangle");
                 }
             }
             else if( (sd1==sd2) || (sd2==sd3) || (sd1==sd3) ){
                 printf("Isosceles Triangle");
             }
             else if( (sd1!=sd2) && (sd2!=sd3) ){
                 printf("Scalene Triangle");
             }
         }
        
    
    
         
         return 0;
}*/  
#include <stdio.h>

int main() {
    int n, a, b, c, d, A, B, C, D;

    // Read the number of sides
    scanf("%d", &n);

    // Validate the number of sides
    if (n != 0 && n != 3 && n != 4) {
        printf("Invalid Figure");
        return 0;
    }

    // Read side lengths and angles based on the number of sides
    if (n == 3) {
        scanf("%d %d %d", &a, &b, &c);
        scanf("%d %d %d", &A, &B, &C);
    } else if (n == 4) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        scanf("%d %d %d %d", &A, &B, &C, &D);
    }

    // Function to check if the given sides form a valid triangle
    int isValidTriangle(int a, int b, int c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

    // Determine the type of figure
    if (n == 0) {
        printf("Circle");
    } else if (n == 3) {
        if (a <= 0 || b <= 0 || c <= 0 || A <= 0 || B <= 0 || C <= 0 || A >= 180 || B >= 180 || C >= 180 || A + B + C != 180 || !isValidTriangle(a, b, c)) {
            printf("Invalid Figure");
        } else if (a == b && b == c && A == 60 && B == 60 && C == 60) {
            printf("Equilateral Triangle");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle");
        } else {
            printf("Scalene Triangle");
        }
    } else if (n == 4) {
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || A <= 0 || B <= 0 || C <= 0 || D <= 0 || A >= 180 || B >= 180 || C >= 180 || D >= 180 || A + B + C + D != 360) {
            printf("Invalid Figure");
        } else if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Square");
        } else if ((a == c && b == d) && A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Rectangle");
        } else if (a == b && b == c && c == d && A == C && B == D && A + B == 180) {
            printf("Rhombus");
        } else if (a == c && b == d && A == C && B == D && A + B == 180) {
            printf("Parallelogram");
        } else {
            printf("Invalid Figure");
        }
    }

    return 0;
}

