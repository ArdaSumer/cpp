#include <stdio.h>

int main(){
	int x=0;
	float toplam=0;
	float fiyat;
	float odenen;

	while(4!=x){	
		printf("bir secim yapin\n");
		printf("urun eklemek icin 1\n");
		printf("tutar gostermek icin 2\n");
		printf("odeme yapmak icin 3\n");
		printf("cikis yapmak icin 4\n");
		scanf("%d",&x);
		switch(x){
			case 1:
				printf("urun fiyati nedir\n");
				scanf("%f",&fiyat);
				toplam=toplam+fiyat;
				printf("urun basariyla eklendi\n");
				break;

			case 2:
				printf("urunlerin toplam tutari:%f\n",toplam);
				break;

			case 3:
				if( toplam >=1 ){
					printf("odeyeceginiz tutar:%f\n",toplam);
					printf("odeme miktarini girin\n");
					scanf("%f",&odenen);

					if(odenen > toplam){
						printf("para ustu:%f\n",odenen-toplam);
						toplam=0;
					}
					else if(odenen == toplam){
						printf("odeme basarili oldu\n");
						toplam=0;
					}
					else{
						printf("yetersiz odeme\n");
					}
				}
				else{
					printf("odenecek tutar yok");
				}
				break;

			case 4:
				printf("iyi gunler,yine bekleriz");
				break;

			default:
				printf("hatali secim\n");
		}
	}

	return 0;
}
