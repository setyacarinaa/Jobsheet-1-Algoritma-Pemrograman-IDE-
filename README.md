<img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/blob/main/header%20readme.gif" width="1000" height="260"/>

# Praktikum Algoritma Pemrograman
### Laporan praktikum ini berisi penjelasan materi dari jobsheet yang diberikan dosen pengampu lengkap beserta latihan dan tugas (codingan dan screenshot hasil run program).

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

* __Nama: Setya Carina Rianti__
* __NIM: 23343054__
* __Prodi: Informatika(NK)__
* __Kode Kelas: INF1.62.1008__
* __Seksi: 202313430012__
* __Dosen Pengampu: Randi Proska Sandra, M.Sc__

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## Uraian Materi📜

</details>
<details><summary><h3>1. Algoritma, Pemrograman, dan IDE</h3></summary>

* Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan suatu masalah atau mencapai suatu tujuan tertentu. Sebuah algoritma mempunyai awal dan akhir. Algoritma adalah jantung ilmu komputer atau informatika. Banyak cabang ilmu komputer yang di acu dalam terminologi algoritma. Algoritma adalah jantung ilmu komputer atau informatika. Banyak cabang ilmu komputer yang di acu dalam terminologi algoritma.
* Pemrograman adalah proses penulisan kode menjadi sebuah program. Pemrograman adalah suatu seni dalam menggunakan satu atau lebih algoritme yang saling berhubungan dengan menggunakan suatu bahasa pemrograman tertentu sehingga menjadi suatu program komputer. Untuk melakukan pemrograman dibutuhkan algoritma dan bahasa pemrograman. Sementara orang yang melakukan pemrograman disebut dengan programmer, sedangkan program adalah produk dari proses pemrograman yang dilakukan.
* IDE atau Integrated Development Environment adalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. Berbeda dengan text editor seperti notepad, IDE merupakan text editor yang memiliki compiler dan debugger sekaligus sehingga memungkinkan sebuah program dapat ditulis, diuji, dan dijalankan dalam satu aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, dll.
    <a href="https://www.embarcadero.com/free-tools/dev-cpp/free-download"><img src="https://img.shields.io/badge/DevC++-purple?style=plastic&logo=DevC++&logoColor=white"/></a>
    <a href="https://code.visualstudio.com/download"><img src="https://img.shields.io/badge/VSCode-purple?style=plastic&logo=VSCode&logoColor=white"/></a>
    <a href="https://sourceforge.net/projects/codeblocks/"><img src="https://img.shields.io/badge/CodeBlocks-purple?style=plastic&logo=CodeBlocks&logoColor=white"/></a>
    <a href="https://netbeans.apache.org/front/main/download/index.html"><img src="https://img.shields.io/badge/NetBeans-purple?style=plastic&logo=NetBeans&logoColor=white"/></a>

</details>
<details><summary><h3>2. Pemrograman Dasar C</h3></summary>

* Header file adalah file yang berisi definisi fungsi yang sudah dibuat. Tujuannya agar bisa digunakan pada program C yang lainnya. File ini berekstensi .h, contoh: stdio.h. Pada contoh di atas, kita mengimpor file stdio.h. File ini berisi deklarasi fungsi-fungsi dasar yang kita butuhkan untuk membuat program C, seperti printf().
* Satu-satunya perintah yang harus ada di setiap kode program bahasa C adalah main(). Struktur main() sendiri pada dasarnya merupakan sebuah fungsi (function). Isi dari function ini diawali dan diakhiri dengan tanda kurung kurawal { dan } . Di dalam tanda kurung inilah “statement” dari kode program penyusun fungsi main() ditulis. Fungsi main() adalah fungsi utama dalam program. Fungsi ini akan dieksekusi pertamakali saat program dijalankan. Karena itu, kita harus menuliskan logika program di dalam fungsi ini.
  
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/674382d5-8ef8-442a-b0af-3eed6935b115" height="120" width="350"/>

* Maksud dari int di depan main adalah tipe data yang akan dikembalikan. Maka di dalam fungsi main(), wajib kita sertakan return 0. Artinya, fungsi main akan mengembalikan nilai 0 setelah selesai dieksekusi.

</details>
<details><summary><h3>3. Variable, Konstanta, dan Tipe Data</h3></summary>

* Variabel adalah sebuah tempat menyimpan sebuah nilai. Sementara tipe data adalah jenis nilai yang akan tersimpan dalam variabel. Pada pelajaran matematika, kita sering menemukan x dan y. x dan y ini disebut variabel, karena tugasnya menyimpan nilai.

  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/94438c0e-36cf-49c3-ba40-1cb76fb68ede" height="60" width="650"/>

