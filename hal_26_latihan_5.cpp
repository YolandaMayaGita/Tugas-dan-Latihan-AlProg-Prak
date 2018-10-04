#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

main()
{
	int tot_beli,potongan,jum_bayar;
	
	jum_bayar=0; cout<<"Total Pembelian Rp."; cin>>tot_beli;
	cout<<endl<<endl;
	
	if (tot_beli >=  50000)
	    potongan = 0.2*tot_beli;
	else
	potongan = 0.05* tot_beli; 
	
	cout<<"Besarnya potongan Rp."<<potongan<<endl; 
	jum_bayar = tot_beli - potongan;
	cout<<endl<<endl;
	
	cout<<"Jumlah yang harus dibayarkan : Rp."<<jum_bayar<<endl;
	getch();
return 0;
}
