#include <stdio.h>
#include <math.h>

#define N 8
#define PI 3.14159265358979323846

/* 1) Serbest Dusme: h = 1/2 g t^2 */
void serbestDusme(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double t;
    double sonuc[N];
    int i;

    printf("\nSure t (s) giriniz: ");
    scanf("%lf", &t);
    t = (t < 0) ? -t : t;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = 0.5 * (*(g + i)) * t * t;
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Serbest Dusme\n");
    printf("Girdi: t = %.6f s\n", t);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | h = %12.6f m\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 2) Yukari Atis: hmax = v0^2 / (2g) */
void yukariAtis(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double v0;
    double sonuc[N];
    int i;

    printf("\nIlk hiz v0 (m/s) giriniz: ");
    scanf("%lf", &v0);
    v0 = (v0 < 0) ? -v0 : v0;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = (v0 * v0) / (2.0 * (*(g + i)));
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Yukari Atis\n");
    printf("Girdi: v0 = %.6f m/s\n", v0);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | hmax = %12.6f m\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 3) Agirlik: G = m g */
void agirlikDeneyi(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double m;
    double sonuc[N];
    int i;

    printf("\nKutle m (kg) giriniz: ");
    scanf("%lf", &m);
    m = (m < 0) ? -m : m;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = m * (*(g + i));
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Agirlik\n");
    printf("Girdi: m = %.6f kg\n", m);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | G = %12.6f N\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 4) Potansiyel Enerji: Ep = m g h */
void potEnerji(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double m, h;
    double sonuc[N];
    int i;

    printf("\nKutle m (kg) giriniz: ");
    scanf("%lf", &m);
    m = (m < 0) ? -m : m;

    printf("Yukseklik h (m) giriniz: ");
    scanf("%lf", &h);
    h = (h < 0) ? -h : h;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = m * (*(g + i)) * h;
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Potansiyel Enerji\n");
    printf("Girdiler: m = %.6f kg, h = %.6f m\n", m, h);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | Ep = %12.6f J\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 5) Hidrostatik Basinc: P = rho g h */
void hidroBasinc(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double rho, h;
    double sonuc[N];
    int i;

    printf("\nSivi yogunlugu rho (kg/m^3) giriniz: ");
    scanf("%lf", &rho);
    rho = (rho < 0) ? -rho : rho;

    printf("Derinlik h (m) giriniz: ");
    scanf("%lf", &h);
    h = (h < 0) ? -h : h;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = rho * (*(g + i)) * h;
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Hidrostatik Basinc\n");
    printf("Girdiler: rho = %.6f kg/m^3, h = %.6f m\n", rho, h);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | P = %12.6f Pa\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 6) Arsimet: Fk = rho g V */
void arsimet(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double rho, V;
    double sonuc[N];
    int i;

    printf("\nSivi yogunlugu rho (kg/m^3) giriniz: ");
    scanf("%lf", &rho);
    rho = (rho < 0) ? -rho : rho;

    printf("Batan hacim V (m^3) giriniz: ");
    scanf("%lf", &V);
    V = (V < 0) ? -V : V;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = rho * (*(g + i)) * V;
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Arsimet Kaldirma Kuvveti\n");
    printf("Girdiler: rho = %.6f kg/m^3, V = %.6f m^3\n", rho, V);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | Fk = %12.6f N\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 7) Basit Sarkac: T = 2 pi sqrt(L/g) */
void sarkac(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double L;
    double sonuc[N];
    int i;

    printf("\nSarkac uzunlugu L (m) giriniz: ");
    scanf("%lf", &L);
    L = (L < 0) ? -L : L;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = 2.0 * PI * sqrt(L / (*(g + i)));
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Basit Sarkac Periyodu\n");
    printf("Girdi: L = %.6f m\n", L);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | T = %12.6f s\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 8) Sabit Ip Gerilmesi: T = m g */
