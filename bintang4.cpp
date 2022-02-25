#include <conio.h>
using namespace std;
main()
{

int n,i, j, k;
cin >> n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";
	}
		for(j=n;j>=i;j--)
		{
		cout<<"*";
			}
				cout<<"\n";
	}
	for(i=n-1;i>=1;i--)
		{
		for(j=n;j>i;j--)
		{
			cout<<" ";
	}
			for(j=1;j<=i;j++)
		{
		cout<<"*";
}
cout<<"\n";
}
getch();

}