#include<iostream>
using namespace std;
class hocsinh
{
	private:
		string hoten;
		float ki1, ki2;
	public:
		void khoitao(string ten,float diem1,float diem2)
		{
			hoten = ten;
			ki1 = diem1;
			ki2 = diem2;
		}
		void nhap()
		{
			cout<<"Nhap ten hoc sinh: ";
			getline(cin, hoten);
			cout<<"Nhap diem ki 1: ";
			cin>>ki1;
			cout<<"Nhap diem ki 2: ";
			cin>>ki2;
			cin.ignore();
		}
		bool kiemtra()
		{
			return (ki1 + ki2*2)/3 >= 5;
		}
		void xuat()
		{
			cout<<"Ten hoc sinh: "<<hoten<<endl;
			cout<<"Diem ki 1: "<<ki1<<endl;
			cout<<"Diem ki 2: "<<ki2<<endl;
			cout<<endl;
		}
};
int main()
{
	hocsinh a,b,c;
	cout<<"Nhap thong tin hoc sinh 1:\n";
	a.nhap();
	cout<<"Nhap thong tin hoc sinh 2:\n";
	b.nhap();
	cout<<"Nhap thong tin hoc sinh 3:\n";
	c.nhap();
	cout<<"\nDanh sach hoc sinh:\n";
	a.xuat();
	b.xuat();
	c.xuat();
	cout<<"Hoc sinh co diem trung binh >=5:\n";
	if(a.kiemtra()) a.xuat();
	if(b.kiemtra()) b.xuat();
	if(c.kiemtra()) c.xuat();
	return 0;
}
