# Doğu Karadeniz Şehirleri Trafik Kodu Uygulaması

Bu proje, Doğu Karadeniz illerinin trafik kodlarını bir dosyadan okuyarak, girilen koda karşılık gelen şehri ve "Doğu Karadeniz bölgesinde yer alır" mesajını ekrana yazdıran bir C uygulamasıdır.

## Amaç

Bu proje, dosya okuma ve temel C programlama becerilerini kullanarak, belirli bir veri kümesini işlemeyi ve kullanıcıya anlamlı bilgiler sunmayı amaçlamaktadır.

## Gereksinimler

* C derleyicisi (örneğin, GCC)
* Metin düzenleyici (örneğin, VS Code, Sublime Text)

## Kullanım

1.  Proje dosyalarını (kod dosyası ve veri dosyası) bilgisayarınıza indirin.
2.  Veri dosyasının (örneğin, `trafik_kodlari.txt`) doğru formatta olduğundan emin olun. Dosya, her satırda şehir adı ve trafik kodunu içermelidir (örneğin, "Artvin 08").
3.  C kodunu derleyin: `gcc main.c -o trafik_kodlari`
4.  Uygulamayı çalıştırın: `./trafik_kodlari`
5.  Uygulama sizden bir trafik kodu girmenizi isteyecektir. Geçerli bir kod girdiğinizde, ilgili şehir ve mesaj ekrana yazdırılacaktır. Geçersiz bir kod girdiğinizde, "Hatalı Kod Girdiniz" mesajı görüntülenecektir.
