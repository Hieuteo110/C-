#include<iostream>
using namespace std;
void doigiatri(int &a, int &b)
{
	int gt=a;
	a=b;
	b=gt;

}
int main()
{
	int a,b;
	cout<<"Nhap gia tri a: ";cin>>a;
	cout<<"Nhap gia tri b: ";cin>>b;
	doigiatri(a,b);
	cout<<"\nSau khi doi gia tri:\n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
}

