#include<stdio.h>
/*
int main(void)
{
    int num =10;
    int *ptr = &num;

    printf("\n &num = %u ptr = %u",&num,ptr);
    printf("\n Num = %d *ptr = %d",num,*ptr);

    num+=5;
    printf("\n Num = %d *ptr = %d",num,*ptr);
    return 0;
}

*/

/*
int main(void)
{
    int num =10;
    int *ptr = &num;

    printf("\n &num = %u ptr = %u",&num,ptr);
    printf("\n Num = %d *ptr = %d",num,*ptr);
    *ptr++; // ptr+1 //address+1 // next address
     printf("\n &num = %u ptr = %u",&num,ptr);
     printf("\n Num = %d *ptr = %d",num,*ptr);
    return 0;
}

*/

/*
int main(void)
{
    int num =10;
    int *ptr = &num;

    printf("\n &num = %u ptr = %u",&num,ptr);
    printf("\n Num = %d *ptr = %d",num,*ptr);
    (*ptr)++; //it increaments the value
     printf("\n &num = %u ptr = %u",&num,ptr);
     printf("\n Num = %d *ptr = %d",num,*ptr);
    return 0;
}

*/

/*
int main(void)
{
    int num =10;
    int *ptr = &num;

    printf("\n &num = %u ptr = %u",&num,ptr);
    printf("\n Num = %d *ptr = %d",num,*ptr);
    *++ptr; // it increments address
     printf("\n &num = %u ptr = %u",&num,ptr);
     printf("\n Num = %d *ptr = %d",num,*ptr); //10  garbage 
    return 0;
}

*/

/*
int main(void)
{
    int num =10;
    int *ptr = &num;

    printf("\n &num = %u ptr = %u",&num,ptr);
    printf("\n Num = %d *ptr = %d",num,*ptr);
    ++*ptr; // it increments value
     printf("\n &num = %u ptr = %u",&num,ptr);
     printf("\n Num = %d *ptr = %d",num,*ptr); 
    return 0;
}
*/

int main(void)
{
    int num =10;
    int *ptr = &num;
    printf("Num = %d &num = %u",num,&num);
    printf("\n *ptr = %d ptr = %u",*ptr,ptr);
    ptr++;
    printf("\n ptr = %u",ptr);
    printf("\n *ptr = %d",*ptr);
    ptr--;
    printf("\n ptr = %u",ptr);
    printf("\n *ptr = %d",*ptr);

    return 0;
}
