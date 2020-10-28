#include <stdio.h>
#include <math.h>

//öğrenci notu hesaplama

int main()

{
  int not1,not2,not3,proje1,sonnot;
  not1 = 90;
  not2 = 52;
  not3 = 48;
  proje1 = 90;
  sonnot = (not1 + not2 + not3 + proje1)/4;
  printf("Notlari sirasiyla %d,%d,%d ve projesi %d olan ogrencinin not ortalamasi %d'dir.",not1,not2,not3,proje1,sonnot);
	
}
