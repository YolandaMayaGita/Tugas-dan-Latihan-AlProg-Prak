#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabel
	char huruf;
	
	//input huruf
	cout<<"Masukkan huruf kecil : "; cin>>huruf;
	cout<<endl;
	
	//seleksi pembanding OR, salah satu kondisi bernilai benar
	if (huruf=='a'||huruf=='i'||huruf=='u'||huruf=='e'||huruf=='o') {
	   cout<<"Anda memasukkan huruf vokal";
	}
	else {
	   cout<<"Yang anda masukkan adalah huruf konsonan"<<endl;
	}
	    
return 0;
}
