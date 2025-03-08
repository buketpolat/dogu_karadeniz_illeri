#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *dosya;
    char satir[100];
    int kod;
    char sehir[50];
    int bulunan = 0;

    // Dosyayı açma
    dosya = fopen("sehirler.txt", "r");
    if (dosya == NULL) {
        printf("Dosya açma hatası!\n");
        return 1;
    }

    // Kullanıcıdan trafik kodunu alma
    printf("Trafik kodunu giriniz: ");
    scanf("%d", &kod);

    // Dosyayı satır satır okuma
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        int dosya_kodu;
        char dosya_sehir[50];

        // Satırı parçalama
        sscanf(satir, "%d %s", &dosya_kodu, dosya_sehir);

        // Girilen kod ile dosyadaki kodu karşılaştırma
        if (kod == dosya_kodu) {
            printf("%s Doğu Karadeniz bölgesinde yer alır.\n", dosya_sehir);
            bulunan = 1;
            break;
        }
    }

    // Dosyayı kapatma
    fclose(dosya);

    // Kod bulunamadıysa hata mesajı yazdırma
    if (!bulunan) {
        printf("Hatalı Kod Girdiniz!\n");
    }

    return 0;
}