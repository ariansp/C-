#include <iostream>
using namespace std;
struct biodata // data yang menyimpan banyak data
{
	char nama[100];
	int umur;
};


int main(){
	biodata biodata1;
	  cout << " Masukkan Nama anda = ";
	  gets(biodata1.nama); //getline // Jas jus
  	cout << " Masukkan Umur anda = ";
  	cin >> biodata1.umur;
    cout <<endl<< "Enter untuk menampilkan data";
  	getchar();
    getchar();
    
    system ("cls");
  	cout << "Biodata anda" << endl;
  	cout << " Nama anda = " << biodata1.nama << endl;
    cout << " Umur anda = " << biodata1.umur << endl;
}