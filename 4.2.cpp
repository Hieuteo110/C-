#include<bits/stdc++.h>
using namespace std;
	class mydate{
		private:
			int ngay,thang,nam;
		public:
			mydate(int d=1,int m=1,int y=2026)
			{
				ngay=d;
				thang=m;
				nam=y;
			}
			~mydate(){}
			void xuat()
			{
				printf("Date: %d - %d - %d",ngay,thang,nam);
			}
			void nhap()
			{
				cout<<"Nhap vao ngay thang nam: ";
				cin>>ngay>>thang>>nam;
			}
			friend bool operator >= (mydate a,mydate b)
			{
				if (a.nam>b.nam) return true;
				if (a.nam<b.nam) return false;
				
				if (a.thang>b.thang) return true;
				if (a.thang<b.thang) return false;
				
				if (a.ngay>=b.ngay) return true;
				return false;
			}
	};
int main()
{
	mydate a[100];
	int n;
	cout<<"Nhap so phan tu date: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		printf("Date %d: \n",i+1);
		a[i].nhap();
	}
	mydate max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>=max) max=a[i];
	}
	cout<<"\n================\n";
	cout<<"Ngay lon nhat: \n";
	max.xuat();
	return 0;
}
