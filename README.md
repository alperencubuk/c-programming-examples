# C Programlama

Bu Repository **KTU CEC & KTU SEC** ortaklığında yürütülen **C Programlama Eğitimi** kapsamında eğitmeni ve mentörü olduğum sınıf için yazdığım C kodlarını içermektedir. Ders esnasında yazdığım kodları ve teslim süresi dolmuş ödevlerin çözümlerini bu Repository'den edinebilirsiniz. Her dersin sonunda Repository güncellenecektir.

---

# Ödevler

Bu haftanın ödevleri aşağıdadır. Ödevlerin açıklamasında anlaşılmayan bir kısım veya ödevlerle ilgili kafanıza takılan herhangi bir şey olursa WhatsApp üzerinden iletişime geçebilirsiniz.

Ödevlerin Son Teslim Tarihi: **07.12.2018**

## 1. Ödev: Sayının Basamakları Toplamının Kuvvetleri
  
Bir sayının basamakları toplamının herhangi bir kuvveti sayının kendisine eşitse o sayıyı ekrana yazdıran bir uygulama yazmanız istenmektedir. Programınız 2'den 1.000.000'a kadar tüm sayıları test ederek uygun sayıları ekrana yazacaktır.

Örneğin;
- (81) = (1+8)^2
- (512) = (2+1+5)^3
- (614656) = (6+5+6+4+1+6)^4

Üs değeri için bir sınırlama yoktur. Yani sayının basamakları toplamının 50. kuvveti sayıya eşitse o sayıyı da yazdırmalısınız. Başlangıç için 10. kuvvete kadar bak gibi bir keyfi değer belirleyebilirsiniz. Ancak optimum algoritma için nereye kadar üs hesaplamaya devam etmeniz gerektiğine iyi karar verin.

Kodunuz doğru çalışıyorsa belirtilen (2 - 1.000.000) aralık için ekrana 18 adet değer yazacaktır. Üs alma işlemi için pow() fonksiyonunu kullanmak yerine döngü ile üs hesaplatmanız tavsiye edilir.

## 2. Ödev: Dizileri Birleştir
  
Elimizde aşağıdaki şekilde tanımlanmış 3 adet dizi bulunuyor.

- char dizi1[]="zeynep";
- char dizi2[]="ilayda";
- char dizi3[15];

Programınız 1. ve 2. diziyi birleştirip 3. diziye atamalıdır. Programınız yalnızca dizi3'te tutulan veriyi (**zeynepilayda**) ekrana yazacaktır. dizi1 ve dizi2 için printf yapılmayacaktır.

İlgili birleştirme işlemlerini yapacak döngüleri yazarak dizi3 içerisinde **zeynepilayda** tutulmasını sağlayınız. Ardından dizi3'ü yine bir döngü kullanarak ekrana yazdırınız.

## 3. Ödev: Büyük Küçük Harf Değiştirme

Klavyeden bir metin alıp, alınan metindeki büyük harfleri küçük harfe, küçük harfleri büyük harfe çevirecek bir uygulama yazmanız istenmektedir.

Örnek girdi: **Hello World 24 !**
Örnek çıktı: **hELLO wORLD 24 !**

Aldığınız metni bir karakter dizisinde tutmanız gerekmektedir. Ardından dizi üzerinde gezinerek harflerin büyük harf mi küçük harf mi olduklarını tespit edip dönüşüm işlemini yapmalısınız. İsterseniz metninizin bulunduğu diziyi bozmayıp sonucu ayrı bir dizi olarak da tutabilirsiniz.

Harf dışı karakterlerde, örneğin sayılarda veya noktalama işaretlerinde hiçbir işlem yapılmayacaktır. Türkçe karakter desteği istenmemektedir. Türkçe karakterler için de işlem yapılmasına gerek yoktur.

**İpucu:** ASCII tabloya göz atın. **http://www.asciitable.com/**

## 4. Ödev: Girilen Metnin Tersi

Klavyeden bir metin alıp, alınan metni ters çevirmeniz istenmektedir.

Örnek girdi: **Hello World 24 !**
Örnek çıktı: **! 42 dlroW olleH**

Aldığınız metni bir karakter dizisinde tutmanız gerekmektedir. Ardından dizi üzerinde gezinerek diziyi ters şekilde farklı bir karakter dizisine yazmalısınız.

---

**Alperen Çubuk**