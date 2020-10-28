#include <stdio.h>
#include <math.h>

int main()
{
    float sinav1,sinav2,sinav3,netsonuc;
	printf("Birinci sinav notunu giriniz:  ");
	scanf("%f",&sinav1);
	
	printf("Ikinci sinav notunu giriniz:  ");
	scanf("%f",&sinav2);
	
	printf("Ucuncu sinav notunu giriniz:  ");
	scanf("%f",&sinav3);
	
	netsonuc= (sinav1+sinav2+sinav3)/3;
	printf("Ogrencinin not ortalamasi %f dir.",netsonuc);	
	
	
	
}
