#include<stdio.h>

//extern int a; // variable "a" is defined somewhere outside the scope 
//or outside the program
void f1(); //function declaration
extern int a; //global extern variable 
int main(void)
{
    extern int num; //local extern variable
    printf("\n A = %d num = %d",a,num);
    f1();
    
    return 0;
}
void f1()
{
   // printf("Num = %d",num); //compile time error 
    printf("\n A = %d",a);
    a++;
    printf("\n A = %d",a);
}
a=55;
num = 22;
