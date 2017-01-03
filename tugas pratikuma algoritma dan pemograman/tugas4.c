#include<stdio.h>
char nama[200],nama1[200],nama2[200];
int harga,harga1,harga2;
int jumlah,jumlah1,jumlah2;
int total,total1,total2,jml,dis,byr,kbl,cash;

int input()
{
printf("Barang yang di beli =");
scanf("%s",&nama);
printf("Harga = ");
scanf("%d",&harga);
printf("Jumlah = ");
scanf("%d",&jumlah);
total=harga*jumlah;
printf("Barang yang di beli = ");
scanf("%s",&nama1);
printf("Harga = ");
scanf("%d",&harga1);
printf("Jumlah = ");
scanf("%d",&jumlah1);
total1=harga1*jumlah1;
printf("Barang yang di beli = ");
scanf("%s",&nama2);
printf("Harga = ");
scanf("%d",&harga2);
printf("Jumlah = ");
scanf("%d",&jumlah2);
total2=harga2*jumlah2;
jml=(total+total1+total2);
printf("Masukkan discount '%' = ");
scanf("%d",&dis);
byr=(jml-((jml*dis)/100));
printf("Masukkan uang tunai = ");
scanf("%d",&cash);
kbl=(cash-byr);
}

void struk()
{
printf("=======================================\n");
printf("\t\tINDOMARET\t\n");
printf("\t    JL.pabelan \t\n");
printf("=======================================\n");
printf("NO\tNama\tHarga\tJumlah\tTotal\n");
printf("1\t%s\t%d\t%d\t%d\n",nama,harga,jumlah,total);
printf("2\t%s\t%d\t%d\t%d\n",nama1,harga1,jumlah1,total1);
printf("3\t%s\t%d\t%d\t%d\n",nama2,harga2,jumlah2,total2);
printf("\n");
printf("---------------------------------------\n");
printf("Jumlah\t\t\t\t%d\n",jml);
printf("Discount\t\t\t%d\n",dis);
printf("Bayar\t\t\t\t%d\n",byr);
printf("Tunai\t\t\t\t%d\n",cash);
printf("Kembalian\t\t\t%d\n",kbl);
printf("---------------------------------------\n");
printf("\t\tTerima Kasih\n");
printf("\t\twww.indomaret.co.id\n");
}

void main()
{
    input();
    system("cls");
    struk();
}
