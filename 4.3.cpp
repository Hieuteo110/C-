#include<bits/stdc++.h>
using namespace std;
	class mytime{
		private:
			int gio,phut,giay;
		public:
			mytime(int h=1,int s=1,int m=2026)
			{
				gio=h;
				phut=m;
				giay=s;
			}
			~mytime(){}
			void xuat()
			{
				printf("Time: %d : %d : %d",gio,phut,giay);
			}
			void nhap()
			{
				cout<<"Nhap vao gio phut giay: ";
				cin>>gio>>phut>>giay;
			}
			friend bool operator >= (mytime a,mytime b)
			{
				if (a.gio>b.gio) return true;
				if (a.gio<b.gio) return false;
				
				if (a.phut>b.phut) return true;
				if (a.phut<b.phut) return false;
				
				if (a.giay>=b.giay) return true;
				return false;
			}
	};
int main()
{
	mytime a[100];
	int n;
	cout<<"Nhap so phan tu time: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		printf("Time %d: \n",i+1);
		a[i].nhap();
	}
	mytime max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>=max) max=a[i];
	}
	cout<<"\n================\n";
	cout<<"Thoi gian lon nhat: \n";
	max.xuat();
	return 0;
}
