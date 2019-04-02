#include <iostream.h>
#include <conio.h>

main(){
int a,b,plus,min,kali,bagi,mod;
cout<<"contoh penggunaan operator aritmatik\n";
cout<<"masukkan angka pertama (a) = ";cin>>a;
cout<<"masukkan angka kedua (b) = ";cin>>b;
plus=a+b;
min=a-b;
kali=a*b;
bagi=a/b;
mod=a%b;
cout<<"\njumlah = "<<plus;
cout<<"\nkurang = "<<min;
cout<<"\nkali = "<<kali;
cout<<"\nbagi ="<<bagi;
cout<<"\nmodulo = "<<mod;
getch() ; }