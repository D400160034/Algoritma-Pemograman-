#include<stdio.h>
int main()
{
   int abs;
    int uas;
    printf("masukan presentasi kehadiran \n");
    scanf("%d",&abs);
    printf("masukan nilai uas \n");
    scanf("%d",&uas);

    if (abs>70 & uas>50)
    {
        printf("anda lulus\n");
    }
    if (abs<70 & uas<50)
    {
        printf("anda tidak lulus\n");
    }
    printf("presentasi kehadiran : %d",abs);
    printf("nilai uas :%d\n", uas);
    return 0;
}
