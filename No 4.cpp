#include <iostream>

using namespace std;

int main (){
	int x;
	cout<<"Masukkan Nilai : ";
	cin>>x;
	
	if (x>0){
		cout<<"Nilai Positif";
	}
	else if (x<0){
		cout<<"Nilai Negatif";
	}
	else {
		cout<<"Nilai Nol";
	}
}
