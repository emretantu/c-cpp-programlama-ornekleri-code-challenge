// a, b, c 

// |b - c| < a < b + c

// a^2 = b^2 + c^2 -> Dik üçgen
// a^2 < b^2 + c^2 -> Dar açýlý üçgen
// a^2 > b^2 + c^2 -> Dar açýlý üçgen

#include <stdio.h>
#include <locale.h>

void kenarAl(double dizi[]);

void sonucGoster(double dizi[]);
void diziSirala(double dizi[]);
int ucgenMi(double dizi[]);

int main() {
	setlocale(LC_ALL, "Turkish");
	
	double kenarlar[3];
	
	kenarAl(kenarlar);
	
	sonucGoster(kenarlar);
	
	getch();
	return 0;
}

void kenarAl(double dizi[]) {
	int i;
	for (i = 0; i < 3; i++) {
		do {
			printf("%d. uzunluðu girin: ", (i+1));
			scanf("%lf", &dizi[i]);
			if (dizi[i] < 1) {
				printf("\t\aGirdiðiniz sayý 0'dan büyük olmalýdýr.\n");
			}
		} while (dizi[i] < 1);
	}
}

void sonucGoster(double dizi[]) {
	
	diziSirala(dizi);
	
	if (ucgenMi(dizi)) {
		
		if (dizi[0]*dizi[0] == dizi[1] * dizi[1] + dizi[2]* dizi[2]) {
			printf("\nVerdiðiniz kenar uzunluklarýyla dik üçgen oluþturulabilir.");
		} else if (dizi[0]*dizi[0] < dizi[1] * dizi[1] + dizi[2]* dizi[2]) {
			printf("\nVerdiðiniz kenar uzunluklarýyla dar açýlý üçgen oluþturulabilir.");
	    } else {
	    	printf("\nVerdiðiniz kenar uzunluklarýyla geniþ açýlý üçgen oluþturulabilir.");
		}
		
	} else {
		printf("\n Verdiðiniz kenar uzunluklarýyla bir üçgen oluþturulamaz.");
	}
	
}

void diziSirala(double dizi[]) {
	int i, j, emanet;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2 - i; j++) {
			if (dizi[i] < dizi[i+j+1]) {
				emanet = dizi[i];
				dizi[i] = dizi[i+j+1];
				dizi[i+j+1] = emanet;
			}
		}
	}
}

int ucgenMi(double dizi[]) {
	if (dizi[0] < dizi[1] + dizi[2] && dizi[0] > dizi[1] - dizi[2]) {
		return 1;
	} else {
		return 0;
	}
}

// # # #
