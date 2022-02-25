#include <iostream>
using namespace std;

void Tukar(int &a, int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
void PrintArray(int x[]){
	for(int i=0;i<7;i++){
		cout<<x[i]<<" ";
	}
}

void BubbleSort(int x[]){
	for(int i=0;i<7;i++){
		cout<<"Putaran ke"<<i+1<<":"<<endl;
		int p = i;
		cout<<"Indeks:"<<p+1<<endl;
		for(int j=i+1;j<7;j++){
			if(x[p]<x[j]){
				cout<<"Indeks:"<<p+1<<" => ";
				p = j;
				cout<<j+1<<endl;
			} 
		}
		if(p!=i){
			PrintArray(x);
			cout<<" => ";
			Tukar(x[i],x[p]);
			PrintArray(x);
			cout<<endl;
		}
		cout<<endl;
	}
}
int main(){
	int x[7] = {48,56,72,34,56,22,80};
	PrintArray(x);
	cout<<endl;
	BubbleSort(x);
	PrintArray(x);
	cout<<endl;
}

