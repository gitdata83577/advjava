#include<stdio.h>
//static variable demo

void m1();

int main(void)
{

    m1();
    printf("\n");
    m1();

    return 0;
}

void m1()
{
    static int num=40; // static variable intialization 
    //num is static local variable
    int val = 11;
    // val is local variable (auto)
    printf("\n Num = %d Val = %d",num,val);
    num+=5;
    val+=2;
    printf("\n Num = %d Val = %d",num,val);
}