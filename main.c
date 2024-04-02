#include<stdio.h>
int main()
{
    int a;
    int b;
    int sum = 100;
    int mul, sub, remainder;
    float divide;
    printf ("Enter the value of a");
    scanf ("%d",&a);
    printf ("Enter the value of b");
    scanf ("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    divide = a/b;
    remainder = a%b;
    printf ("Sum of %d and %d is %d\n",a,b,sum);
    printf ("SUbtraction of %d and %D is %d\n",a,b,sub);
    printf ("Multiply of %d and %d is %d\n",a,b,mul);
    printf ("Division of %d and %d is %d\n",a,b,divide);
    return 0;
}
