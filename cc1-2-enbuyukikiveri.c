/*	Yazar: Emre Tantu
	C Ýle Code Challenge Level 1 Youtube Oynatma Listesi: https://www.youtube.com/playlist?list=PLp9TmtRYg7ZCxaA-lLc2x8r6-MSQG5u7x
	Problemin Tanýtýldýðý YouTube Videosu: https://youtu.be/4SZPLXArE3g
	Ýlgili YouTube Videosu: https://youtu.be/6e4dWnE8bgI
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int girdi;
	int enBuyuk, ikinciEnBuyuk;
	int durum = 1;
	
	while (1) {
		
		printf("Sayý girin:");
		scanf("%d", &girdi);
		
		if (girdi == 0) {
			break;
		} else if (girdi < 0) {
			printf("Girdiðiniz sayý 0 veya 0'dan büyük olmalýdýr.");
			continue;
		}
		
		if (durum) {
			enBuyuk = girdi;
			ikinciEnBuyuk = girdi;
			durum = 0;
		} else {
			if (girdi > enBuyuk) {
				ikinciEnBuyuk = enBuyuk;
				enBuyuk = girdi;
			} else if (girdi > ikinciEnBuyuk && girdi != enBuyuk) {
				ikinciEnBuyuk = girdi;
			}
		}
		
	}
	
	if (durum == 1) {
		printf("\nYeterli veri girmediniz!");
	} else {
		if (enBuyuk == ikinciEnBuyuk) {
			printf("\nGiriðiniz verilerin hepsi ayný!");
		} else {
			printf("\nEn büyük deðer %d, ikinci en büyük deðer %d.", enBuyuk, ikinciEnBuyuk);
		}
	}
	
	getch();
	return 0;
}
