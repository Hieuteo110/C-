 #include<iostream>
 #include<string.h>
 using namespace std;
 class myaddress
 {
 	protected:
		string tinh,huyen;
	public:
		myaddress(string tinh1="",string huyen1="")
		{
			tinh=tinh1;
			huyen=huyen1;
			}	
		~myaddress(){}
		void nhap()
		{
			cin.ignore();
			cout<<"\nNhap thong tin tinh: ";getline(cin,tinh);
			cout<<"\nNhap thong tin huyen: ";getline(cin,huyen);
		}
		void xuat()
		{
			cout<<"\nTen tinh: "<<tinh;
			cout<<"\nTen huyen: "<<huyen;
		}
 };
 //===========================================================
 class person: public myaddress
 {
 	protected:
		string name,phone;
	public:
		person():myaddress()
		{
		}
		person(string tinh1, string huyen1, string ten, string sdt):myaddress(tinh1,huyen1)
		{
			name=ten;
			phone=sdt;
		}
		~person(){}
		void nhap()
		{
			myaddress::nhap();
			cout<<"\nHo va ten: ";getline(cin,name);
			cout<<"\nSo dien thoai: ";getline(cin,phone);
		}
		void xuat()
		{
			myaddress::xuat();
			cout<<"\nHo va ten: "<<name;
			cout<<"\nSo dien thoai: "<<phone;
		}	
 };
 //==========================================================
 class office:public person
 {
 	protected:
		int salary;
	public:
		office():person()
		{}
		office(string tinh1, string huyen1, string ten, string sdt, int luong):person(tinh1,huyen1,ten,sdt)
		{
			salary=luong;
			}	
		~office(){}
		void nhap()
		{
			person::nhap();
			cout<<"\nLuong: ";cin>>salary;

		}
		void xuat()
		{
			person::xuat();
			cout<<"\nLuong: "<<salary;
		}
		friend bool operator >(office a,office b);
 };
 bool operator >(office a,office b)
 {
 	if (a.salary>b.salary) return true;
 	return false;
 }
 //================================================
 int main()
{
    office ds[100];
    int n;
    cout<<"\n Nhap so thanh vien: ";cin>>n;
    cout << "\n===== NHAP DANH SACH =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap doi tuong thu " << i + 1 << ":";
        ds[i].nhap();
    }
        for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i] > ds[j])
            {
                swap(ds[i], ds[j]);
            }
        }
    }

    cout << "\n===== DANH SACH SAU SAP XEP =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\nDoi tuong thu " << i + 1 << ":";
        ds[i].xuat();
    }

    return 0;
}
 
