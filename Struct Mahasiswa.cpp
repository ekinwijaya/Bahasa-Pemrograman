#include <iostream>
#include <conio.h>
using namespace std;
struct mahasiswa
{
	string nim;
	char nama[20];
	int umur;
	float ipk;
}mhs;
void tampil()
{
	cout<<"-----Input-----\n\n";
	cout<<"NIM = "<<mhs.nim<<endl
		<<"Nama = "<<mhs.nama<<endl
		<<"Umur = "<<mhs.umur<<endl
		<<"Ipk = "<<mhs.ipk;
}
void input()
{
	cout<<"---Input---\n\n";
	cout<<"Masukan NIM"<<endl;
	cin>>mhs.nim;
	cout<<"Masukan nama"<<endl;
	cin>>mhs.nama;
	cout<<"Masukan umur"<<endl;
	cin>>mhs.umur;
	cout<<"Masukan IPK"<<endl;
	cin>>mhs.ipk;
}
int main()
{
	cout<<"Selamat Datang";
	input();
	
	tampil();
}
