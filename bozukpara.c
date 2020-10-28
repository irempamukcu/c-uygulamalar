/*
Bozuk Para Dönüştürücü,İrem Pamukcu,Bu Dosya Kuruş Türü İçin Miktarı Girilen Bozuk Paraları Toplayıp Liraya Çevirir.

*/
#include <stdio.h>


int main() 
{
    
    
    int bir; //bu değişken bir kuruştur(1*1 kuruş).
    int bes; //bu değişken beş kuruştur(5*1 kuruş).
    int on; //bu değişken on kuruştur(10*1 kuruş).
    int ybes; //bu değişken yirmi beş kuruştur(25*1 kuruş).
    int elli; //bu değişken elli kuruştur(50*1 kuruş).
    float total; //bu değişken tüm kuruşların toplanıp liraya çevrilmiş halidir.
    
    printf("1 kurus sayisini giriniz");
    scanf("%d",&bir);
    printf("\n5 kurus sayisini giriniz");
    scanf("%d",&bes);    
    printf("\n10 kurus sayisini giriniz");
    scanf("%d",&on);    
    printf("\n25 kurus sayisini giriniz");
    scanf("%d",&ybes);
    printf("\n50 kurus sayisini giriniz");
    scanf("%d",&elli);
    
    total=bir*1+bes*5+on*10+ybes*25+elli*50;  
    
    
    printf("\n\nGirilen Kurus Sayıları\n");
    printf("1kr Sayisi\t5kr Sayisi\t10kr Sayisi\t25kr Sayisi\t50kr Sayisi\n");
    printf("\t%d\t\t%d\t\t %d\t\t %d\t\t %d\n",bir,bes,on,ybes,elli);
    printf("Lira olarak toplam miktar %.2f",total);
    
    
    return 0;
}
