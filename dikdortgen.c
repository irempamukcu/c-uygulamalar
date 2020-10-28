#include <stdio.h>
#include <math.h>

int main()
{
    float uzunkenar,kisakenar,alan,cevre;
    printf("Tum verileri ayni cinsten giriniz-cm,m-\n");
    
    printf("Uzun kenarin uzunlugunu giriniz: ");
    scanf("%f",&uzunkenar);	
	
	printf("\nKisa kenarin uzunlugunu giriniz: ");
    scanf("%f",&kisakenar);
    
    alan=kisakenar*uzunkenar;
    cevre=(kisakenar+uzunkenar)*2;
    
    printf("\nKisa Kenari %.2f, uzun kenari %.2f olan dikdortgenin alani %.2f ve cevresi %.2f dir.",kisakenar,uzunkenar,alan,cevre);

       



}
