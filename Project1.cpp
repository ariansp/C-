#include <iostream>
#include <sstream>
#include <time.h>
#include <unistd.h>
using namespace std;

void tampilan(){
	cout << "1. ATM \n";
	cout << "2. Sewa Hotel \n";
	cout << "3. Perulangan \n";
	cout << "4. Jam Pasir \n";
	cout << "5. Bioskop \n";
	cout << "6. Author \n";
	cout << "7. EXIT \n";
}

int atm(unsigned long long int saldo){
	int pilihan;
	unsigned long long int rekening,saldo1,dana;
	ulang:
	cout << "=========================\n";
	cout << "|\t   ATM   \t|\n";
	cout << "=========================\n";
	cout << " Saldo Anda : IDR " << saldo; 
	cout << "\n=========================\n";
	cout << "| Menu\t\t\t|\n";
	cout << "| 1. Transfer Dana\t|\n";
	cout << "| 2. Tambah Saldo \t|\n";
	cout << "| 3. Tarik Tunai \t|\n";
	cout << "| 4. Keluar \t\t|\n";
	cout << "=========================\n";
	cout << "Pilihan: ";
	cin >> pilihan;
	if (!cin){
		cin.clear();
    	cin.ignore(123,'\n');
		cout << "Ga ada pilihannya";
		getchar();
		system("cls");
		goto ulang;
	} else if (pilihan == 1){
	cout << "\n\n No. Rekening Tujuan (10 digit):";
	cin >> rekening;
	stringstream convert;
	convert << rekening;
	string rekening1 = convert.str();
	int no = rekening1.length();
		if (no != 10 || !cin){
		cout << "maaf, nomor rekening salah!";
		cin.clear();
		cin.ignore(123,'\n');
		getchar();
		system ("cls");
		goto ulang;
	} else
	cout << "Masukkan dana yang ingin ditransfer:";
	cin >> dana;
	if (dana < 0){
		cout << "Saldo anda kurang";
		getchar();
		getchar();
		system ("cls");
		goto ulang;
	} else if(dana > saldo){
		cout << "\n\n!!! Transfer Gagal !!!\n";
		cout << "Saldo anda hanya "<< saldo;
		getchar();
		getchar();
		system ("cls");
		goto ulang;
	}else 
	saldo -= dana;
	cout << "\n" << "!!! Transfer Berhasil !!!\n\n";
	cout << "Sisa Saldo Anda IDR "<<saldo;
	getchar();
	getchar();
	system ("cls");
	goto ulang;
	} else if (pilihan == 2){
		unsigned long long int setor;
		cout << "\nMasukkan jumlah setoran: ";
		cin >> setor;
		saldo += setor;
		cout << "\n!!! Tambah Saldo Berhasil !!!\n";
		cout << "\nSisa Saldo Anda "<<saldo;
		getchar();
		getchar();
		system ("cls");
		goto ulang;
	} else if (pilihan == 3){
		unsigned long long int tarik;
		cout << "\nMasukkan jumlah setoran: ";
		cin >> tarik;
		if (tarik > saldo){
			cout << "Saldo anda kurang";
			getchar();
			getchar();
			system ("cls");
			goto ulang;
		}
		saldo -= tarik;
		cout << "\n!!! Tarik Tunai Berhasil !!!\n";
		cout << "\nSisa Saldo Anda "<<saldo;
	} else if (pilihan == 4){
		return saldo;
	} else 
		cout << "\nGa ada pilihannya"; 
		getchar();
		getchar();
		system ("cls");
		goto ulang;
	return saldo;
}

