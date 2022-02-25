#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int input;
    //hentikan input dengan ctrl+z atau tekan huruf
    while (cin>>input) // inputan nilai
    {   
        s.push(input); // Untuk mendorong nilai ke bawah 
        
    }
    do
    {
        cout<<s.top()<<" "; //menampilkan nilai paling atas
        s.pop();//menaikkan nilai yang dibawah ke atas
    }
    while (s.size() != 0); //apabila semua nilai sudah ditampilkan maka program berhenti
    cout<<endl;
    return 0;
}