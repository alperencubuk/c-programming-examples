# C Programlama

Bu Repository **KTU CEC & KTU SEC** ortaklığında yürütülen **C Programlama Eğitimi** kapsamında eğitmeni ve mentörü olduğum sınıf için yazdığım C kodlarını içermektedir. Ders esnasında yazdığım kodları ve teslim süresi dolmuş ödevlerin çözümlerini bu Repository'den edinebilirsiniz. Her dersin sonunda Repository güncellenecektir.

---

# Ödevler

Bu haftanın ödevleri aşağıdadır. Ödevlerin açıklamasında anlaşılmayan bir kısım veya ödevlerle ilgili kafanıza takılan herhangi bir şey olursa WhatsApp üzerinden iletişime geçebilirsiniz.

Ödevlerin Son Teslim Tarihi: **21.12.2018**

## 1. Ödev: Fibonacci Sayıları

Fibonacci dizisi, her sayının kendisinden bir önceki sayı ile toplanması ile elde edilen sayılar serisidir. Başlangıçta sıfırıncı Fibonacci sayısı **0**, birinci Fibonacci sayısı **1** olarak kabul edilir.

Fibonaccinin ilk 10 terimi:

0. Fibonacci Sayısı: **0**
1. Fibonacci Sayısı: **1**
2. Fibonacci Sayısı: **1**
3. Fibonacci Sayısı: **2**
4. Fibonacci Sayısı: **3**
5. Fibonacci Sayısı: **5**
6. Fibonacci Sayısı: **8**
7. Fibonacci Sayısı: **13**
8. Fibonacci Sayısı: **21**
9. Fibonacci Sayısı: **34**
10. Fibonacci Sayısı: **55**

şeklindedir.

İstenilen Fibonacci sayısını döndüren fonksiyonu yazmanız istenmektedir. Örneğin fonksiyonunuz **fibonacci(7)** şeklinde çağrıldığında geriye **13** döndürmelidir.

Fonksiyonun geri döndürdüğü değeri ekrana yazdırmanız gerekmektedir. Tüm **printf** işlemleri **main**de yapılacaktır. Fonksiyon yalnızca gerekli hesaplamayı yapıp geriye bir sayı döndürmelidir.

## 2. Ödev: Matrislerde Max-Min Satir/Sutun
  
  Aşağıdaki matriste görüldüğü gibi bir matrisin satırlarındaki ve sütunlarındaki değerlerin toplamlarını hesaplayıp, toplamı en büyük satır ile toplamı en küçük sütunu bulmanız istenmektedir.
  
  1 2 3   =  **6**
  4 5 6   =  **15**
  7 8 9   =  **24**
  || || ||
**12**   **15**   **18**

Yukarıdaki örnek için;
En büyük satır 3. satır ve değeri 24'tür.
En küçük sütun 1. sütun ve değeri 12'dir.

Uygulamanızı fonksiyonlar halinde parça parça yazmanız istenmektedir. Toplam 4 fonksiyon aşağıdaki işlemleri yapacaktır.

**setMatrisRandom:** Bu fonksiyon verilen matrisi 1-9 aralığında ürettiği rastgele değerler ile doldurmalıdır.

**matrisYazdir:** Bu fonksiyon verilen matrisi ekrana matris biçiminde yazdırmalıdır.

**satirToplamMax:** Bu fonksiyon toplamı maksimum olan satırın, toplam değerini geri döndürmelidir. Ayrıca Global olarak tanımlanmış **maxSatir** değişkenine toplamı maksimum olan satırın kaçıncı satır olduğu bilgisini atamalıdır.

**sutunToplamMin:** Bu fonksiyon toplamı minimum olan sütunun, toplam değerini geri döndürmelidir. Ayrıca **global** olarak tanımlanmış **minSutun** değişkenine toplamı minimum olan sütunun kaçıncı sütun olduğu bilgisini atamalıdır.

**maxSatir** ve **minSutun** **global** değişkenler olduğundan doğrudan istediğiniz fonksiyon içerisinde kullanabilirsiniz. (Tekrar int maxSatir gibi bir tanımlama yapmadan)

Ödevinizi [BURADAKİ](https://github.com/alperencubuk/C-Programming-Examples/blob/master/5.%20Hafta/Matrislerde%20Max-Min%20Satir-Sutun%20(TASLAK).c)` taslak kod üzerinde ilgili fonksiyonların içini doldurarak yapmanız istenmektedir. Fonksiyonların içerisi hariç kodda değişiklik yapmanız yasaktır. (Main'de hiçbir işlem yapmayacaksınız.)

---

**Alperen Çubuk**