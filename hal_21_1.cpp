#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabel
	double yard, kaki, inchi, meter;
	cout<<"Masukkan Satuan Meter : "; cin>>meter;
	
	//menghitung konversi
	yard = meter/0.9144; cout<<endl;
	kaki = meter/0.3048; cout<<endl;
	inchi = meter/0.0254; cout<<endl;
	
	//menampilkan hasilnya
	cout<<meter<<" Meter setara dengan "<<yard<<" Yard, "<<kaki<<" Kaki, "<<inchi<<" Inchi.";
	
	return 0;
}

