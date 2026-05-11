#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class printer
{
	protected:
		string name;
		int soluong;
	public:
		printer(string ten="",int soluong1=0)
		{
			name=ten;
			soluong=soluong1;
		}
		void nhap(ifstream &fin)
		{
			getline(fin,name,'#');
			fin>>soluong;
			fin.ignore();
		}
		void xuat(ostream &os)
		{
			os << setw(20) << name << "|"    
           << setw(10) << soluong << "|";
		}
};
//============================================================
class laser : public virtual printer
{
	protected:
		int dpi;
	public:
		laser(string ten="",int soluong1=0,int dpi1=0) : printer(ten,soluong1)
		{
			dpi=dpi1;
		}
		void nhap(ifstream &fin)
		{
			fin>>dpi;
			fin.ignore();
		}
		void xuat(ostream &os)
		{
			printer::xuat(os);
			os << setw(5) << dpi << "|";
		}
};
//===============================================================
class colorprinter : public virtual printer
{
	protected:
		string color;
	public:
		colorprinter(string ten="",int soluong1=0,string mau=""):printer(ten,soluong1)
		{
			color=mau;
		}
		void nhap(ifstream &fin)
		{
			printer::nhap(fin);
			getline(fin,color,'#');
		}
		void xuat(ostream &os)
		{
			printer::xuat(os);
			os << setw(15) << color << "|";
		}
};
//==================================================================
class colorlaser: public laser,public colorprinter
{
	public:
		colorlaser(string ten="",int soluong1=0,string mau="",int dpi1=0)
		:printer(ten,soluong1),laser(ten,soluong1,dpi1),colorprinter(ten,soluong1,mau)
		{}
		void nhap(ifstream &fin)
		{
			colorprinter::nhap(fin);
			fin>>dpi;
			fin.ignore();
		}
		void xuat(ostream &os)
		{
			colorprinter::xuat(os);
			os << setw(5) << dpi << "|";
		}
};
//================================================================
class giaodien
{
	public:
		static void duongke(ostream &os)
		{
			os<<"+--------------------+----------+---------------+-----+\n";
		}
		static void tieude(ostream &os)
		{
			os << "============================== DANH SACH ===============================\n";
		    duongke(os);
		    os<<left <<"|"
		    <<setw(20)<<"Ten may in"<<"|"
		    <<setw(10)<<"So luong"<<"|"
		    <<setw(15)<<"Mau"<<"|"
		    <<setw(5)<<"Dpi"<<"|\n";
		    duongke(os);
		}
		static void xuatbang(ostream &os,colorlaser ds[],int n)
		{
			tieude(os);
			for(int i=0;i<n;i++)
			{
				os<<left<<"|";
				ds[i].xuat(os);
				os<<endl;
				duongke(os);
			}
		}
};
//====================================================================
int main()
{
	colorlaser a[100];
	int n;
	
	ifstream fin("5.4input.txt");
	ofstream fout("5.4out.txt");
	if(!fin)	
	{
		cout<<"Khong mo duoc file input";
		return 0;	
	}	
	fin>>n;
	fin.ignore();
	for(int i=0;i<n;i++)	a[i].nhap(fin);
    cout << "\n";
    giaodien::xuatbang(cout, a, n);
    fout << "\n";
	giaodien::xuatbang(fout, a, n);
    cout << "Da xuat danh sach vao file 5.4out.txt thanh cong!\n";
    
    fin.close();
    fout.close();
	return 0;
}
