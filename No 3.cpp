#include <iostream>

using namespace std;

int main(){
	int gp,jk;
	int lembur,gt,pajak,gk;
	
	cout<<"Penghitungan Gaji Karyawan"<<endl;
	cout<<"Masukkan Gaji Pokok Anda : Rp. ";
	cin>>gp;
	cout<<"Masukkan Jam Kerja Anda : Rp. ";
	cin>>jk;
	lembur=jk-40;
	gt=(lembur*1.5+40)*gp;
	pajak=gt*0.15;
	gk=gt-pajak;
	
	cout<<endl;
	
	cout<<"Gaji Pokok 	: Rp."<<gp<<endl;
	cout<<"Jam Kerja 	: Rp."<<jk<<endl;
	cout<<"Lembur		: Rp."<<lembur<<endl;
	cout<<"Gaji Sebelum Dipotong Pajak 	: Rp."<<gt<<endl;
	cout<<"Total Gaji Anda Adalah		: "<<gk<<endl;
}
