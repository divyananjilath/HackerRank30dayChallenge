#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    int f;
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        f=n*factorial(n-1);
        return f;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}

