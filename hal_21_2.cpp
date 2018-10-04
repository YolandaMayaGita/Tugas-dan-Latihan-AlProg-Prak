#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int masukjam,masukmenit,masukdetik;
	int keluarjam,keluarmenit,keluardetik;
	int selisihjam,selisihmenit,selisihdetik; 
	//deklarasi variabel

	//input data jam masuk
	cout<<"Masuk "<<endl;
	cout<<" Jam : "; cin>>masukjam;
	cout<<" Menit : "; cin>>masukmenit;
	cout<<" Detik : "; cin>>masukdetik;
	
	//jarak baris
	cout<<endl<<endl;
	
	//input data jam keluar
	cout<<"Keluar "<<endl;
	cout<<" Jam : "; cin>>keluarjam;
	cout<<" Menit : "; cin>>keluarmenit;
	cout<<" Detik : "; cin>>keluardetik;
	
	//menghitung selisih detik
	if ((keluardetik - masukdetik)<0){
		selisihdetik = (60 + keluardetik)-masukdetik;
		keluarmenit;
		}
		else {
			selisihdetik= keluardetik - masukdetik;
		}		
	//menghitung selisih menit
	if ((keluarmenit - masukmenit)<0) {
		selisihmenit = (60 + keluarmenit) - masukmenit;
		keluarjam;
	}
	else {
		selisihmenit = keluarmenit - masukmenit;
	}	
	//menghitung selisih jam
	selisihjam = keluarjam - masukjam;	
	//jarak antar baris
	cout<<endl<<endl;
	
	//menampilkan data jam keluar
	cout<<"Selisih Waktu"<<endl;
	cout<<""<<selisihjam<<":"<<selisihmenit<<":"<<selisihdetik<<endl;
	
	getch ()
	;return 0;
}
	