int hotel(unsigned long long int saldo){
	string kelas1,nama,nama1;
	char kode,metode;
	int kelas,extra,extra1,lama,sewa;
	int pilih,pin;
	long int total,diskon;
	float metode1;
	ulang:
	cout << "=========================\n";
	cout << "|\tHOTEL HALAL\t|\n";
	cout << "=========================\n";
	cout << "Nama Penyewa \t\t:";
	getchar();
	getline (cin,nama);
	cout << "Kode Kamar [A/B/C] \t:";
	cin >> kode;
	kode =toupper(kode);
	if (kode == 'A'){
		nama1="Standard Room";
	} else if (kode =='B'){
		nama1="Deluxe Room";
	} else if (kode == 'C'){
		nama1="Suit Room";
	} else cout << "Hanya A - C";
	
	cout << "Kode Kelas [1/2] \t:";
	cin >> kelas;
	if (kelas == 1){
		kelas1="Single Bed";
	} else if (kelas == 2){
		kelas1="Twin Bed";
	} else cout << "Hanya 1 - 2";
	
	cout <<"Extra Bed \t\t:";
	cin >> extra;
	extra1 = 100000 * extra;
	
	cout << "Lama Menginap (hari)\t:";
	cin >> lama;
	
	cout << "Metode Pembayaran [K/T]\t:";
	cin >>metode;
	metode=toupper(metode);

	//Perhitungan
	if (kode == 'A' && kelas == 1){
		sewa =250000;
	} else if (kode =='A' && kelas == 2){
		sewa=300000;
	} else if (kode =='B' && kelas == 1){
		sewa=400000;
	} else if (kode =='B' && kelas == 2){
		sewa=500000;
	} else if (kode =='C' && kelas == 1){
		sewa=700000;
	} else if (kode =='C' && kelas == 2){
		sewa=850000;
	} else cout << "Error!";

	if (metode=='K'){
		metode1=0.05;
		diskon = (sewa + extra1)*metode1;
		total = (sewa+extra1)-diskon;
	} else if (metode =='T'){
		diskon = 0;
		total = (sewa+extra1)-diskon;
	}
	

	//OUTPUT
	cout << "\n\n !-!-!-!-!-!-!-!-!-!";
	cout << "\n\nNama Penyewa \t\t: " << nama<<endl;
	cout << "Nama kamar \t\t: " << nama1<<endl;
	cout << "Katergori \t\t: " << kelas1<<endl;
	cout << "Lama menginap \t\t: "<< lama <<" hari"<<endl;
	cout << "Biaya Sewa \t\t: " << sewa<<endl;
	cout << "Biaya Extra Bed \t: "<<extra1<<endl;
	cout << "Diskon \t\t\t: "<< diskon<<endl;
	cout << "Total biaya sewa \t: "<<total<<endl;
	getchar();
	ulang1:
	cout << "\nMenu:\n";
	cout << "-----------------------\n";
	cout << "1. Lanjutkan Pembayaran\n";
	cout << "2. Keluar\n";
	cout << "-----------------------\n";
	cin >> pilih;
	if (pilih == 1){
		cout << "Masukkan Pin rekening anda :";
		cin >> pin;
		if (pin == 1010){
			if (saldo < total){
			cout <<"Saldo tidak cukup\n";
			cout <<"Saldo anda hanya "<<saldo;
			cout <<"\nTekan Enter untuk keluar";
			getchar();
			getchar();
			return saldo;
			}else saldo -= total;
			cout << "Pembayaran Anda Berhasil!\n";
			getchar();
			return saldo;
		} else cout << "Pin anda salah!"; goto ulang1;
	}else if (pilih == 2){
		return saldo;
	} else goto ulang1;
	return saldo;
}

void karakter(){
	int awal,akhir,perubahan,genap,ganjil,karakter;
	string j;
	cout << "Masukan Batas Awal : ";
	cin >> awal;
	cout << "\nMasukkan Batas Akhir : ";
	cin >> akhir;
	cout << "\nMasukkan Perubahan : ";
	cin >> perubahan;
	cout << "\nMasukkan Karakter Genap : ";
	cin >> genap;
	cout << "\nMasukkan Karakter Ganjil : ";
	cin >> ganjil;
	cout << "=========== Hasil Eksekusi ===========\n";
	
	for (int i = awal ; i <=akhir; i+=perubahan){
		if (i % 2 == 0){
			j = " (genap) ";
			karakter = genap;
		} else if (i % 2 == 1){
			j = " (ganjil) ";
			karakter = ganjil;
		}
		cout << "Baris ke - " << i << j << "karakter "<<karakter<<endl;
		sleep(1.5);  
	}
}

