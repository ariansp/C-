//Bahasa C++
#include <iostream>
#include <math.h>
using namespace std;

void urut(int z[]){
	for (int x=0;x<10;x++){
		cout << z[x] << " " ;
	}
}

void asc(int z[],int n = 10){ 
	int x;
	cout << "ASCENDING" << endl;
	for (int x=0;x<10;x++){ 
		cout << "Bagian pertama " << x+1 << ": " << endl;
		for (int y=x+1;y<10;y++){ 
			if (z[x]>z[y]){ 
				urut(z);
				int temp;
				temp=z[x]; 
				z[x]=z[y]; 
				z[y]=temp; 
				cout << " >> ";
				urut(z);
				cout << endl;
			}
		}
}
cout << endl;
}

void desc(int z[],int n = 10){ 
	int x; 
	cout << "DESCENDING" << endl;
	for (int x=0;x<10;x++){ 
		cout << "Bagian pertama " << x+1 << ": " << endl;
		for (int y=x+1;y<7;y++){ 
			if (z[x]<z[y]){
				urut(z);
				int temp;
				temp=z[x]; 
				z[x]=z[y]; 
				z[y]=temp; 
				cout << " >> ";
				urut(z);
				cout << endl;
			}
		}

}
cout << endl;
}

main(){
	int n = 10, x[n]={7, 3, 11, 20, 4, 2, 18, 21, 23, 5};
	cout << "Berikut adalah elemennya" << endl;
	cout << "7, 3, 11, 20, 4, 2, 18, 21, 23, 5" << endl << endl << endl;
	cout << "=========================================" << endl;
	cout << "Berikut adalah Exchange sort" << endl;
	asc(x,n);
	cout << endl;
	desc(x,n);


	

}