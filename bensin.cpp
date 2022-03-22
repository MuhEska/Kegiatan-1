#include <iostream>
#include <string>
using namespace std;
int main(){
	int jml,pilihan,liter;
	string nama, nama_bbm;
	int pertalite = 7000;
	int pertamax = 10000;
	cout<<"Selamat Datang"<<endl;
	cout<<"nama pelanggan = "; cin>>nama;
	cout<<"Pilihan"<<endl;
	cout<<"1. Pertalite"<<endl;
	cout<<"2. Pertamax"<<endl;
	cout<<"Masukan Pilihan = "; cin>>pilihan;
	if(pilihan == 1 ){
		cout<<"Nama BBM = "; cin>>nama_bbm;
		cout<<"Berapa liter = ";
		cin>>liter;
		jml = pertalite*liter;
		
	}else if(pilihan == 2){
		cout<<"Nama BBM = "; cin>>nama_bbm;
		cout<<"berapa liter = "<<endl;
		cin>>liter;
		jml = pertamax*liter;
	}

	cout<<"========================================="<<endl;
	cout<<" SPBU Indah"<<endl;
	cout<<"========================================="<<endl;
	cout<<" STRUK "<<endl;
	cout<<nama_bbm<<endl;
	cout<<" total liter\t= "<<liter<<" Liter"<<endl;
	cout<<" Nama\t\t= "<<nama<<endl;
	cout<<" Total harga\t= "<<jml<<endl;
	cout<<"=========================================="<<endl;
	
	return 0;

}
