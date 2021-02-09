/*	Yazar: Emre Tantu
	C Ýle Code Challenge Level 1 Youtube Oynatma Listesi: https://www.youtube.com/playlist?list=PLp9TmtRYg7ZCxaA-lLc2x8r6-MSQG5u7x
	Problemin Tanýtýldýðý YouTube Videosu: https://youtu.be/PbAyv6xUxe4
	Ýlgili YouTube Videosu: 1- https://youtu.be/qmzxRvNtyk0
							2- https://youtu.be/LMGA2yHzriQ
							3- https://youtu.be/Iu-hwcCmiBs
							4- https://youtu.be/JQRHD_Mcd4g
*/

#include <stdio.h>
#include <locale.h>

int veriAl();

unsigned long long faktoriyel(int sayi);
void faktoriyelBul();

unsigned long long permutasyon(int n, int r); // P(n,r) = n! / (n-r)!
unsigned long long kombinasyon(int n, int r); // C(n,r) = n! / ( (n-r)! * r! )
void permutasyonBul();
void kombinasyonBul();

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int durum = 0;
	
	while (durum == 0) {
		
		printf("Ýþlem\t\tKodu\n");
		printf("Faktoriyel\tf\n");
		printf("Permütasyon\tp\n");
		printf("Kombinasyon\tk\n");
		printf("Çýk\t\tx\n");
		
		printf("\nYukarýdaki tabloya göre iþleminize karþýlýk gelen harfe basýn.");
		char girdi = getch();
		
		switch (girdi) {
			
			case 'f': case 'F':
				system("cls");
				faktoriyelBul();
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				system("cls");
				break;
				
			case 'p': case 'P':
				system("cls");
				permutasyonBul();
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				system("cls");
				break;
				
			case 'k': case 'K':
				system("cls");
				kombinasyonBul();
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				system("cls");
				break;
				
			case 'x': case 'X':
				system("cls");
				printf("Program sonlandýrýldý.");
				durum++;
				break;
				
			default:
				system("cls");
				printf("Girdiðiniz harf tablodakilerden herhangi biriyle eþleþmemiþtir.");
				printf("\n\nDevam etmek için bir tuþa basýn.");
				getch();
				system("cls");
			
		}
		
	}
	
	getch();
	return 0;
}

int veriAl() {
	
	int girdi;
	
	do {
		printf("Sayý girin: ");
		scanf("%d", &girdi);
	} while (girdi < 0 || girdi > 20);
	
	return girdi;
		
}

unsigned long long faktoriyel(int sayi) {
	
	if (sayi >= 0) {
		unsigned long long sonuc = 1;  // 1*1*2*3*4*5
		int i;
		for (i = 0; i < sayi; i++) {
			sonuc *= (i + 1);
		}
		return sonuc;
	} else {
		return 0;
	}
	
}

void faktoriyelBul() {
	
	printf("Bu program faktoriyel hesabý yapar.\nGirdiðiniz sayý 0'a eþit veya 0'dan büyük ve 21'den küçük olmalýdýr.\n\n");
	int girdi = veriAl();
	printf("%d'nin faktoriyeli: %llu", girdi, faktoriyel(girdi));
	
}

unsigned long long permutasyon(int n, int r) {
	return faktoriyel(n) / faktoriyel (n - r);
}

unsigned long long kombinasyon(int n, int r) {
	return permutasyon(n, r) / faktoriyel(r);
}

void permutasyonBul() {
	
	printf("Bu program permütasyon hesabý yapar.\nGirdiðiniz her sayý 0'a eþit veya 0'dan büyük ve 21'den küçük olmalýdýr.\nP(n,r) formu için...\n\n");
	
	int girdi1, girdi2;
	
	do {
		printf("n için ");
		girdi1 = veriAl();
		printf("r için ");
		girdi2 = veriAl();
		if (girdi1 < girdi2) {
			printf("n r'den büyük ya da r'ye eþit olmalýdýr!\n\n");
		}
	} while (girdi1 < girdi2);
	
	printf("P(%d, %d) = %llu", girdi1, girdi2, permutasyon(girdi1, girdi2));
	
}

void kombinasyonBul() {
	
	printf("Bu program kombinasyon hesabý yapar.\nGirdiðiniz her sayý 0'a eþit veya 0'dan büyük ve 21'den küçük olmalýdýr.\nC(n,r) formu için...\n\n");
	
	int girdi1, girdi2;
	
	do {
		printf("n için ");
		girdi1 = veriAl();
		printf("r için ");
		girdi2 = veriAl();
		if (girdi1 < girdi2) {
			printf("n r'den büyük ya da r'ye eþit olmalýdýr!\n\n");
		}
	} while (girdi1 < girdi2);
	
	printf("C(%d, %d) = %llu", girdi1, girdi2, kombinasyon(girdi1, girdi2));
	
}
