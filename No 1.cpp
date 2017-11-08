#include <iostream>

using namespace std;

int main (){
	int x,y,z;
	
	cout<<"menghitung selisih absoulute"<<endl;
	cout<<"masukan nilai x : ";
	cin>>x;
	cout<<"masukn nilai y :";
	cin>>y;
	
	if (x>y){
		z=x-y;
	}
	else if(y>x){
		z=y-x;
	}
	cout<<"hasil :"<<z;
}
