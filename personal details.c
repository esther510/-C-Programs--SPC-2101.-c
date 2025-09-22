//  simple to display personal details 
/*
Name : Odongo esther
Reg no : PA106/G/28753/25
Description : program to display personal details 
*/

#include<stdio.h> // preprocessor directive scanf()
 
 // main function
 int main(){
 int height ; 
     printf("Enter your height :");
     scanf("%d",& height );
     printf("Your height is %d", height );
     
int  number  ;   
     printf("\n Enter your id number:") ;
     scanf("%d",& number );
     printf("Your number is %d",number );
     
int  balance  ;  
     printf("\n Enter your bank balance :");
     scanf("%d",& balance );
     printf("Your balance is %d",balance);
     
     return 0;
     }