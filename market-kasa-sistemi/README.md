# Market Kasa Sistemi

C diliyle geliştirdiğim konsol tabanlı market kasa uygulaması. Kullanıcı ürün fiyatlarını ekleyebilir, toplam tutarı görüntüleyebilir ve ödeme alabilir.

## Özellikler
- Ürün fiyatı ekleme
- Sepet toplamını görüntüleme
- Ödeme tutarı alma
- Fazla ödemede para üstü hesaplama
- Ödeme tamamlandığında sepet toplamını sıfırlama
- Menüden çıkış

## Kullanılan konular
- Değişkenler
- `printf` ve `scanf`
- `if-else`
- `switch-case`
- `while`

## Örnek kullanım

Aşağıdaki örnekte kullanıcı 25 ve 15 birimlik iki ürün ekler, ardından 50 birim ödeme yapar:

```text
bir secim yapin
urun eklemek icin 1
tutar gostermek icin 2
odeme yapmak icin 3
cikis yapmak icin 4
1
urun fiyati nedir
25
urun basariyla eklendi
bir secim yapin
urun eklemek icin 1
tutar gostermek icin 2
odeme yapmak icin 3
cikis yapmak icin 4
1
urun fiyati nedir
15
urun basariyla eklendi
bir secim yapin
urun eklemek icin 1
tutar gostermek icin 2
odeme yapmak icin 3
cikis yapmak icin 4
3
odeyeceginiz tutar:40.000000
odeme miktarini girin
50
para ustu:10.000000
```

## Çalıştırma
Dev-C++ ile `main.c` dosyasını açıp derleyebilirsin.

## Dosyalar
- [main.c](./main.c) — Projenin kaynak kodu.

## Durum
İlk sürüm; geliştirme aşamasında.

## Sonraki geliştirmeler
- Ürün adı ve adet bilgisi ekleme
- Birden fazla ürünün listesini tutma
- Eksik ödeme durumunda kalan tutarı hesaplama
- Geçersiz fiyat ve giriş kontrolleri
- Fiş oluşturma
