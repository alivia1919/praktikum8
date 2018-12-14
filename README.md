# Praktikum8

**NAMA 	: NUR ALI MUHAMMAD**

**KELAS	: TI.18.A.2**

**NIM	: 311810355**

## latihan1.cpp : Buatlah Algoritma Untuk Menentukan Nilai Maksimum Dan Nilai Minimum Dari n Bilangan Bulat Dengan Menggunakan Array.

**Alur Program :**

1. Mendeklarasikan variabel `int nilai[3],a,min,maks;` sebagai variable input.
2. Mendeklarasikan nilai input-output `nilai[a]`.
3. Memasukan fungsi Array `for(a=1;a<=5;a++)` lalu jika `(nilai[a] < min)` maka `min = nilai[a]` atau jika `(nilai[a] > maks)` maka `maks = nilai[a]`.
4. Mencetak hasil nilai variable output **minimum** dan **maksimum**.

**Code Program :**

```c++

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   //deklarasi
    int nilai[3],a,min,maks;

    cout<<"Program Menentukan Nilai Minimal Dan Maksimal Dengan Menggunakan Array"<<endl;
    cout<<"_____________________________________________________________________"<<endl;

   //input-output array
    for(a=1;a<=5;a++){
    cout<<"Masukkan Nilai Ke-"<<a<<" : ";
    cin>>nilai[a];
    }

   //proses looping array
   min = nilai[1];
   maks = nilai[1];
   for(a=1;a<=5;a++){
   if(nilai[a] < min){
   min = nilai[a];
   } else if(nilai[a] > maks){
   maks = nilai[a];
   }
   }

   //output minimum dan maksimum
   cout<<"Nilai Minimum adalah : "<<min<<endl;
   cout<<"Nilai Maksimum adalah : "<<maks<<endl;

getch();
return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan1/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan1/SS.png)


## latihan2.cpp : Tentukan Nilai Modus Dari n Buah Bilangan Bulat, Dimana Besar Datanya Antara 1 Sampai Dengan 10.

**Alur Program :**

1. Mendeklarasikan variabel `class HitungStatistik` sebagai variable input.
2. Membaca input dari keyboard `for (int i=0; i<20; i++) f[i] = 0`.
3. Membuat fungsi `HitungStatistik::HitungStatistik()` dengan `for (int i=0; i<20; i++) f[i] = 0`.
4. Membuat fungsi void `HitungStatistik::maksimum()` dengan `for (int i=0; i<n; i++)` jika `(f[i] > maks)` maka `maks = f[i]` dan `item = i`.
5. Membuat fungsi void `HitungStatistik::frekuensi()` dengan `for (int i=1; i<n; i++) ++f[A[i]]`.
6. Membuat fungsi void `HitungStatistik::hitung_modus()`.
7. Mencetak nilai **modus** dengan `a.item`.

**Code Program :**

```c++

#include <iostream>
#include <math.h>

using namespace std;

class HitungStatistik {
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];
};

HitungStatistik::HitungStatistik()
{ for (int i=0; i<20; i++) f[i] = 0; }

istream& operator>>(istream& in, HitungStatistik& a) {
cout << "Program Mencari Nilai Modus Dari Beberapa Bilangan"<<endl;
cout << "__________________________________________________"<<endl;
cout << "Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++) {
cout << "Data ke-" << i+1 << " : ";
cin >> a.A[i];
}
return in;
}

void HitungStatistik::maksimum()
{
maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks) {
maks = f[i];
item = i;
}
cout << "Modus = " << item << endl;
}

void HitungStatistik::frekuensi()
{
for (int i=1; i<n; i++) ++f[A[i]];
}

void HitungStatistik::hitung_modus() {
cout << "Frekuensi running\n";
frekuensi();
maksimum();
}

ostream& operator<<(ostream& out, HitungStatistik& a) {
cout << "Mulai ...\n";
a.hitung_modus();
cout << "Nilai modus : " << a.item;
return out;
}

main() {
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan2/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan2/SS.png)


## latihan3.cpp : Buatlah Algoritma Dan Program Untuk Mengalikan Dua Buah Matriks.

**Alur Program :**

