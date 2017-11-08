#include <iostream>

using namespace std;

int main(){
	double brt, tg;
	
	cout<<"Perhitungan Berat Badan Ideal"<<endl;
	cout<<"Masukkan Berat Badan Anda : ";
	cin>>brt;
	cout<<"Masukkan Tinggi Anda : ";
	cin>>tg;
	
	cout<<"Hasil Perhitungan Anda"<<endl;
	cout<<"Berat Badan Anda : "<<brt<<endl;
	cout<<"Tinggi Badan Anda : "<<tg<<endl;
	
	if(brt < tg/2.5){
		cout<<"Anda Underweight";
	}
	else if (tg/2.3 < brt){
		cout<<"Anda Overweight";
	}
	else if (tg/2.5 <= brt <= tg/2.3){
		cout<<"Anda Normal";
	}
}



