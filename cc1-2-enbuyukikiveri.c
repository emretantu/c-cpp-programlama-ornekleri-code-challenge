#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int girdi;
	int enBuyuk, ikinciEnBuyuk;
	int durum = 1;
	
	while (1) {
		
		printf("Say� girin:");
		scanf("%d", &girdi);
		
		if (girdi == 0) {
			break;
		} else if (girdi < 0) {
			printf("Girdi�iniz say� 0 veya 0'dan b�y�k olmal�d�r.");
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
			printf("\nGiri�iniz verilerin hepsi ayn�!");
		} else {
			printf("\nEn b�y�k de�er %d, ikinci en b�y�k de�er %d.", enBuyuk, ikinciEnBuyuk);
		}
	}
	
	getch();
	return 0;
}
