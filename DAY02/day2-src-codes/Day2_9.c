#include<stdio.h>
int main(void)
{
    void *ptr = NULL; // void pointer / null pointer / generic pointer
    int num = 300;
    char ch='A';

    ptr = &num;
    printf("*ptr = %d Num = %d",*(int *)ptr,num);

    
    ptr = &ch;
    printf("\n *ptr = %c ch = %c",*(char *)ptr,ch);
    return 0;
}