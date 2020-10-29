#include <stdio.h>

int main()
{
printf("****************************\nFibonacci\n****************************");	
	
int sayi1=1,sayi2=1,sayac,i,toplam;
printf("Adim sayisini giriniz:");
scanf("%d",&sayac);
printf("%d,",sayi1);
printf("%d,",sayi2);
 
for(i=0;i<=sayac;i++)
{toplam=sayi1+sayi2;
sayi1=sayi2;
sayi2=toplam;
printf("%d,",toplam);}

	


}

