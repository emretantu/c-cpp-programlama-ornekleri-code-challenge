/*	Yazar: Emre Tantu
	C �le Code Challenge Level 1 Youtube Oynatma Listesi: https://www.youtube.com/playlist?list=PLp9TmtRYg7ZCxaA-lLc2x8r6-MSQG5u7x
	Problemin Tan�t�ld��� YouTube Videosu: https://youtu.be/4SZPLXArE3g
	�lgili YouTube Videosu: https://youtu.be/_JySt3O0MQc
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int girdi;
	int enBuyuk, enKucuk;
	int enBuyukSayaci = 0;
	int enKucukSayaci = 0;
	int durum = 1;
	
	while(1) {
		
		printf("Sayi girin: ");
		scanf("%d", &girdi);
		
		if (girdi == 0) {
			break;
		} else if (girdi < 0) {
			printf("Girdi�iniz say� 0 veya 0'dan b�y�k olmal�d�r.");
			continue;
		}
		
		if (durum) {
			enBuyuk = girdi;
			enKucuk = girdi;
			durum = 0;
			enBuyukSayaci++;
			enKucukSayaci++;
		} else {
			if (girdi > enBuyuk) {
				enBuyuk = girdi;
				enBuyukSayaci = 1;
			} else if (girdi < enKucuk) {
				enKucuk = girdi;
				enKucukSayaci = 1;
			} else {
				if (girdi == enBuyuk) {
					enBuyukSayaci++;
				}
				if (girdi == enKucuk) {
					enKucukSayaci++;
				}
			}
		}
		
	}
	
	if (durum == 1) {
		printf("\nHi� bir veri girmediniz!");
	} else {
		if (enBuyuk == enKucuk) {
			printf("\nGirdi�iniz say�lar�n hepsi ayn� (%d'den %d tane girdiniz).", enKucuk, enKucukSayaci);
		} else {
			printf("\nEn b�y�k say� %d (%d adet), en k���k say� %d (%d adet).", enBuyuk, enBuyukSayaci, enKucuk, enKucukSayaci);
		}
	}
	
	getch();
	return 0;	
}
