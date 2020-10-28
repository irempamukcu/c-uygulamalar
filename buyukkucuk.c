#include <stdio.h>

int main()
{
	int a,b,c;
	
    printf("Bir sayi giriniz:");
    scanf("%d",&a);
    	
    printf("Bir sayi giriniz:");
    scanf("%d",&b);
    
    printf("Bir sayi giriniz:");
    scanf("%d",&c);
	
	if(a>=b && a>=c)
		{printf("%d en büyüktür.",a);}	
	else if(b>=a && b>=c)
		{printf("%d en büyüktür.",b);}
	else if(c>=a && c>=b)
		{printf("%d en büyüktür.",c);}
		
		
	
}
