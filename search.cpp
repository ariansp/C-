#include <iostream>
using namespace std;

int main(){
	int data[8] = {9,14,19,3,11,-1,20,3};
	int cari;
	int flag=0;
	cout << "Masukkan angka yang ingin dicari = ";
	cin >> cari;//3

	for (int i = 0; i < 8 ; ++i)
	{
		if (data[i]==cari) { //data[0]=
			cout << "Data ditemukan dalam data";
			break;
		} else cout << "";
	}
}

