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
