#include<iostream>
#include<string>
using namespace std;
class mathang
{
	private:
		string name;
		int quantity;
		float cost;
	public:
		mathang(string ten="", int soluong=0, float gia=0)
		{
			name=ten;
			quantity=soluong;
			cost=gia;
		}		
		void nhap()
		{
			cout<<"Nhap ten mat hang: ";getline(cin,name);
			cout<<"Nhap so luong: ";cin>>quantity;
			cout<<"Nhap don gia: ";cin>>cost;
			cin.ignore();
		}
		void xuat()
		{
			cout<<"\n--- Thong tin mat hang ---\n";
			cout<<"Ten mat hang: "<<name<<"\n";
			cout<<"So luong: "<<quantity<<"\n";
			cout<<"Don gia: "<<cost<<"\n";
		}
};
int main()
{
	mathang A;
	A.nhap();
	A.xuat();
	return 0;
}


