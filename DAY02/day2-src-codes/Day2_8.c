#include<stdio.h>
//scale factor of pointer
/*
int main(void)
{
    int num = 260;
    int *ptr = &num;
    printf("Num = %d *ptr = %d",num,*ptr);
    return 0;
}
*/


int main(void)
{
    int num = 260;

    char *ptr = &num;
    printf("Num = %d *ptr = %d",num,*ptr);
    return 0;
}