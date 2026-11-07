# ATM Bankacılık Uygulaması

C'nin temel giriş/çıkış komutları ve kontrol yapıları kullanılarak hazırlanmış menü tabanlı ATM simülasyonu.

## Özellikler
- Başlangıç bakiyesi: 1000
- Bakiye görüntüleme
- Para yatırma
- Para çekme
- Bakiyeden fazla para çekilmesini engelleme
- Menü döngüsü ve çıkış seçeneği

## Kullanılan konular
- Değişkenler
- `printf` ve `scanf`
- `if-else`
- `switch-case`
- `while`

## Örnek kullanım

Aşağıdaki örnekte kullanıcı 200 birim para yatırır ve ardından bakiyesini görüntüler:

```text
Islem seciniz:
1- Para yatirma
2- Para cekme
3- Bakiye ogrenme
4- Cikis
1
yatirmak istedigiz tutar
200
bakiyeniz:1200.00
Islem seciniz:
1- Para yatirma
2- Para cekme
3- Bakiye ogrenme
4- Cikis
3
1200.00
```

## Dosyalar
- [atm.cpp](./atm.cpp) — Projenin kaynak kodu.

## Durum
Tamamlandı. İleride para yatırma işlemi için de tutar doğrulaması eklenebilir.
