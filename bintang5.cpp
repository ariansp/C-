#include <iostream>
using namespace std;
main (){
	int n,i,j,k;
	cin >> n;
	for (i=1;i<=n;i++){
		for (j=n-1;j>=i;j--){
			cout << " ";
		}
		for (j=1;j<=i;j++){
			cout << "*";
		}
	
	cout << endl;
	}
	for (i=n-1;i>=1;i--){
		for (j=i;j<n;j++){
			cout << " ";
		}
		for (j=1;j<=i;j++){
			cout << "*";
		}
		cout<<endl;
	}
	
}	