* Konstanta adalah sebuah nilai tetapan. Bisa juga dibilang sebagai variabel yang tidak bisa diubah nilainya.
Ada dua cara pembuatan konstanta pada C:
1. Menggunakan #define <br>
<img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/538d18cb-41c3-4576-8c13-818cd3795dc5" height="130" width="390"/></a> <br> 
3. Menggunakan const <br>
<img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/4b13069e-1a56-421f-9d45-bbd273e1be4d" height="130" width="390"/></a> <br>

* Menurut Wikipedia Tipe data atau kadang disingkat dengan ‘tipe’ saja adalah sebuah pengelompokan data untuk memberitahu compiler atau interpreter bagaimana programmer ingin mengolah data tersebut. Ada delapan jenis tipe data pada C:</a> <br>
  | Char | Integer | Float | Array | 
  | :---: | :---: | :---: | :---: |
  | Structure | Pointer | Enum | Void | 

</details>
<details><summary><h3>4. Operator</h3></summary>

* Operator adalah sebuah simbol. Simbol yang digunakan untuk melakukan operasi tertentu. Misalnya: Kita ingin menjumlahkan nilai dari variabel x dan y, maka kita bisa menggunakan operator penjumlahan (+).
* Berdasarkan jumlah operand-nya, operator dibagi menjadi 3 jenis:
  1. Operator Unary, mempunyai 1 operand
  2. Operator Binary, mempunyai 2 operand
  3. Operator Ternary, mempunyai 3 operand
  
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/780771af-1c36-436f-bb1a-1e5668c59fa8" height="230" width="500"/></a> <br>

* Operand adalah nilai asal yang dipakai dalam sebuah proses operasi. Sedangkan Operator adalah instruksi yang diberikan untuk mendapatkan hasil dari proses tersebut.

</details>
<details><summary><h3>5. Flow Control: Decision Making</h3></summary>

* C menyediakan sejumlah pernyataan aliran kontrol (juga disebut pernyataan Flow Control), yang merupakan pernyataan yang memungkinkan pemrogram untuk mengubah jalur eksekusi normal melalui program. Istilah lainnya adalah percabangan, struktur kondisi, struktur if, dsb.
* Untuk keperluan pengambilan keputusan, C menyediakan beberapa jenis pernyataan, berupa:
  1. Pernyataan if<br>
     Percabangan if merupakan percabangan yang hanya memiliki satu blok pilihan saat kondisi bernilai benar.
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/4ce9fc7b-eb42-4ab4-be28-015605b22bd7" height="80" width="500"/>
  2. Pernyataan if else<br>
     Percabangan if/else merupakan percabangan yang memiliki dua blok pilihan. Blok pilihan pertama untuk kondisi benar, dan pilihan kedua untuk kondisi salah (else).<br>
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/f1d2191b-819d-4a80-875d-5d7290604cc8" height="270" width="500"/></a> <br>
  3. Pernyataan if else if<br>
     Percabangan if/else/if merupakan percabangan yang memiliki lebih dari dua blok pilihan.
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/44ffa0b6-aaf8-428d-ba54-cd41dc4af783" height="390" width="535"/></a> <br>
  4. Pernyataan Switch Case<br>
     Percabangan switch case adalah bentuk lain dari percabangan if/else/if.
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/dff28771-ce95-4e05-b568-a56c5452ed1b" height="240" width="500"/></a> <br>
  5. Percabangan Operator Ternary<br>
     Percabangan menggunakan opreator ternary merupakan bentuk lain dari percabangan if/else. Bisa dibilang: Bentuk singkatnya dari if/else. Operator ternary juga dikenal dengan sebutan operator kondisi (conditional operator).<br>
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/f6c7fadf-2f45-45c8-9b33-4a272ccfa831" height="70" width="500"/>
  6. Percabangan Bersarang<br>
     Semua bentuk blok percabangan di atas dapat kita buat di dalam percabangan yang lainnya. Ini disebut dengan percabangan bersarang atau nested if.<br>
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/fa428eb7-1433-4ee7-b704-3ecf6a15b788" height="390" width="535"/></a> <br>

</details>
<details><summary><h3>6. Flow Control: Loop (Perulangan)</h3></summary>

