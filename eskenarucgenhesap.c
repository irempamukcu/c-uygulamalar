#include <stdio.h>
#include <math.h>

//eşkenar üçgen alan ve çevre hesabı

int main()
{
	int kenar = 5;
	float h = 3;
	float alan = kenar * h / 2;
	int cevre = kenar * 3;
	
	printf("Bir kenari %d ve yuksekligi %f olan eskenar ucgenin alani %f ve cevresi %d'dir.",kenar,h,alan,cevre);
	
	return 0;
 	
	
	
}
