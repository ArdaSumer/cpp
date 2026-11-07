#include <stdio.h>

int main(){
	double bakiye=1000;
	int islem=0;
	double tutar;

	
    while(islem!=4){
		printf("Islem seciniz:\n");
        printf("1- Para yatirma\n");
        printf("2- Para cekme\n");
        printf("3- Bakiye ogrenme\n");
        printf("4- Cikis\n");
	    scanf("%d",&islem);
	    
		switch(islem){
		case 1:
			printf("yatirmak istedigiz tutar\n");
			scanf("%lf",&tutar);
			bakiye=tutar+bakiye;
			printf("bakiyeniz:%.2f\n",bakiye);
			
	break;
		case 2:
		    printf("cekmek istedigiz tutar\n");
		    scanf("%lf",&tutar);
		    if (tutar <= 0){
		    	printf("cekmek istediginiz tutar 0 dan buyuk olmalidir!\n");
			}
		    else if (tutar<=bakiye){
		    	bakiye=bakiye-tutar;
		        printf("kalan bakiyeniz:%.2f\n",bakiye);
			}
		    else{
		    	printf("cekmek istediginiz tutar bakiyenizden fazla");
			}
		
    break;
		case 3:
		     printf("%.2f\n",bakiye);
	break;	
		case 4:
			printf("cikis yapiliyor\n");
    break;
		default:
		    printf("gecersiz islem sectiniz\n");
		    break;
	}
	}
	


	return 0;
}
