//HELLO WORLD
/*
name:Odongo Esther were
Reg:PA106/G/28753/25
Date:30/09/2025
*/

#include<stdio.h>
int main(){
    int  attendance,marks;
    printf("\nENTER YOUR ATTENDANCE: ");
    scanf("%d",&attendance);
    printf("\nENTER YOUR MARKS: ");
    scanf("%d",&marks);
    if(attendance>=75&&marks>=40){
     printf("you are eligible for final exams");
     }
     else
     {
     printf("you are not eligible for final exams");
     }
     return 0;
 }    