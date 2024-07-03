// register keyword

#include<stdio.h>

int main(void)
{
    register int var=50;
    // var is a local variable
    // we are requesting to OS along with CPU to allocate CPU register 
    // for the variable var 
    printf("Value = %d",var);
   // print("Address of value = %u",&var);
    //compile time error: address of register variable 'var' requested
    return 0;
}