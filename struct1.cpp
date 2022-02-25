#include <iostream>
using namespace std;
struct biodata
{
	string nama;
	int umur;
};

int main(){
	biodata biodata1;
	biodata biodata2;

  biodata1.nama = "Ucup markucup";
  biodata1.umur = 18;

  biodata2.nama = "Tini Martini";
  biodata2.umur = 19;
  cout << "Biodata anda" << endl;
  cout << " Nama anda = " << biodata1.nama << endl;
  cout << " Umur anda = " << biodata1.umur << endl;
  cout << endl << endl;
  cout << " Nama anda = " << biodata2.nama << endl;
  cout << " Umur anda = " << biodata2.umur << endl;
}