void bioskop(){
	int slot[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int pilih,pesan;
	ulang:
	system("cls");
	cout << "=========================\n";
	cout << "=\tMENU BIOSKOP \t=\n";
	cout << "=========================\n";
	cout << "\n\nMenu : \n";
	cout << "1. Lihat Kursi\n";
	cout << "2. Pesan Kursi\n";
	cout << "3. Hapus Kursi\n";
	cout << "4. Kembali\n";
	cout << "Pilihan: ";
	cin >> pilih;
	if (pilih == 1){
		system("cls");
		cout << "=========================\n";
		cout << "=\tLihat Kursi \t=\n";
		cout << "=========================\n";
		for (int i=1;i<=25;i++){
			if (i % 5 == 0){
			cout <<"|"<< slot[i] << "\t";
			cout << "\n\n";
			} else
		cout <<"|"<< slot[i] << "\t";
		} cout << "\nKursi yang ditandai 0 sudah dipesan\n";
		  cout << "Tekan apapun untuk kembali";
		  getchar();
		  getchar();
		  system("cls");
		  goto ulang;
	} else if (pilih==2){
		system("cls");
		ulang1:
		cout << "=========================\n";
		cout << "=\tPesan Kursi \t=\n";
		cout << "=========================\n";
		for (int i=1;i<=25;i++){
			if (i % 5 == 0){
			cout <<"|"<< slot[i] << "\t";	
			cout << "\n\n";
			} else
		cout <<"|"<< slot[i] << "\t";
		} cout << "\nMau pesan kursi yang nomor berapa ? ";
		  cin >> pesan;
		   if (pesan >25){
		  	cout << "Maaf, pilihan anda salah!";
		  	getchar();
		  	getchar();
		  	system("cls");
		  	goto ulang;
		  } else
		  slot[pesan]=0;
		  getchar();
		  system("cls");
		  cout << "=========================\n";
		  cout << "=\tPesan Kursi \t=\n";
		  cout << "=========================\n";
		  for (int i=1;i<=25;i++){
			if (i % 5 == 0){
			cout <<"|"<< slot[i] << "\t";
			cout << "\n\n";
			} else
		cout <<"|"<< slot[i] << "\t";
		}
		  cout << "\nKursi anda berhasil dipesan!\n";
		  cout << "Tekan apapun untuk kembali ";
		  getchar();
		  goto ulang;
	} else if (pilih==3){
			system("cls");
		cout << "=========================\n";
		cout << "=\tHapus Kursi \t=\n";
		cout << "=========================\n";
		for (int i=1;i<=25;i++){
			if (i % 5 == 0){
			cout <<"|"<< slot[i] << "\t";	
			cout << "\n\n";
			} else
		cout <<"|"<< slot[i] << "\t";
		} cout << "\nMau hapus kursi yang nomor berapa ? ";
		  cin >> pesan;
		  if (pesan >25){
		  	cout << "Maaf, pilihan anda salah!";
		  	getchar();
		  	getchar();
		  	system("cls");
		  	goto ulang;
		  } else if (slot[pesan]==pesan){
		  	cout << "Maaf, pilihan anda salah!";
		  	getchar();
		  	getchar();
		  	system("cls");
		  	goto ulang;
		  } else
		  slot[pesan]=pesan;
		  getchar();
		  system("cls");
		  cout << "=========================\n";
		  cout << "=\tPesan Kursi \t=\n";
		 cout << "=========================\n";
		  for (int i=1;i<=25;i++){
			if (i % 5 == 0){
			cout <<"|"<< slot[i] << "\t";
			cout << "\n\n";
			} else
		cout <<"|"<< slot[i] << "\t";
		}
		  cout << "\nKursi anda berhasil dihapus!\n";
		  cout << "Tekan apapun untuk kembali ";
		  getchar();
		  goto ulang;
	} else if (pilih==4){
		return;
	} else cout << "Maaf pilihan tidak sesuai!";
	  getchar();
	  getchar();
	  system("cls");
	  goto ulang;
}

void jam(){
int jumlah,i,j;
cout << "Masukkan tinggi :";
cin >> jumlah;
int x=0;
if (jumlah % 2 == 1){
	jumlah -=1;
	}

for (int i = 1; i <= jumlah; i++){
	if (i == 1 || i==jumlah ){
		for (int j = 1; j <= jumlah+2; j++)
		{
			cout<<"*";
		} 
	} else { 
		cout << "*";
	if (i<=(jumlah/2)){
		for (int j = 1; j <= i-2; j++)
		{
			cout<<" ";
		}
	} else for (int j = jumlah-i-1; j >= 1; j--){
			cout<<" ";
		} cout <<"*";
		
		if(i<=jumlah/2){
			for (int j = 1; j <= jumlah-(i*2-2); j++){
			cout<<x;
			x=(x+1)%10;
			}
		} else for (int j = 1; j <= (i-(jumlah/2))*2; j++)
				{	
					cout<<x;
					x=(x+1)%10;
				}
				cout <<"*";
				if (i<=(jumlah/2)){
					for (int j = 1; j <= i-2; j++)
					{
						cout<<" ";
					}
				}else for (int j = jumlah-i-1; j >= 1; j--)
					{
						cout<<" ";
					}
					cout <<"*";
				}
					cout <<endl;
			}
			getchar();
		}

void biodata(){
	cout << "KELOMPOK ANGGUR\n";
	cout << "1. Nama (NIM)\n";
	cout << "2. Nama (NIM)\n";
	cout << "3. Nama (NIM)\n";
}
int main(){
	system("cls");
	int pilih;
	unsigned long long int saldo = 0;
	ulang1:

	cout << "===Mini Project===\n";
	tampilan();
	cout << "Pilihan : ";
	cin >> pilih;
	system ("cls");
	switch (pilih){
		case 1:
		if (saldo == 0){
			cout << "Maaf, saldo anda tidak ada\n";
			cout << "Masukkan saldo: ";
			cin >> saldo;
			}
			system("cls");
			saldo =atm(saldo);
			getchar();
			system("cls");
			goto ulang1;
		break;
		case 2:
		saldo =hotel(saldo);
		getchar();
		system("cls");
		goto ulang1;
		break;
		case 3:
		karakter();
		getchar();
		getchar();
		system("cls");
		goto ulang1;
		break;
		case 4:
		jam();
		getchar();
		system("cls");
		goto ulang1;
		break;
		case 5:
		bioskop();
		getchar();
		system("cls");
		goto ulang1;
		break;
		case 6:
		biodata();
		getchar();
		system("cls");
		goto ulang1;
		break;
		case 7:
		exit(0);
		break;
		default:
		cout << "Pilihan tidak sesuai!";
		getchar();
		getchar();
		system("cls");
		goto ulang1;
	}
} 
