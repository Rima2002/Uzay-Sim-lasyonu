# 🌌 Uzay Simülasyonu – Fizik Deneyleri
**Algoritmalar ve Programlama Dersi – Dönem Projesi**

## 👤 Proje Sahibi
- **Ad Soyad:** Rima Farah Eleuch  
- **Öğrenci No:** (öğrenci numaranı buraya yaz)  
- **Bölüm / Şube:** (bölüm ve şube bilgini yaz)

> Bu proje bireysel olarak geliştirilmiştir.

---

## 📌 Proje Hakkında
Bu proje, Algoritmalar ve Programlama dersi kapsamında hazırlanmış, **C dili ile yazılmış konsol tabanlı bir uygulamadır**.  
Programın amacı, temel fizik deneylerini Güneş Sistemi’ndeki farklı gezegenler için simüle etmek ve elde edilen sonuçları karşılaştırmalı olarak ekrana yazdırmaktır.

Program çalıştığında kullanıcıdan önce **bilim insanı adı** alınır. Daha sonra ekrana bir **menü** basılır ve kullanıcı istediği deneyi seçer. Seçilen deney için gerekli fiziksel değerler kullanıcıdan alındıktan sonra, sonuçlar tüm gezegenler için alt alta gösterilir.

---

## 🧪 İçerdiği Deneyler
Program toplam **9 adet fizik deneyi** içermektedir:

1. Serbest Düşme  
2. Yukarı Atış  
3. Ağırlık  
4. Potansiyel Enerji  
5. Hidrostatik Basınç  
6. Arşimet Kaldırma Kuvveti  
7. Basit Sarkaç Periyodu  
8. Sabit İp Gerilmesi  
9. Asansör Problemi  

Her deney ayrı bir fonksiyon olarak yazılmıştır.

---

## ⚙️ Programın Çalışma Mantığı
- Program başında kullanıcıdan bilim insanı adı alınır.
- Menü ekrana basılır ve deney seçimi yapılır.
- Seçilen deney için gerekli değerler kullanıcıdan alınır.
- Negatif girilen kütle, uzunluk, süre veya hacim gibi değerler **ternary operatörü kullanılarak mutlak değere çevrilir**.
- Hesaplamalar, gezegen verileri üzerinde **pointer kullanılarak dizi erişimi** ile yapılır.
- Sonuçlar, her gezegen için ayrı satır olacak şekilde ekrana yazdırılır.

---

## 🛠️ Kullanılan Yapılar ve Kavramlar
- `for` döngüleri  
- `switch-case` menü yapısı  
- Fonksiyonlar (modüler programlama)  
- Dizilere pointer mantığıyla erişim  
- Ternary operatörü  
- Standart C kütüphaneleri (`stdio.h`, `math.h`)

---

## 📂 Dosya Yapısı
- `ODEV.c` → Projenin kaynak kodu  
- `rapor.pdf` → Proje raporu  

---

## ▶️ Programı Çalıştırma
C derleyicisi bulunan bir ortamda aşağıdaki komutlarla program derlenip çalıştırılabilir:

```bash
gcc ODEV.c -o proje
./proje
