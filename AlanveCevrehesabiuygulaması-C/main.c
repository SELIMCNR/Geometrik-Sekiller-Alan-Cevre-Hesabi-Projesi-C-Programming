#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int karehesap()
	{
	//Karenin alaný ve çevresini  hesaplayan program 
	int kenar,alan,cevre;
	printf("*******************Kare alan ve cevre hesabi************ \n");
	printf("Karenin bir kenarýný giriniz: ");
	
	scanf("%d",&kenar);
	printf("Karenin bir kenarý :%d\n",kenar);
	
	alan=kenar*kenar;
	printf("Karenin alaný : %d\n",alan);
	
	cevre=kenar*4;
	printf("Karenin cevresi: %d\n",cevre);

	return alan,cevre;
	}
int dikdortgenhesap() {
			//Dikdörtgenin alan ve çevresini   hesaplayan program 
	int kenar1,kenar2,alan1,cevre1;
	printf("*******************Dikdörtgen alan ve cevre hesabi************ \n");
	
	printf("Dikdörtgenin birinci kenarýný giriniz: ");
	scanf("%d",&kenar1);
	printf("Dikdörtgenin birinci kenarý :%d\n",kenar1);
	
	printf("Dikdörtgenin ikinci kenarýný giriniz: ");
	scanf("%d",&kenar2);
	printf("Dikdörtgenin ikinci kenarý :%d\n",kenar2);
	
	alan1=kenar1*kenar2;
	printf("Dikdörtgenin alaný : %d\n",alan1);
	
	cevre1=(kenar1+kenar2)*2;
	printf("Dikdörtgenin cevresi: %d\n",cevre1);
	return alan1,cevre1;
}

int dikucgenhesap(){
	int taban,yukseklik,alan,cevre,kenar1,kenar2,kenar3;
	printf("*******************Dikucgen alan ve cevre hesabi************ \n");

	printf("Ucgenin taban deðerini  giriniz: ");
	scanf("%d",&taban);
	printf("Ücgenin taban deðeri :%d\n",taban);
	
	printf("Ucgenin taban yüksekliðini  giriniz: ");
	scanf("%d",&yukseklik);
	printf("Ücgenin taban yüksekliði :%d\n",yukseklik);
	
	printf("Ucgenin kenarýný   giriniz: ");
	scanf("%f",&kenar1);
	printf("Ücgenin kenarý :%f\n",kenar1);
	printf("Ucgenin kenarýný   giriniz: ");
	scanf("%f",&kenar2);
	printf("Ücgenin kenarý :%f\n",kenar2);
	
	printf("Ucgenin kenarýný   giriniz: ");
	scanf("%f",&kenar3);
	printf("Ücgenin kenarý :%f\n",kenar3);
	
	alan = (taban*yukseklik)/2;
	printf("Ucgenin alani : %d \n",alan);
	
	cevre=kenar1+kenar2+kenar3;
	printf("Ucgenin cevresi: %d \n",cevre);


	

	return cevre,alan;
}
int eskenarucgenhesap(){
	float  kenar,alan,cevre,r;
	printf("*******************Eskenarucgen alan ve cevre hesabi************ \n");

	printf("Ucgenin kenarýný   giriniz: ");
	scanf("%f",&kenar);
	printf("Ücgenin kenarý :%f\n",kenar);
	
	r=sqrt(3) / 4;
	alan = r*kenar*kenar;
	printf("Ucgenin alani : %f \n",alan);
	
	cevre=kenar*3;
	printf("Ucgenin cevresi: %f \n",cevre);
	return cevre,alan;
}

int cesitkenarucgenhesap(){
				//Çeþitkenarucgenin alan ve çevresini   hesaplayan program 
	int kenar1,kenar2,kenar3,alan1,cevre1;
	printf("*******************Çeþitkenarucgen alan ve cevre hesabi************ \n");
	
	printf("Cesitkenarucgenin birinci kenarýný giriniz: ");
	scanf("%d",&kenar1);
	printf("Cesitkenarucgenin birinci kenarý :%d\n",kenar1);
	
	printf("Cesitkenarucgenin ikinci kenarýný giriniz: ");
	scanf("%d",&kenar2);
	printf("Cesitkenarucgenin ikinci kenarý :%d\n",kenar2);
	
	printf("Cesitkenarucgenin ucuncu kenarýný giriniz: ");
	scanf("%d",&kenar3);
	printf("Cesitkenarucgenin ucuncu kenarý :%d\n",kenar3);
	if((kenar1!=kenar2 && kenar2!=kenar3)&& (kenar3!=kenar1 ))
	{
	alan1=(kenar1+kenar2+kenar3)/2;
	printf("Cesitkenarucgenin alaný : %d\n",alan1);
	
	cevre1=kenar1+kenar2+kenar3;
	printf("Cesitkenarucgenin cevresi: %d\n",cevre1);
	return alan1,cevre1;
	}
	else{
		printf("Kenar deðerleri yanlýþ girildi");
	}
	
}

int  dairehesab(){
		//Daire alan ve çevresini   hesaplayan program 
	const float pi=3.14;
	float r,alan,cevre;
	
	printf("*******************Daire alan ve cevre hesabi************ \n");
	
	printf("Dairenin yaricap deðerini giriniz: ");
	scanf("%f",&r);
	printf("Dairenin yaricapi :%f\n",r);
	alan = r * r *pi;
	printf("Dairenin alani : %f \n",alan);
	cevre=2*pi*r;
	printf("Dairenin cevresi: %f \n",cevre);
	return alan,cevre;
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
		printf("*************Geometrik cisimler(kare,dikdortgen,dikucgen,eskenarucgen,cesitkenarucgen,daire) Alan ve Cevre hesabý uygulamasý ******* \n");
		printf("Bilgilendirme:\n1 nolu islem: kare alan ve cevre hesabý yapar.\n2 nolu islem: dikdörtgen alan ve cevre hesabý yapar \n3 nolu islem: dikucgen alan ve cevre hesabi yapar.\n4 nolu islem: eskenarucgen alan ve cevre hesabi yapar.\n5 nolu islem: Cesitkenarucgen alan ve cevre hesabi yapar.\n6 nolu islem: daire alan ve cevre hesabi yapar.\n");

	int islem;
	
	//karehesap(sayi);	
	//dikdortgenhesap();
	//dikucgenhesap();	
	//eskenarucgenhesap();
	//cesitkenarucgenhesap();
	//dairehesab();

	printf("Hangi iþlemi yapmak istersin : ");
	scanf("%d",&islem);
	switch(islem){
	    case 1:karehesap();	
	        	break;
	    case 2:dikdortgenhesap();
	        	break;
		case 3:dikucgenhesap();
	        	break;
		case 4:eskenarucgenhesap();	
	        	break;
	    case 5:cesitkenarucgenhesap();  
			    break;  	
		case 6:dairehesab();
	        	break;    	
	    default:printf("Diðer iþlemlerde eklencek");
				break;    	
	}	
}
	