* Loop adalah konstruksi aliran kontrol yang memungkinkan sepotong kode untuk dieksekusi secara berulang kali hingga beberapa kondisi terpenuhi. Loop ini memberikan kemudahan dalam pemrograman Anda, karena memungkinkan Anda melakukan banyak hal secara berulang tapi dengan program yang ringkas.
    1. Perulangan For pada C<br>
       Perulangan for merupakan perulangan yang termasuk dalam couted loop, karena sudah jelas berapa kali ia akan mengulang.
       <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/e92f57eb-f7af-4eef-80d3-1329f7314552" height="70" width="500"/><br>
       Yang perlu diperhatikan adalah kondisi yang ada di dalam kurung setelah kata for. Kondisi ini akan menentukan:<br>
       • Hitungan akan dimulai dari 0 (i = 0);<br>
       • Hitungannya sampai berapa? Sampai i < 10;<br>
       • Lalu di setiap perulangan i akan bertambah +1 (i++).<br>
       Variabel i pada perulangan for berfungsi untuk menyimpan nilai hitungan.
    2. Perulangan While pada C<br>
       Perulangan while merupakan perulangan yang termasuk dalam perulangan uncounted loop. Perulangan while juga dapat menjadi perulangan yang counted loop dengan memberikan counter di dalamnya.
       <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/315fb7e8-78ea-4757-b3e8-e6f73dfb9e37" height="150" width="500"/>
    3. Perulangan Do While pada C<br>
       Perulangan do while sama seperti perulangan while. Perbedaanya: Perulangan do while akan melakukan perulangan sebanyak 1 kali terlebih dahulu, lalu mengecek kondisi yang ada di dalam kurung while.
       <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/ace9ec73-0a16-41fc-b6dd-7d08a44345ab" height="100" width="500"/>
    4. Perulangan Bersarang (Nested Loop)<br>
       Di dalam blok perulangan, kita juga dapat membuat perulangan. Ini disebut dengan nested loop atau perulangan bersarang atau perulangan di dalam perualangan.<br>
       <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/29c2f26e-f552-4bac-b5e7-ec0184cda74b" height="130" width="500"/>

</details>
<details><summary><h3>7. Struktur Data: Array</h3></summary>

* Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat, array ini juga disebut dengan istilah larik. Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya seperti mengakses atau mengganti datanya.
* Array akan menyimpan sekumpulan data dan memberinya nomer indeks agar mudah diakses. Indeks array selalu dimulai dari nol 0.
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/13977cec-3959-41e2-b55d-c452ae860c60" height="130" width="500"/>
* Array Multidimensi<br>
  Array yang kita buat pada contoh-contoh program di atas adalah array satu dimensi. Array bisa dibuat dua dimensi bahkan lebih. Array multidimensi biasanya digunakan untuk membuat matriks.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/f29b82f9-1e33-4989-a3c2-0c7167215088" height="130" width="500"/>
* String<br>
  String.h merupakan library yang menyimpan fungsi-fungsi yang digunakan untuk menangani string ataupun substring.<br>
  1. strcpy() = Fungsi ini digunakan untuk mengkopi string pada variabel 2 ke variabel 1.
  2. strcat() = Fungsi strcat() digunakan untuk menambahkan string dari belakang.
  3. strlen() = Fungsi strlen() digunakan untuk menghitung panjang string.
  4. strcmp() = Fungsi strcmp() digunakan untuk membandingkan string dengan string yang lainnya.

</details>
<details><summary><h3>8. Fungsi & Prosedur</h3></summary>

* Fungsi adalah sub-program yang bisa digunakan kembali baik di dalam program itu sendiri, maupun di program yang lain. Contoh fungsi yang sering kita buat adalah fungsi main(). Fungsi ini memang wajib ada di setiap program C karena akan dieksekusi pertama kali.
* Fungsi biasanya akan mengembalikan sebuah nilai dari hasil prosesnya. Karena itu, kita harus menentukan tipe data untuk nilai yang akan dikembalikan. Apabila fungsi tersebut tidak memiliki nilai kembalian, maka kita harus menggunakan tipe void untuk menyatakan kalau fungsi tersebut tidak akan mengembalikan nilai apa-apa.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/02a5035d-fdff-4f76-bee7-37cd32d705de" height="70" width="500"/><br>
* Parameter adalah variabel yang menyimpan nilai untuk diproses di dalam fungsi. Parameter akan menyimpan nilai yang akan diinputkan ke dalam fungsi. Contoh, "Petani Kode" adalah nilai yang akan kita berikan ke parameter.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/17914bb5-bd08-45d6-9aaf-dc9dcc6eb2c0" height="45" width="500"/><br>
* Fungsi Rekursif pada C<br>
Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri. Biasanya kita memanggil fungsi pada fungsi main atau fungsi yang lainnya. Namun, pada fungsi rekursif, fungsi itu akan memanggil dirinya sendiri di dalam tubuh fungsi.
* Variabel Lokal & Variabel Global<br>
  > Variabel global adalah variabel yang bisa diakses dari semua fungsi.
  > Variabel lokal adalah variabel yang hanya bisa diakses dari dalam fungsi itu sendiri.

