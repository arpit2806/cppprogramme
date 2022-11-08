#include<iostream>
using namespace std;
int main()
{
	int i,fac,d;
	cout<<"Enter the number : ";
	cin>>d;
	for(i=1;i<=d;i++)
	{
		fac=fac*i;
		cout<<"the factorial of"<<i<<" is "<<fac<<endl;
	}
	return 0;
}
