#include<iostream>
#include<conio.h>
#include<fstream>
#include <string>
using namespace std;
int main()
{	
int ans;
std::string isi;
std::string isi2;
string nama;

cout<<"Data Mahasiswa"<<endl;
cout<<"[1] Buat Data"<<endl;
cout<<"[2] Input Data "<<endl;
cout<<"[3] Tambah Data"<<endl; 
cout<<"[4] Baca Data"<<endl; 
cout<<"[5] Gabung Data"<<endl; 
cout<<"[6] Keluar"<<endl;
cout<<"Masukan Kode Yang Anda Pilih"<<endl;
cin>>ans;

if(ans==1)
{
ofstream file_;
file_.open("Data.txt");
file_<<"Input Files here";
file_.close();
file_.open("Data2.txt");
file_<<"Input Files here";
file_.close();
std::cin.get();
return main();
}

if(ans==2)
{
cout<<"Masukan Data Untuk Data 1"<<endl;
cin>>isi;
cout<<"Masukan Data Untuk Data 2"<<endl;
cin>>isi2;

ofstream file_;
file_.open("Data.txt");
file_<<isi;
file_.close();
file_.open("Data2.txt");
file_<<isi2;
file_.close();
std::cin.get();
return main();
}

if(ans==3)
{
cout<<"Masukan Data Baru Untuk Data 1"<<endl;
cin>>isi;
cout<<"Masukan Data Baru Untuk Data 2"<<endl;
cin>>isi2;
ofstream file_;
file_.open("Data.txt");
file_<<isi;
file_.close();
file_.open("Data2.txt");
file_<<isi2;
file_.close();
std::cin.get();
return main();
}

if(ans==4)
{
cout << ifstream("Data.txt", ios::in | ios::binary).rdbuf()<<endl;
cout << ifstream("Data2.txt", ios::in | ios::binary).rdbuf()<<endl;
return main();
}
if(ans==5)
{
{
std::ifstream file1( "Data.txt" );
std::ifstream file2( "Data2.txt" );
std::ofstream combined_file( "Data1-2.txt" );
combined_file << file1.rdbuf() << file2.rdbuf();
}
{
cout<<"Sekarang Data Menjadi : "<<endl;
cout << ifstream("Data1-2.txt", ios::in | ios::binary).rdbuf()<<endl;
return main();
}
}
if(ans==6)
{
exit(0);
}
getch();



}
