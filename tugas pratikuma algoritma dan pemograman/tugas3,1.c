#include<stdio.h>
int main()
{
    int i;
    int c;
    int hasil=1,bil;
    bil=10;
    c=0;
    printf("10! faktorial \n");
    for( i=1;i<=bil; i++)
    {
        c=c+1;
        hasil=i*hasil;
        printf("faktorisasi dari %d adalah = %d\n",c,hasil);
    }
    return 0
}
