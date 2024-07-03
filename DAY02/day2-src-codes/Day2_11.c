#include<stdio.h>

/*
void swap_by_value(int a,int b);

int main(void)
{
    int n1=20,n2=10;
    printf("\n Before Swap Call by Value : N1 = %d N2 = %d",n1,n2);
    swap_by_value(n1,n2);
    printf("\n After Swap Call by Value : N1 = %d N2 = %d",n1,n2);
    return 0;
}

void swap_by_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
*/

void swap_by_address(int *a,int *b);
int main(void)
{
    int n1=20,n2=10;
    printf("\n Before Swap Call by Value : N1 = %d N2 = %d",n1,n2);
    swap_by_address(&n1,&n2); // call by address
    printf("\n After Swap Call by Value : N1 = %d N2 = %d",n1,n2);
    return 0;
}

void swap_by_address(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
