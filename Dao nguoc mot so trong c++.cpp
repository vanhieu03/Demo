#include<iostream>
using namespace std;
int main()
{
	int x,k=0;
	cout<<"Nhap so can dao nguoc : ";
	cin>>x;
	do{
		k=k*10+x%10;
		x=x/10;
	}
	while(x!=0);
	cout<<"So dao nguoc la: "<<k<<endl;
    return 0;
 }