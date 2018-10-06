#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variavel
	int angka;
	
	//input angka
	cout<<"Masukkan Angka : "; cin>>angka;
	cout<<endl;
	
	//seleksi perbandingan AND, kedua kondisi harus bernilai benar
	if((angka>0) && (angka<10)) {
	   cout<<"Anda memasukkan angka antara 1 sampai 9 ";
	   }
	else {
		cout<<"Yang anda masukkan bukan dari angka 1 sampai 9";
	}
return 0;
}
