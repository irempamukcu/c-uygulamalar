/*

İrem Pamukcu, Bu Program Girilen Yılın Artık Yıl Olup Olmadığını Gösterir.

*/
#include <stdio.h>

int main() 
{
    int yil; //yil değişkeni
    
    printf("Yılı giriniz:");

    scanf("%d",&yil);
    
    
    if(yil%400==0)
    printf("\nArtık");
    
    else if(yil%100==0)
    printf("\nArtık değil");
    
     else if(yil%4==0)
     printf("\nArtık");
     
     else
     printf("\nArtık değil");

     
    
    return 0;
}
