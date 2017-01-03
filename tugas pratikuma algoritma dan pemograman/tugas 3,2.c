#include<stdio.h>
int main()
{
    int a,b,n;
    n=5;
    for ( a=1; a<=n; a++)
    {
        for ( b=1; b<=a; b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
