#include <iostream>

using namespace std;

int main(int argc,char** argv){
	int pj,lb,l,pil,alas,tgg;
	
	cout<<"1. persegi panjng\n";
	cout<<"2. segitiga\n";
	cout<<"masukan pilihan : ";
	cin>>pil;
	
	switch(pil){
		case 1:
		cout<<"Masukkan Panjang =";
		cin>>pj;
		cout<<"Masukkan Lebar = ";
		cin>>lb;
		l=pj*lb;
		cout<<"Luas Persegi Panjang = "<<l<<"\n";
		system ("Pause");
		break;
		case 2:
		cout<<"Masukkan Alas Segitiga =";
		cin>>alas;
		cout<<"Masukkan Tinggi Segitiga =";
		cin>>tgg;
		l=0.5*alas*tgg;
		cout<<"Luas Segitiga Adalah : "<<l<<"\n";
		system ("Pause");
			}
	
}
