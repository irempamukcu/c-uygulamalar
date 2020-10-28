#include <stdio.h>

int main()

{
	/*kitapuygulamasi*/
	
	char kitapadi[50],sayfasayisi[3],yayini[40],yazari[25];
	
	printf("Kitap Adi Giriniz:\n");
	scanf("%s",kitapadi);
	
	printf("Sayfa Sayisi:\n");
	scanf("%s",sayfasayisi);
	
	printf("Yayini:\n");
	scanf("%s",yayini);
	
	printf("Kitabin Yazari:\n");
	scanf("%s",yazari);
	
	printf("**********Kitap Tanitim**********\n\n");
	printf("Kitap Adi: %s\n",kitapadi);
	printf("Sayfa Sayisi: %s\n",sayfasayisi);
	printf("Yayini: %s\n",yayini);
	printf("Kitabin Yazari: %s\n",yazari);
	return 0;
	
	
	
}