void ipGerilme(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double m;
    double sonuc[N];
    int i;

    printf("\nKutle m (kg) giriniz: ");
    scanf("%lf", &m);
    m = (m < 0) ? -m : m;

    for (i = 0; i < N; i++) {
        *(sonuc + i) = m * (*(g + i));
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Sabit Ip Gerilmesi\n");
    printf("Girdi: m = %.6f kg\n", m);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | T = %12.6f N\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

/* 9) Asansor: N = m(g+a) veya N = m(g-a) */
void asansor(const char *bilimInsani, const char **gezegenAd, const double *g) {
    double m, a;
    int secim;
    double sonuc[N];
    int i;

    printf("\nKutle m (kg) giriniz: ");
    scanf("%lf", &m);
    m = (m < 0) ? -m : m;

    printf("Asansor ivmesi a (m/s^2) giriniz: ");
    scanf("%lf", &a);
    a = (a < 0) ? -a : a;

    printf("\n1) Yukari ivmelenme -> N = m(g + a)\n");
    printf("2) Asagi ivmelenme  -> N = m(g - a)\n");

    do {
        printf("Seciminiz (1/2): ");
        scanf("%d", &secim);
        if (secim != 1 && secim != 2) {
            printf("Uyari: Sadece 1 veya 2 girebilirsiniz!\n");
        }
    } while (secim != 1 && secim != 2);

    for (i = 0; i < N; i++) {
        if (secim == 2) {
            double fark = (*(g + i)) - a;
            fark = (fark < 0) ? 0.0 : fark;
            *(sonuc + i) = m * fark;
        } else {
            *(sonuc + i) = m * ((*(g + i)) + a);
        }
    }

    printf("\n--------------------------------------------\n");
    printf("Bilim Insani: %s\n", bilimInsani);
    printf("Deney: Asansor\n");
    printf("Girdiler: m = %.6f kg, a = %.6f m/s^2\n", m, a);
    printf("--------------------------------------------\n");

    for (i = 0; i < N; i++) {
        printf("%-8s | g = %6.2f m/s^2 | N = %12.6f N\n",
               *(gezegenAd + i), *(g + i), *(sonuc + i));
    }
}

int main() {
    const char *gezegenAd[N] = {
        "Merkur", "Venus", "Dunya", "Mars",
        "Jupiter", "Saturn", "Uranus", "Neptun"
    };

    const double g[N] = { 3.70, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15 };

    char bilimInsani[100];
    int secim;

    printf("UZAY SIMULASYONU - FIZIK DENEYLERI\n");
    printf("Bilim insaninin adini giriniz: ");
    scanf(" %99[^\n]", bilimInsani);

    do {
        printf("\n--------------------------------------------\n");
        printf("MENU\n");
        printf(" 1) Serbest Dusme\n");
        printf(" 2) Yukari Atis\n");
        printf(" 3) Agirlik\n");
        printf(" 4) Potansiyel Enerji\n");
        printf(" 5) Hidrostatik Basinc\n");
        printf(" 6) Arsimet Kaldirma Kuvveti\n");
        printf(" 7) Basit Sarkac Periyodu\n");
        printf(" 8) Sabit Ip Gerilmesi\n");
        printf(" 9) Asansor\n");
        printf("Cikis: -1\n");
        printf("--------------------------------------------\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1: serbestDusme(bilimInsani, gezegenAd, g); break;
            case 2: yukariAtis(bilimInsani, gezegenAd, g); break;
            case 3: agirlikDeneyi(bilimInsani, gezegenAd, g); break;
            case 4: potEnerji(bilimInsani, gezegenAd, g); break;
            case 5: hidroBasinc(bilimInsani, gezegenAd, g); break;
            case 6: arsimet(bilimInsani, gezegenAd, g); break;
            case 7: sarkac(bilimInsani, gezegenAd, g); break;
            case 8: ipGerilme(bilimInsani, gezegenAd, g); break;
            case 9: asansor(bilimInsani, gezegenAd, g); break;
            case -1:
                printf("\nProgram kapatiliyor...\n");
                break;
            default:
                printf("\nGecersiz secim! (1-9 veya -1)\n");
        }

        if (secim != -1) {
            printf("\nDevam etmek icin Enter'a basin...");
            getchar();
            getchar();
        }

    } while (secim != -1);

    return 0;
}
