#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int input;
    //hentikan input dengan ctrl+z atau tekan huruf
    while (cin>>input)// inputan nilai
    {
        q.push(input);// Untuk mendorong nilai kekenan
    }
    do
    {
        cout<<q.front()<<" ";//menampilkan nilai paling depan
        q.pop();//menaikkan nilai yang dibawah kedepan
    } while (q.size() != 0);//apabila semua nilai sudah ditampilkan maka program berhenti
    cout<<endl;
    return 0;
}