#include <iostream>
#include <math.h>
using namespace std;

main (){
	int a, z, n, i, j, Det;
	char b;
	float d;
	int MatA [10][10], MatB [10][10], Has [10][10];
	int X[10][10];
	system("cls");
	cout << "Selamat Datang !\n";
	cout << "1. Fitri Aulia F. Nst   191401034\n";
	cout << "2. Arian Syah Putra     191401076\n";
	cout << "3. Kevin Sinaga         191401109\n";
	cout << "4. Shafira Alvina       191401136\n\n";
	cout<<"Enter untuk perhitungan matriks! ";
	getchar();
	system("cls");
ulang:
system ("cls");
	cout << " Program Matriks (n x n) \n";
	cout << " Masukkan mau Matriks berapa x berapa (input satu angka saja) ";
	cin >> n;
	cout << " Ingin perhitungan matriks apa ? \n";
	cout << " 1. Perkalian Matriks \n";
	cout << " 2. Penambahan Matriks \n";
	cout << " 3. Pengurangan Matriks \n";
	cout << " 4. Determinan Matriks \n";
	cout << " 5. Invers Matriks \n";
	cout << " 6. Kofaktor Matriks \n";
	cout << " 7. Minor Matriks \n";
	cout << " 8. Adjoin Matriks \n";
	cout << " Ingin melakukan Perhitungan yang mana ? \n";
	cin >> a;
	switch (a){
	case 1:
		cout <<" Program Perkalian Matriks\n";
		goto a1;
		break;
	case 2:
		cout <<" Program Penambahan Matriks\n";
		goto a2;
		break;
	case 3:
		cout <<" Program Pengurangan Matriks\n";
		goto a3;
		break;
	case 4:
		cout <<" Program Determinan Matriks\n";
		goto a4;
		break;
	case 5:
		cout <<" Program Invers Matriks\n";
		goto a5;
		break;
	case 6:
		cout <<" Program Kofaktor Matriks\n";
		goto a6;
		break;	
	case 7:
		cout <<" Program Minor Matriks\n";
		goto a7;
		break;	
	case 8:
		cout <<" Program Adjoin Matriks\n";
		goto a8;
		break;					
	default:
		cout << "Error!";
		goto ulang;

	

a1:
cout << "Matriks A\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

	cout << "Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatB [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks A = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}


	cout << "Matriks B = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatB[i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Perkalian Matriks A dan Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			Has[i][j]=0;
			for(int k=0;k<n;k++){
				z=MatA[i][k]*MatB[k][j];
				Has[i][j]+=z;
		}
		}
		}

		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cout << Has[i][j] << "\t";
			}
		cout<<endl;
		}
goto ask;

	
a2:
cout << "Matriks A\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

	cout << "Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatB [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks A = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}


	cout << "Matriks B = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatB[i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Penjumlahan Matriks A dan Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
				Has[i][j]= MatA[i][j] + MatB[i][j];
		cout << Has[i][j] << "\t";
	}
	cout<<endl;
	}	
	cout<<endl;
	goto ask;

	
a3:
cout << "Matriks A\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

	cout << "Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatB [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks A = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}


	cout << "Matriks B = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatB[i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Pengurangan Matriks A dan Matriks B\n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
				Has[i][j]= MatA[i][j] - MatB[i][j];
		cout << Has[i][j] << "\t";
	}
	cout<<endl;
	}
	cout<<endl;
	goto ask;
	
}


a4:
if((n!=2) && (n!=3)) {
	cout << "Gagal! Hanya dapat penghitungan Ordo 2 x 2 dan 3 x 3 ";
	cout<<endl;
	goto ask;
	}
cout<<endl;
cout << "Matriks \n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks  = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}

if (n==2) {
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Determinan Matriks Ordo 2 x 2 \n";
	Det= (MatA[0][0]*MatA[1][1])-(MatA[0][1]*MatA[1][0]);
	cout<<endl;
	
	cout << Det;
	cout<<endl;
	goto ask;
	}
else if (n==3) {
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Determinan Matriks ordo 3 x 3 \n";
	Det= MatA[0][0]*MatA[1][1]*MatA[2][2]+MatA[0][1]*MatA[1][2]*MatA[2][0]+MatA[0][2]*MatA[1][0]*MatA[2][1]-MatA[2][0]*MatA[1][1]*MatA[0][2]-MatA[2][1]*MatA[1][2]*MatA[0][0]-MatA[2][2]*MatA[1][0]*MatA[0][1];
	cout<<endl;

	cout << Det;
	cout<<endl;
	goto ask;
	}

a5:
if(n!=2) {
	cout << "Gagal! Hanya dapat penghitungan Ordo 2 x 2 ";
	cout<<endl;
	goto ask;
	}

cout << "Matriks \n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks  = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}
if (n==2) {
cout << endl;
cout << "=====================================";
cout << endl;
	cout << "Invers Matriks Ordo 2 x 2 \n";
	Det= (MatA[0][0]*MatA[1][1])-(MatA[0][1]*MatA[1][0]);
	d=1.0/Det;
	cout << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << d*MatA[i][j] << "\t";
		}
		cout<<endl;
	}
	goto ask;
	
	}


a6:
if(n!=2) {
	cout << "Gagal! Hanya dapat penghitungan Ordo 2 x 2 ";
	cout<<endl;
	goto ask;
	}

cout << "Matriks \n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks  = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}
if (n==2) {
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Kofaktor Matriks Ordo 2 x 2 \n";	
	z=MatA[0][0];
	MatA[0][0]= MatA[1][1];
	MatA [1][1]=z;
	MatA[1][0]=-MatA[1][0];
	MatA[0][1]=-MatA[0][1];
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << " ";
		}
		cout<<endl;
	}
	cout<<endl;
	goto ask;
	}


a7:
if(n!=2) {
	cout << "Gagal! Hanya dapat penghitungan Ordo 2 x 2 ";
	cout<<endl;
	goto ask;
	}

cout << "Matriks \n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks  = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}
if (n==2) {
cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Minor Matriks Ordo 2 x 2 \n";
	z=MatA[0][0];
	MatA[0][0]= MatA[1][1];
	MatA [1][1]=z;
	z=MatA[1][0];
	MatA[1][0]=MatA[0][1];
	MatA[0][1]=z;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << " ";
		}
		cout<<endl;
	}
	cout<<endl;
	if (n==3) {
cout << endl;
cout << "=====================================";
cout << endl;



a8:
if(n!=2) {
	cout << "Gagal! Hanya dapat penghitungan Ordo 2 x 2 ";
	cout<<endl;
	goto ask;
	}

cout << "Matriks \n";
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << " Input elemen baris ke " << i+1 << " kolom ke " << j +1 << " : ";
			cin >> MatA [i][j];
		}
	}

cout << endl;
cout << "=====================================";
cout << endl;

	cout << "Matriks  = " << endl;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << "\t";
		}
		cout << endl;
	}
if (n==2) {
cout << endl;
cout << "=====================================";
cout << endl;
	cout << "Adjoin Matriks Ordo 2 x 2 \n";
	z=MatA[0][0];
	MatA[0][0]= MatA[1][1];
	MatA [1][1]=z;
	z=MatA[1][0];
	MatA[1][0]=-MatA[0][1];
	MatA[0][1]=-z;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout << MatA[i][j] << " ";
		}
		cout<<endl;
	}
	goto ask;
	}
	
ask:
cout << "Ingin ulang Penghitungan ? Y/N = ";
		cin >> b;
		if (b=='y' || b == 'Y')
			goto ulang;
		else goto end;
end: 
cout << endl;
cout << "Terimakasih !";
}
}
}
