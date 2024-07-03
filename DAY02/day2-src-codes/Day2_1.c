// auto variable
#include<stdio.h>
int main(void)
{

    auto int num; //declaration of local variable // stack area
    // num is a local variable declared inside the scope of main()
    // writting auto keyword is optional
    num = 45;
    printf("Num = %d",num);
    return 0;
}