#include<iostream>
#include<string>
using namespace std;
class myfile
{
	private:
		string name;
		int size;
		string attrirb;
	public:
		myfile(string ten="", int kichthuoc=0, string mota="")
		{
			name=ten;
			size=kichthuoc;
			attrirb=mota;
		}	
		~myfile()
		{
			cout<<"\n Da huy bo doi tuong";	
		}	
		void nhap()
		{
			cout<<"Nhap ten tep: ";
			cin.ignore();
			getline(cin, name);
			cout<<"Nhap kich thuoc: ";cin>>size;
			cout<<"Nhap mo ta: ";
			cin.ignore();
			getline(cin,attrirb);
		}
		void xuat()
		{
			cout<<"\n--- Thong tin tep ---";
			cout<<"\nTen tep: " << name;
			cout<<"\nKich thuoc: " << size << " byte";
			cout<<"\nMo ta thuoc tinh: " << attrirb;
			cout<<"\n---------------------";
		}
};
int main()
{
	myfile f;
	f.nhap();
	f.xuat();
	return 0;
}

