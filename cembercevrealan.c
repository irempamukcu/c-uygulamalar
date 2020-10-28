#include <stdio.h>
#include <math.h>

int main()

{
 int r;
 float pi=3.14,cevre,alan;

 printf("Cemberin yaricapini giriniz:");
 scanf("%d",&r);
 
 cevre = 2 * pi * r;
 alan = pi * r * r;
 
 printf("Yaricapi %d olan cemberin cevresi %.2f ve alani %.2f'dir.",r,cevre,alan);
 return 0;
	
	



}
