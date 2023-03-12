#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    //int (4 bytes) %d
    //float (4 bytes) %f
    //double (8 bytes) %lf
    //char (1 byte) %c

    printf("%.2f\n",PI);

    int intsayi1 = 14, intsayi2 = 16;
    printf("%d %d\n",intsayi1,intsayi2);

    float floatsayi1 = 14.6, floatsayi2 = 16.2;
    printf("%.1f  %.1f\n",floatsayi1,floatsayi2);

    double doublesayi1 = 6.66;
    printf("1.sayim: %.1f  2.sayim: %.3lf\n",floatsayi1,doublesayi1);

    char can = 'A';

    printf("%c\n",can);

    //Sizeof

    int number = 20;
    printf("Number degiskeni hafizada su kadar yer tutar : %d\n",sizeof(number));



     //Scanf

    int sayi;
    float ikinci_sayi;
    char karakterim;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi); //Sayýnýn adresinde su deðeri tut Konsolda bir sayi girmeme olanak saðladý.Shift 6 tuþu

     printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikinci_sayi); //Sayýnýn adresinde su deðeri tut Konsolda bir sayi girmeme olanak saðladý.Shift 6 tuþu


    //Girdiðin türe göre yüzdeden sonra karakter deðiþir.

    printf("Lutfen isminizin bas harfini giriniz\n");
    scanf(" %c",&karakterim);

        printf("Ilk sayim :%d , Ikinci sayim, :%.1f Isminizin bas harfi : %c\n",sayi,ikinci_sayi,karakterim);



    return 0;

}
