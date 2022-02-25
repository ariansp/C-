#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct data
{
	char nama[100];
	int umur;
	char pilih;
};


main(){
	a:
	system ("cls");
	data inp;
	cout << " Masukkan Nama anda = ";
	gets(inp.nama);
  	cout << " Masukkan Umur anda = ";
  	cin >> inp.umur;

  	getchar();
  	cout << endl << endl;
  	cout << "Biodata anda" << endl;
  	cout << " Nama anda = " << inp.nama << endl;
    cout << " Umur anda = " << inp.umur << endl;

    getchar();
    cout << "Apakah ingin mengulang ?";
    cin >> inp.pilih;

    if (inp.pilih == 'Y' || inp.pilih == 'y'){
    	getchar();
 		goto a;
 	}
   	else 
   		cout << "Terimakasih";
}