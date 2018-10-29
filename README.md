# C Programlama

Bu Repository **KTU CEC & KTU SEC** ortaklığında yürütülen **C Programlama Eğitimi** kapsamında eğitmeni ve mentörü olduğum sınıf için yazdığım C kodlarını içermektedir. Ders esnasında yazdığım kodları ve teslim süresi dolmuş ödevlerin çözümlerini bu Repository'den edinebilirsiniz. Her dersin sonunda Repository güncellenecektir.

---

# Ödevler

Bu haftanın ödevleri aşağıdadır. Ödevlerin açıklamasında anlaşılmayan bir kısım veya ödevlerle ilgili kafanıza takılan herhangi bir şey olursa WhatsApp üzerinden iletişime geçebilirsiniz.

Ödevlerin Son Teslim Tarihi: **03.11.2018**

## 1. Ödev: Ortalama ve Sapma Hesabı  
  
Eleman sayısı değişken bir tamsayı dizisinin elemanlarının ortalamasını ve standart sapmasını hesaplayıp ekrana yazan bir uygulama programlamanız bekleniyor.  
  
Dizinin eleman sayısı için aşağıdaki gibi bir makro ile sabit değer belirlenecek;  
  
#define N 5  
  
Yukarıdaki gibi bir sabit tanımladıktan sonra dizi aşağıdaki gibi tanımlanmalı;  
  
int dizi[N];  
  
ve makrodaki N değerine 5 yerine farklı bir değer atandığında program yine de çalışabilmelidir. Bu sebeple döngülerinize koşul yazarken veya dizinin eleman sayısını kullanmanız gereken yerlerde N sabitini kullanın.  
  
Dizinin elemanları klavyeden istenecektir. N sabiti kadar eleman döngü ile klavyeden okunarak dizinin indislerine atanacak.  
  
Ortalama ve standart sapmanın float olarak hesaplanması ve tam doğru sonuç üretmesi beklenmektedir. (2 elemanlı 10,15 dizisinin ortalamasını 12.50 olarak hesaplayabilmeli)  
  
Sonuç olarak program verilen değerlere göre hesaplanmış ortalama ve sapma değerini ekrana yazdırıp sonlanmalıdır.  

Karekök için ek bilgi:

#include <math.h> kütüphanesini kodunuza ekledikten sonra sqrt(x) fonksiyonu yardımıyla karekök alabilirsiniz.  
  
Örneğin sqrt(4); 2 çıktısı verecektir. (Çıktı float tipte olacağından %f ile işlem yapılır.)

## 2. Ödev: Mükemmel Sayılar 
  
Kendisi hariç bütün pozitif bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı denir.  
  
1+2+3 = 6  
1+2+4+7+14 = 28  
  
Görüldüğü üzere 6 ve 28 mükemmel sayıdır.  
  
1-1000 aralığındaki bütün mükemmel sayıları bulup ekrana yazdıracak C programını yazınız.  
  
Bu ödeviniz üzerinde uzunca düşünmeniz gereken bir problem. Bir döngü oluşturacaksınız ve 1000 e kadar tüm sayıların pozitif bölenlerini bulup toplayacak, toplam değer sayıya eşit mi diye kontrol edecek, eşitse o sayıyı ekrana yazacak.  
  
C hızlı bir dildir ve 1000 sayı için gerekli tüm hesaplamaları 1 saniyeden kısa bir sürede tamamlayacaktır. Tek yapmanız gereken doğru mantığı kurabilmeniz.  
  
Sayının bölenlerini bulmak için mod alma işleminden yararlanabilirsiniz. Bir adet 1-1000 arası döngünüz bir adet ise o anki sayının bölenlerini bulacağınız döngünüz olması gerekiyor. (İç içe döngü)  
  
Başlangıçta daha küçük bir aralıkta (mesela 1-10) test edip 6'nın mükemmel sayı olduğunu buldurmayı deneyebilirsiniz. Yada tek bir sayı alın klavyeden mükemmel mi diye o sayıyı kontrol etsin. 6 ve 28 için mükemmel sayı diyorsa mantığınız doğrudur daha sonra 1-1000 aralığında tüm sayılar için algoritmanızı çalıştırın.

## 3. Ödev: Kullanıcı Girişi Ekranı

Basit bir kullanıcı girişi ekranı kodlamanız istenmektedir. Programınız kullanıcıya kullanıcı adı ve şifre sorarak klavyeden bu bilgileri alacak, ardından programda önceden belirlenmiş kullanıcı adı ve şifre ile karşılaştırıp doğruluğunu kontrol edecektir.

Kullanıcı Adı: admin
Şifre: password

şeklinde giriş yapıldığında programınız ekrana giriş başarılı, aksi her türlü durumda (kullanıcı adı yanlışsa veya şifre yanlışsa) giriş başarısız yazmalıdır. Kullanıcı adı ve şifre bilgilerini char dizileri yardımıyla tutabilirsiniz. Karakter dizilerini bir döngü yardımıyla harf harf kontrol ederek karşılaştırabilirsiniz. (strncmp hazır fonksiyonunu kullanmayın.)

---

**Alperen Çubuk**