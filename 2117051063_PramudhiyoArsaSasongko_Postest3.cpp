#include <iostream>
#include <conio.h>
using namespace std;

int main (){/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	
	//float
	float BTC;
	
	//input
	cout<<"Klasifikasi Tingkatan Holder"<<endl;
	cout<<"          				   "<<endl;
	cout<<"Masukkan Jumlah Bitcoin Yang Anda Miliki : "; cin>>BTC;
	
	//output
	cout<<"          				   "<<endl;
	cout<<"inilah Tipe Rangking Anda Sekarang : ";
	if(BTC<1){
		cout<<"Shrimp"<<endl;
	}else if(1<=BTC&&BTC<10){
		cout<<"Crab"<<endl;
	}else if(10<=BTC&&BTC<50){
		cout<<"Octopus"<<endl;
	}else if(50<=BTC&&BTC<100){
		cout<<"Fish"<<endl;
	}else if(100<=BTC&&BTC<500){
		cout<<"Dolphin"<<endl;
	}else if(500<=BTC&&BTC<1000){
		cout<<"Shark"<<endl;
	}else if(1000<=BTC&&BTC<5000){
		cout<<"Whale"<<endl;
	}else{
		cout<<"Humpback"<<endl;
	}
	cout<<"          				                 "<<endl;
	cout<<"Ayo Terus Tingkatkan Saldo Bitcoin Anda!!!"<<endl;
	cout<<"Dan Nikmati Keuntungan Anda Bertambah Di Setiap Klasifikasinya"<<endl;
	
	return 0;
	
	}

