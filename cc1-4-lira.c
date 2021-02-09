/*	Yazar: Emre Tantu
	C Ýle Code Challenge Level 1 Youtube Oynatma Listesi: https://www.youtube.com/playlist?list=PLp9TmtRYg7ZCxaA-lLc2x8r6-MSQG5u7x
	Problemin Tanýtýldýðý YouTube Videosu: https://youtu.be/TTT9ToACZJU
	Ýlgili YouTube Videosu: https://youtu.be/NORWq78CeCg
*/

#include <stdio.h>
#include <locale.h>

int yuvarla(double sayi);
void ayikla(int kurus, int adetler[]);

int main() {
	setlocale(LC_ALL, "Turkish");
	
	double girdi;
	char *isimler[11] = {"Ýki Yüzlük", "Yüzlük", "Ellilik", "Yirmilik", "Onluk", "Beþlik", "Birlik", "50 Kuruþluk", "25 Kuruþluk", "10 Kuruþluk", "5 Kuruþluk"};
	int adetler[11] = {0};
	
	printf("Ondalýk iþareti kullanacaksanýz, virgül kullanmaya dikkat edin.\n\n");
	do {
		printf("Tutarý girin: ");
		scanf("%lf", &girdi);
		if (girdi < 0) {
			printf("\t\aHATA-> Girdiðiniz tutar negatif olamaz.\n\n");
		}
	} while (girdi < 0);
	
	system("cls");
	int kurus = yuvarla(girdi);
	printf("Girdiðiniz miktar %.2f TL\n\n", (double) kurus / 100);
	
	ayikla(kurus, adetler);
	
	int i;
	for (i = 0; i < 11; i++) {
		if (adetler[i] != 0) {
			printf("%d tane %s\n", adetler[i], isimler[i]);
		}
	}
	
	getch();
	return 0;
}

int yuvarla(double sayi) {
	
	// 12,575
	sayi *= 1000; // 12575,....
	int emanet = (int) sayi; // 12575
	
	int kontrol = emanet % 10; // 5
	if (kontrol >= 5) {
		emanet += 10 - kontrol;
	} else {
		emanet -= kontrol;
	} //12580
	
	emanet /= 10; // 1258
	
	// 58 -> 60
	// 57 -> 55
	// 55 -> 55
	// 53 -> 55
	// 52 -> 50
	
	kontrol = emanet % 10; // 8
	if (kontrol >= 8) {
		emanet += 10 - kontrol;
	} else if (kontrol >= 3) {
		emanet += 5 - kontrol;
	} else {
		emanet -= kontrol;
	} // 1260
	
	return emanet;
	
}

void ayikla(int kurus, int adetler[]) {
	
	// 200 TL
	adetler[0] = kurus / 20000;
	kurus -= adetler[0] * 20000;
	
	// 100 TL
	adetler[1] = kurus / 10000;
	kurus -= adetler[1] * 10000;
	
	// 50 TL
	adetler[2] = kurus / 5000;
	kurus -= adetler[2] * 5000;
	
	// 20 TL
	adetler[3] = kurus / 2000;
	kurus -= adetler[3] * 2000;
	
	// 10 TL
	adetler[4] = kurus / 1000;
	kurus -= adetler[4] * 1000;
	
	// 5 TL
	adetler[5] = kurus / 500;
	kurus -= adetler[5] * 500;
	
	// 1 TL
	adetler[6] = kurus / 100;
	kurus -= adetler[6] * 100;
	
	// 50 KR
	adetler[7] = kurus / 50;
	kurus -= adetler[7] * 50;
	
	// 25 KR
	adetler[8] = kurus / 25;
	kurus -= adetler[8] * 25;
	
	// 10 KR
	adetler[9] = kurus / 10;
	kurus -= adetler[9] * 10;
	
	// 5 KR
	adetler[10] = kurus / 5;
	kurus -= adetler[10] * 5;
	
}
