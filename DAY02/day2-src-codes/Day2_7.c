#include<stdio.h>
int main(void)
{
    int num =25;
    int *p = &num;
    int **pp = &p;
    printf("Num = %d *p = %d **p = %d",num,*p,**pp);
    printf("\n &num = %u p = %u",&num,p);
    printf("\n &p = %u pp = %u",&p,pp);
    printf("\n p = %u &num = %u &p = %u",p,&num,&p);

    return 0;
}