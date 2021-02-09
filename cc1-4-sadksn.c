/*	Yazar: Emre Tantu
	C Ýle Code Challenge Level 1 Youtube Oynatma Listesi: https://www.youtube.com/playlist?list=PLp9TmtRYg7ZCxaA-lLc2x8r6-MSQG5u7x
	Problemin Tanýtýldýðý YouTube Videosu: https://youtu.be/TTT9ToACZJU
	Ýlgili YouTube Videosu: https://youtu.be/f8cofhVBmTY
*/

#include <stdio.h>
#include <locale.h>

// Bu kodu yazdýðým videoda veri alma ile ilgili küçük ve önemsiz sayýlabilecek bir problem yaþamýþtýk.
// O problem giderilmiþtir.

// saniye = saat, dakika, saniye
// saniye = hafta, gün, saat, dakika, saniye

// 1 dakika = 60 saniye
// 1 saat = 3600 saniye
// 1 gün = 86400 saniye
// 1 hafta = 604800 saniye

int veriAl();

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int girdi;
	int hafta, gun, saat, dakika, saniye;
	int durum = 1;
	
	while (durum) {
		
		system("cls");
		printf("saat, dakika, saniye -> 1\nhafta, gun, saat, dakika, saniye -> 2\nÇýkýþ -> 3\n\n");
		
		char secim;
		
		printf("Çevirmek istediðiniz formatý tuþlayýn.");
		secim = getch();
		
		system("cls");
		
		switch(secim) {
			case '1':
				girdi = veriAl(); // Sadece 1 ve 2'de veri alýnýyor.
				system("cls");
				saniye = girdi % 60;
				dakika = girdi % 3600 / 60;
				saat = girdi / 3600;
				printf("%d saniye = %d saat, %d dakika, %d saniye", girdi, saat, dakika, saniye);
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				break;
			case '2':
				girdi = veriAl(); // Sadece 1 ve 2'de veri alýnýyor.
				system("cls");
				saniye = girdi % 60;
				dakika = girdi % 3600 / 60;
				saat = girdi % 86400 / 3600;
				gun = girdi % 604800 / 86400;
				hafta = girdi / 604800;
				printf("%d saniye = %d hafta, %d gun, %d saat, %d dakika, %d saniye", girdi, hafta, gun, saat, dakika, saniye);
				printf("\n\Devam etmek için bir tuþa basýn.");
				getch();
				break;
			case '3':
				system("cls");
				durum = 0;
				printf("Program sonlandýrýldý.");
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				break;
			default:
				system("cls");
				printf("Geçersiz bir tuþlama yaptýnýz.");
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				break;	
		}
		
	}
	
	getch();
	return 0;
}

int veriAl() {
	
	int girdi; // Alýnan veri önce bunda tutulacak.
	
	int kosul;
	do {
		printf("Saniye cinsinden bir tam sayý girin: ");
		scanf("%d", &girdi);
		if (kosul = girdi < 0) {
			printf("\a\tGirdiðiniz sayý negatif olamaz!\n\n");
		}
	} while (kosul);
	
	return girdi; // Sonra burada return edilecek.
	
}
