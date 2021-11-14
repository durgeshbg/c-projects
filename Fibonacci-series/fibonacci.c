#include<stdio.h>

int main (void)
{
    int n,a=0,b=1,result=0;

    printf("ENter the no.of digits to be printed of the Fibonacci series: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",a);
        result = a+b;
        a = b;
        b = result;
    }
    return 0;
}