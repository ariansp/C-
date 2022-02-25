//Bahasa C++
#include <iostream>
#include <math.h>
using namespace std;

void urut(int z[]){
	for (int x=0;x<7;x++){
		cout << z[x] << " " ;
	}
}


void asc(int z[],int n){  
	cout << "ASCENDING" << endl;
	for (int x=0;x<n;x++){ //x=5
		cout << "Bagian ke-" << x+1 << ": " << endl;
		for (int y=0;y<n-x-1;y++){ //1,2,3,4,5,8,9 / y <  1
			if (z[y]>z[y+1]){// z[0] = 2 > z[1] = 1
				urut(z);
				int temp; // temporary 
				temp=z[y]; // temp = 2
				z[y]=z[y+1]; // z[0] =  1 
				z[y+1]=temp; // z [1] = 2
				cout << " >> ";
				urut(z);
				cout << endl;
			}
		}

}
cout << endl;
}

main(){
	int n = 7, x[n]={2,8,5,3,9,4,1};
	cout << "Berikut adalah elemennya" << endl;
	cout << "2,8,5,3,9,4,1" << endl << endl << endl;
	cout << "=========================================" << endl;
	cout << "Berikut adalah Bubble Sort" << endl;
	cout << endl;
	asc(x,n);


	

}