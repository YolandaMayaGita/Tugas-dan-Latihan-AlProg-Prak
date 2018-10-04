#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabel
	int tinggi, sisa, berat;
	
	//inputkan tinggi badan
	cout<<"Masukkan Tinggi Badan : "; cin>>tinggi;
	cout<<endl;
	
	//hitung berat badan ideal
	sisa = (tinggi-100)*10/100; //menghitung 10% sisa
	berat = tinggi-100-sisa; //menghitung berat badan ideal
	
	//menampilkan berat badan ideal
	cout<<"Berat Badan Ideal : "<<berat<<endl;
	
	return 0;
}
