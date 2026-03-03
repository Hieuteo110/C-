#include <iostream>
using namespace std;

void nhap(int a[][100],int n,int m)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        {
            cout<<"Nhap a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
}

void hienthi(int a[][100],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}

void chuyenvi(int a[][100],int b[][100],int n,int m)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            b[j][i]=a[i][j];
}

int main() 
{
    int n,m;
    int a[100][100],b[100][100];
    
    cout<<"Nhap so dong n: ";cin>>n;
    cout<<"Nhap so cot m: ";cin>>m;
    nhap(a,n,m);
    
    cout<<"\nMa tran a:\n";
    hienthi(a,n,m);
    
    chuyenvi(a,b,n,m);
    
    cout<<"\nMa tran chuyen vi:\n";
    hienthi(b,m,n); 
    
    return 0;
}
