#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	//deklarasi variabel
	int nilai;
	
	//input nilai
	cout<<"Masukkan nilai : "; cin>>nilai;
	cout<<endl;
	if(nilai>50)
		cout<<"Selamat, Anda Lulus";
	else cout<<"Maaf, Anda Gagal...";
return 0;	
}