1. Mendeklarasikan variabel `int matrik1[2][2]`,`int matrik2[2][2]`,`int matrik3[2][2]`,`int temp;` sebagai variable input.
2. Membaca input dari keyboard `for (int x = 0;x<2;x++)` dan `for (int y =0;y<2;y++)`.
3. Membuat fungsi matriks pertama dengan `for (int x = 0;x<2;x++)` dan `for (int y =0;y<2;y++)`.
4. Membuat fungsi matriks kedua dengan `for (int x = 0;x<2;x++)` dan `for (int y =0;y<2;y++)`.
5. Membuat rumus perkalian matriks dengan `for (int x = 0;x<2;x++)` dan `for (int y =0;y<2;y++)` maka `matrik3[x][y]=0` 
   lalu `for (int z =0;z<2;z++)` maka `temp=matrik1[x][z]*matrik2[z][y]` dan `matrik3[x][y]=matrik3[x][y]+temp`.
6. Membuat fungsi hasil perkalian dengan `for (int x = 0;x<2;x++)` dan `for (int y =0;y<2;y++)`.
7. Mencetak hasil **perkalian matriks** dengan **modus** dengan `matrik3[x][y]`.

**Code Program :**

```c++

#include <iostream>
#include <conio.h>
using namespace std;

int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

//input matrik pertama
void matrik_1(){

int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

cout <<"Program Menghitung Perkalian Dari Dua Buah Matrik"<<endl;
cout <<"_________________________________________________"<<endl<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"Masukan Nilai Matrik Pertama Baris Ke-"<<(x+1)<<" Kolom Ke-"<<(y+1)<<" : ";
cin>>matrik1[x][y];
}
}

cout<<endl;
//output matrik pertama
cout<<"Matrik Pertama :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik1[x][y]<<"   ";
}
cout<<endl;
}
}

void matrik_2(){
int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

cout<<endl;
//input matrik kedua
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"Masukan Nilai Matrik Kedua Baris Ke-"<<(x+1)<<" Kolom Ke-"<<(y+1)<<" : ";
cin>>matrik2[x][y];
}
}
cout<<endl;
//output matrik kedua
cout<<"Matrik Kedua :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik2[x][y]<<"   ";
}
cout<<endl;
}
}

void hasil(){
int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

//rumus perkalian matrik
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
matrik3[x][y]=0;
for (int z =0;z<2;z++){
temp=matrik1[x][z]*matrik2[z][y];
matrik3[x][y]=matrik3[x][y]+temp;
}
}
}

//output matrik hasil perkalian
cout<<endl;
cout<<"Hasil Perkalian Matrix Diatas :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik3[x][y]<<"   ";
}
cout<<endl;
}
}

main (){

matrik_1();
matrik_2();

hasil();
getch();
return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan3/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan3/SS.png)


## latihan4.cpp : Buatlah Algortima Dan Program Untuk Menghasilkan Transpose Suatu Matriks.

**Alur Program :**

1. Mendeklarasikan variabel `(int argc, char *argv[])` dan `int a[10][10],m,n,i,j` sebagai variable input.
2. Membaca input dari keyboard `for(i=0;i<m;i++)` dan `for(j=0;j<n;j++)`.
3. Membuat fungsi matriks `for(i=0;i<m;i++)` dan `for(j=0;j<n;j++)`.
4. Membuat fungsi Tranpose matriks dengan `for(i=0;i<m;i++)` dan `for(j=0;j<n;j++)`.
5. Mencetak hasil dari **Tranpose matriks** dengan `a[j][i]`.

**Code Program :**

```c++

#include <cstdlib>
 #include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
cout<<"Program Untuk Menghasilkan Tranpose Dari Sebuah Matriks"<<endl;
cout<<"_______________________________________________________"<<endl<<endl;
int a[10][10],m,n,i,j;
cout<<"Masukkan Jumlah Baris : ";
cin>>m;
cout<<"Masukkan Jumlah kolom : ";
cin>>n;


cout<<endl<<"Elemen Matriks : "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Masukkan Matriks "<<i+1<<"."<<j+1<<" : ";
cin>>a[i][j];
}
}
cout<<endl<<"Matriks : "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Transpose Matriks : "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[j][i]<<" ";
}
cout<<endl<<endl;
}

system("PAUSE");
return EXIT_SUCCESS;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan4/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum8/master/latihan467/SS.png)

**TERIMA KASIH**# praktikum8
