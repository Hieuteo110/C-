#include<bits/stdc++.h>
using namespace std;
class frac
	{
		private:
			int tuso,mauso;
		public:
			frac(int ts=1,int ms=1)
			{
				tuso=ts;
				mauso=ms;
			}
			~frac(){}
			void nhap()
			{
				cout<<"Nhap tu so va mau so: ";cin>>tuso>>mauso;
			}
			void xuat()
			{
				cout<<tuso<<"/"<<mauso;
			}
			friend bool operator >(frac a,frac b);
	};
	bool operator >(frac a,frac b)
			{
				if(a.tuso*b.mauso>b.tuso*a.mauso) return true;
				return false;
			}
int main()
{
	frac a[100];
	int n;
	cout<<"Nhap so phan tu: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		printf("Phan tu %d:\n",i+1);
		a[i].nhap();
		
	}
	frac max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	cout<<"\n===============\n";
	cout<<"Phan so lon nhat: ";
	max.xuat();
	return 0;
}

