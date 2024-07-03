#include<stdio.h>

int addition(int *n1,int *n2);

int main(void)
{
    int a,b,res;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    res = addition(&a,&b);
    printf("\n Result = %d",res);

    return 0;
}
int addition(int *n1,int *n2)
{
    int result = *n1 + *n2;
    printf("\n *N1 = %d *N2 = %d",*n1,*n2);
    
    return result;
}