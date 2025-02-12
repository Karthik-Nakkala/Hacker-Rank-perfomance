#include <stdio.h>

int main() {
   
   
   for(int i=1;i<=9;i++)
   {
       for(int k=1;k<=20;k++)
       {
           printf(" ");
       }
       for(int j=1;j<=15;j++)
       
       { 
           if( (j%2)!=0 )
           {
             if( (i==1 || j==1 || j==15 || i==5)&&( !((i>5)&&(j==15)) ) )
             {
             
                printf("*");
             }
            
             else 
             {
                printf(" ");
             }
           }
           else{
               printf(" ");
           }
       }
       /*printf("\n");
   }
   for(int i=1;i<=10;i++)
   {*/
   printf("    ");
       for(int j=1;j<=15;j++)
       {
           if( (j==1 || j==15) ||  ( (i==5)&&(j==8) ) || ( (i==6)&&(j==7 || j==9) ) || ((i==7)&&(j==6 || j==10)) || ( (i==8)&&(j==5 || j==11) ) || ( (i==9)&&(j==4 || j==12) ) || (i==10 && (j==3 || j==13) ) )  
           {
           printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }
   printf("\n");
   
   
   
   for(int i=1;i<=10;i++)
   {
       
       for(int j=1;j<=11;j++)
       
       {
           if(i==1 || i==10 || j==6)
           {
               printf(" *");
           }
           else
           {
               printf("  ");
           }
       }
       /*printf("\n");
   }
   for(int i=1;i<=9;i++)
   {*/
   printf("    ");
       for(int j=1;j<=10;j++)
       {
           if( (i==1 || i==10 || j==1 || j==10) )
           {
              printf(" *");
           }
           else
           {
               printf("  ");
           }
       }
       /*printf("\n");
   }
   for(int i=1;i<=10;i++)
   {*/
   printf("    ");
       
       for(int j=1;j<=11;j++)
       
       {
           if(i==1 || i==10 || j==6)
           {
               printf(" *");
           }
           else
           {
               printf("  ");
           }
       }
       printf("\n");
   }
   
    return 0;
}