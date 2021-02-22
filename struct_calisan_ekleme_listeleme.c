#include <stdio.h>
#include <stdlib.h>
struct yap {
	char isim[15];
	char soyisim[15];
	char sicil[15];
	char departman[15];
	char maas[15];
};

int main() {
	int kisisayisi;
	printf("Kac kisi eklemek istiyorsunuz?");
	scanf_s("%d", &kisisayisi);
	struct yap calisanlar[50];
	for (int i = -1; i < kisisayisi; i++) {
		if (i == -1) {
			gets(calisanlar[i].isim);
		}

		else {
			printf("Isim: ");
			gets(calisanlar[i].isim);

			printf("Soyisim: ");
			gets(calisanlar[i].soyisim);

			printf("Sicil: ");
			gets(calisanlar[i].sicil);

			printf("Departman: ");
			gets(calisanlar[i].departman);

			printf("Maas: ");
			gets(calisanlar[i].maas);

		}
	}
	printf("\n");
	for (int i = 0; i < kisisayisi; i++) {

		printf("Isim: %s\n", calisanlar[i].isim);
		printf("Soyisim: %s\n", calisanlar[i].soyisim);
		printf("Sicil: %s\n", calisanlar[i].sicil);
		printf("Departman: %s\n", calisanlar[i].departman);
		printf("Maas: %s\n", calisanlar[i].maas);
		printf("\n");

	}
			
	return 0;
}




