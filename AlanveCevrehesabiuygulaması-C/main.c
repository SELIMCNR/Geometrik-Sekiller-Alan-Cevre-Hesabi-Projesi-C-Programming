#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int karehesap()
	{
	//Karenin alan� ve �evresini  hesaplayan program 
	int kenar,alan,cevre;
	printf("*******************Kare alan ve cevre hesabi************ \n");
	printf("Karenin bir kenar�n� giriniz: ");
	
	scanf("%d",&kenar);
	printf("Karenin bir kenar� :%d\n",kenar);
	
	alan=kenar*kenar;
	printf("Karenin alan� : %d\n",alan);
	
	cevre=kenar*4;
	printf("Karenin cevresi: %d\n",cevre);

	return alan,cevre;
	}
int dikdortgenhesap() {
			//Dikd�rtgenin alan ve �evresini   hesaplayan program 
	int kenar1,kenar2,alan1,cevre1;
	printf("*******************Dikd�rtgen alan ve cevre hesabi************ \n");
	
	printf("Dikd�rtgenin birinci kenar�n� giriniz: ");
	scanf("%d",&kenar1);
	printf("Dikd�rtgenin birinci kenar� :%d\n",kenar1);
	
	printf("Dikd�rtgenin ikinci kenar�n� giriniz: ");
	scanf("%d",&kenar2);
	printf("Dikd�rtgenin ikinci kenar� :%d\n",kenar2);
	
	alan1=kenar1*kenar2;
	printf("Dikd�rtgenin alan� : %d\n",alan1);
	
	cevre1=(kenar1+kenar2)*2;
	printf("Dikd�rtgenin cevresi: %d\n",cevre1);
	return alan1,cevre1;
}

int dikucgenhesap(){
	int taban,yukseklik,alan,cevre,kenar1,kenar2,kenar3;
	printf("*******************Dikucgen alan ve cevre hesabi************ \n");

	printf("Ucgenin taban de�erini  giriniz: ");
	scanf("%d",&taban);
	printf("�cgenin taban de�eri :%d\n",taban);
	
	printf("Ucgenin taban y�ksekli�ini  giriniz: ");
	scanf("%d",&yukseklik);
	printf("�cgenin taban y�ksekli�i :%d\n",yukseklik);
	
	printf("Ucgenin kenar�n�   giriniz: ");
	scanf("%f",&kenar1);
	printf("�cgenin kenar� :%f\n",kenar1);
	printf("Ucgenin kenar�n�   giriniz: ");
	scanf("%f",&kenar2);
	printf("�cgenin kenar� :%f\n",kenar2);
	
	printf("Ucgenin kenar�n�   giriniz: ");
	scanf("%f",&kenar3);
	printf("�cgenin kenar� :%f\n",kenar3);
	
	alan = (taban*yukseklik)/2;
	printf("Ucgenin alani : %d \n",alan);
	
	cevre=kenar1+kenar2+kenar3;
	printf("Ucgenin cevresi: %d \n",cevre);


	

	return cevre,alan;
}
int eskenarucgenhesap(){
	float  kenar,alan,cevre,r;
	printf("*******************Eskenarucgen alan ve cevre hesabi************ \n");

	printf("Ucgenin kenar�n�   giriniz: ");
	scanf("%f",&kenar);
	printf("�cgenin kenar� :%f\n",kenar);
	
	r=sqrt(3) / 4;
	alan = r*kenar*kenar;
	printf("Ucgenin alani : %f \n",alan);
	
	cevre=kenar*3;
	printf("Ucgenin cevresi: %f \n",cevre);
	return cevre,alan;
}

int cesitkenarucgenhesap(){
				//�e�itkenarucgenin alan ve �evresini   hesaplayan program 
	int kenar1,kenar2,kenar3,alan1,cevre1;
	printf("*******************�e�itkenarucgen alan ve cevre hesabi************ \n");
	
	printf("Cesitkenarucgenin birinci kenar�n� giriniz: ");
	scanf("%d",&kenar1);
	printf("Cesitkenarucgenin birinci kenar� :%d\n",kenar1);
	
	printf("Cesitkenarucgenin ikinci kenar�n� giriniz: ");
	scanf("%d",&kenar2);
	printf("Cesitkenarucgenin ikinci kenar� :%d\n",kenar2);
	
	printf("Cesitkenarucgenin ucuncu kenar�n� giriniz: ");
	scanf("%d",&kenar3);
	printf("Cesitkenarucgenin ucuncu kenar� :%d\n",kenar3);
	if((kenar1!=kenar2 && kenar2!=kenar3)&& (kenar3!=kenar1 ))
	{
	alan1=(kenar1+kenar2+kenar3)/2;
	printf("Cesitkenarucgenin alan� : %d\n",alan1);
	
	cevre1=kenar1+kenar2+kenar3;
	printf("Cesitkenarucgenin cevresi: %d\n",cevre1);
	return alan1,cevre1;
	}
	else{
		printf("Kenar de�erleri yanl�� girildi");
	}
	
}

int  dairehesab(){
		//Daire alan ve �evresini   hesaplayan program 
	const float pi=3.14;
	float r,alan,cevre;
	
	printf("*******************Daire alan ve cevre hesabi************ \n");
	
	printf("Dairenin yaricap de�erini giriniz: ");
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
		printf("*************Geometrik cisimler(kare,dikdortgen,dikucgen,eskenarucgen,cesitkenarucgen,daire) Alan ve Cevre hesab� uygulamas� ******* \n");
		printf("Bilgilendirme:\n1 nolu islem: kare alan ve cevre hesab� yapar.\n2 nolu islem: dikd�rtgen alan ve cevre hesab� yapar \n3 nolu islem: dikucgen alan ve cevre hesabi yapar.\n4 nolu islem: eskenarucgen alan ve cevre hesabi yapar.\n5 nolu islem: Cesitkenarucgen alan ve cevre hesabi yapar.\n6 nolu islem: daire alan ve cevre hesabi yapar.\n");

	int islem;
	
	//karehesap(sayi);	
	//dikdortgenhesap();
	//dikucgenhesap();	
	//eskenarucgenhesap();
	//cesitkenarucgenhesap();
	//dairehesab();

	printf("Hangi i�lemi yapmak istersin : ");
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
	    default:printf("Di�er i�lemlerde eklencek");
				break;    	
	}	
}
	


