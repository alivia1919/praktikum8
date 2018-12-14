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
