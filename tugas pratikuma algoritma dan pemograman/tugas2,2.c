 #include<stdio.h>
int main()
{
    char hasilujian;
    printf("masukan nilai: \n");
    scanf("%c",&hasilujian);
    switch(hasilujian)
    {
    case 'A':
        printf("sangat baik\n");
        break;
    case 'B' :
    case 'C' :
        printf("baik\n");
        break;
    case 'D' :
        printf("cukup\n");
        break;
    case 'F' :
        printf("sebaiknya coba lagi\n");
        break;
    default :
        printf("gagal\n");
    }
    printf("nilai anda adalah %c\n",hasilujian);
}
