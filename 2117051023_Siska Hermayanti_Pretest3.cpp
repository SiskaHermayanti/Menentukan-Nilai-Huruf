#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int nilai;
	
	cout<<"########===MASUKKAN NILAI MATA KULIAH DDP ANDA===########"<<endl;
	cin>> nilai;
	
	if(nilai >=76){
		cout<<"A"<<endl;
	}else if(nilai >=71 && nilai <76){
		cout<<"B+"<<endl;
	}else if(nilai >=66 && nilai <71){
		cout<<"B"<<endl;
	}else if(nilai >=61 && nilai <66){
		cout<<"C"<<endl;
	}else if(nilai >=56 && nilai <61){
		cout<<"D"<<endl;
	}else if(nilai >=50 && nilai <56){
		cout<<"E"<<endl;
	}else if(nilai <50){
		cout<<"F"<<endl;
	}
	
	return 0;	
}
