#include <iostream>
using namespace std;

void CetakArray(int x[]){
	for(int i=0;i<7;i++){
		cout<<x[i]<<" ";
	}
}

void Insertion(int arr[], int n){
	int i, key, j;  
    for (i = 1; i < n; i++) // 
    {  
        key = arr[i];  // 
        j = i - 1;  // 
  
        while (j >= 0 && arr[j] > key) // 
        {  
            cout << "\nKondisi While terpenuhi\n";
            cout << "Awal = "; CetakArray(arr);
        	int temp = arr[j]; // 
            arr[j] = arr[j + 1] ; // 
            arr[j + 1] = temp;    // 
            j = j - 1;  // 
            cout << " >> "; CetakArray(arr);
            cout << endl;
        }  
        arr[j + 1] = key;  // 
        cout << "\n\nWhile " << j << " >= 0 && arr [j] > key atau " << arr[j] << " > " << key << " Tidak memenuhi kondisi While \n";
        cout << "Melakukan Increment nilai I" << endl;
    }  
}

int main(){
	int n=7;
	int x[n] = {2,8,5,3,9,4,1};
	CetakArray(x);
	cout<<endl;
	Insertion(x,n);
	CetakArray(x);
	cout<<endl;
}

