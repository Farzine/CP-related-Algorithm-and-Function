#include<stdio.h>
int main()
{
    int num1=5;
    int num2=10;
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("%d\n",num1);
    printf("%d\n",num2);
    /*or
    num1^=num2^=num1^=num2;
    printf("%d\n",num1);
    printf("%d\n",num2);
    */
    return 0;
}