</details>
<details><summary><h3>9. Pointer</h3></summary>

* Pointer adalah sebuah variabel yang berisi alamat memori dari variabel yang lain. Pointer nantinya akan bisa mengakses data yang ada di suatu alamat memori.
* Pointer dibuat dengan menambahkan simbol * (asterik) di depan namanya, kemudian diisi dengan alamat memori yang akan digunakan sebagai referensi.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/31feedc0-a854-4eff-9686-852f82e64be7" height="45" width="500"/><br>
* Alamat memori pointer adalah alamat memori yang digunakan untuk menyimpan pointer. Sedangkan alamat referensi adalah alamat yang akan menjadi referensi dari pointer.
* Zaman dulu, memori komputer itu sangat terbatas. Saat mengelola struktur data kompleks seperti data pada array, linked list, tree, dan sebagainya. sering kali memakan banyak memori. Oleh sebab itu, diciptakanlah pointer agar mudah membuat struktur data tersebut, dan tentunya lebih hemat memori.
* Kita tidak harus selalu menggunakan pointer dalam program. Namun, ada beberapa kasus tertentu yang menyarankan menggunakan pointer daripada cara biasa. Karena terbukti, dengan pointer performa program akan lebih optimal.

</details>
<details><summary><h3>10. Enumerasi & Structure</h3></summary>

* Enum atau Enumeration<br>
  Merupakan tipe data yang berisi sekumpulan konstanta. Enum termasuk dalam tipe data bentukan, karena tipe data ini dibuat sendiri oleh kita. Variabel enum hanya akan mengambil satu nilai dari konstanta yang ada. <br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/2e4233bc-ce91-4fe6-a987-4270feba217e" height="95" width="500"/><br>
* Structure atau struct<br>
  Adalah kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu varabel. Struct juga dikenal dengan records dalam bahasa pemrograman lain seperti Pascal.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/8fa3a54b-b07a-458b-8d10-64a2939fa625" height="100" width="500"/><br>
* Menggunakan typedef pada Struct<br>
  Kata kunci typedef adalah kata kunci untuk mendefinisikan tipe data baru. Kita bisa menggunakan kata kunci ini di depan struct untuk menyatakannya sebagai tipe data baru.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/70d4439b-1209-466f-a282-4699e0c2bad1" height="200" width="500"/><br>
* Struct Bersarang<br>
  Struct dapat dibuat bersarang (nested). Bersarang artinya ada struct di dalam struct.<br>
  <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/5299a9cf-12cd-4fa4-a499-7c9cbe25c986" height="200" width="500"/><br>

</details>
<details><summary><h3>11. File Handling in C</h3></summary>

* File di komputer itu ada dua jenis, yakni file teks dan binary.<br>
  File teks biasanya dibuat dengan teks editor, contohnya seperti: file txt, file csv, file html, dll. File teks mudah dibaca dan ditulis.<br>
  Sedangkan file binary adalah file yang tersimpan dalam bentuk biner (0 & 1). Contohnya seperti: File exe dan file bin. File binary sulit dibaca, namun dapat menyimpan data lebih banyak dan aman.
1. Fungsi fopen() akan membuka file sesuai dengan mode yang kita berikan. Mode r artinya read atau baca saja. Selain mode r ada juga mode yang lain.
   * Fungsi fopen() akan menghasilkan sebuah pointer yang menunjuk ke alamat memori dari file yang akan dibuka, karena itulah kita membutuhkan pointer untuk mengaksesnya.<br>
     <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/045180f6-956e-4bbc-b8fc-230de7e2d29b" height="130" width="500"/><br>
2. Fungsi fgets() akan membaca isi file yang ditunjuk oleh pointer fptr, kemudian hasilnya akan disimpan ke dalam variabel buff.
   * <img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Algoritma-Pemrograman/assets/145129875/a591129b-f11b-4843-8eec-15e1890c16c8" height="40" width="500"/><br>
3. Fungsi fputs() akan menulis teks ke dalam file yang sedang dibuka.







