#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

//==========================
class myaddress
{
protected:
    string tinh, huyen;
public:
    myaddress(string tinh1="", string huyen1="")
    {
        tinh = tinh1;
        huyen = huyen1;
    }

    void nhap(ifstream &fin)
    {
        getline(fin, tinh);
        getline(fin, huyen);
    }

    void xuat(ostream &os)
    {
        os << left
           << setw(15) << tinh << "|"
           << setw(15) << huyen << "|";
    }
};

//==========================
class person : public myaddress
{
protected:
    string name, phone;
public:
    person() : myaddress() {}

    person(string tinh1, string huyen1, string ten, string sdt)
        : myaddress(tinh1, huyen1)
    {
        name = ten;
        phone = sdt;
    }

    void nhap(ifstream &fin)
    {
        myaddress::nhap(fin);
        getline(fin, name);
        getline(fin, phone);
    }

    void xuat(ostream &os)
    {
        myaddress::xuat(os);
        os << setw(20) << name << "|"    
           << setw(15) << phone << "|";
    }
};

//==========================
class office : public person
{
protected:
    int salary;
public:
    office() : person() {}

    office(string tinh1, string huyen1, string ten, string sdt, int luong)
        : person(tinh1, huyen1, ten, sdt)
    {
        salary = luong;
    }

    void nhap(ifstream &fin)
    {
        person::nhap(fin);
        fin >> salary;
        fin.ignore();
    }

    void xuat(ostream &os)
    {
        person::xuat(os);
        os << setw(8) << salary << "|";   
    }
    static void duongke(ostream &os)
    {
        os << "+---------------+---------------+--------------------+---------------+--------+\n";
    }
    static void tieude(ostream &os)
    {
        os << "============================== DANH SACH SAU SAP XEP ===============================\n";
        duongke(os);
        os << left << "|"
           << setw(15) << "Tinh" << "|"
           << setw(15) << "Huyen" << "|"
           << setw(20) << "Ho va ten" << "|"
           << setw(15) << "So dien thoai" << "|"
           << setw(8) << "Luong" << "|\n";
        duongke(os);
    }

    static void xuatbang(ostream &os, office ds[], int n)
    {
        tieude(os);
        for (int i = 0; i < n; i++)
        {
            os << left << "|";
            ds[i].xuat(os);
            os << endl;
            duongke(os);
        }
    }

    friend bool operator > (office a, office b);
};

bool operator > (office a, office b)
{
    return a.salary > b.salary;
}

//==========================
int main()
{
    office ds[100];
    int n;

    ifstream fin("5.1input.txt");
    ofstream fout("5.1out.txt");

    if (!fin)
    {
        cout << "Khong mo duoc file input!";
        return 0;
    }

    fin >> n;
    fin.ignore();
    for (int i = 0; i < n; i++)
        ds[i].nhap(fin);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i] > ds[j])
                swap(ds[i], ds[j]);
               
    cout << "\n";
    office::xuatbang(cout, ds, n);
    fout << "\n";
    office::xuatbang(fout, ds, n);
    cout << "Da xuat danh sach vao file 5.1out.txt thanh cong!\n";
    
    fin.close();
    fout.close();

    return 0;
}
