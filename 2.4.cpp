#include <iostream>
using namespace std;

void nhap(float a[][100],int m,int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        {
            cout<<"Nhap a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
}

int am(float a[][100],int m,int n)
{
    int d=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]<0)
                d++;
    return d;
}

int duong(float a[][100],int m,int n)
{
    int d=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]>0)
                d++;
    return d;
}

int main() 
{
    int m,n;
    float a[100][100];
    cout<<"Nhap so dong m: ";cin>>m;
    cout<<"Nhap so cot n: ";cin>>n;
    nhap(a,m,n);
    cout<<"So phan tu am = "<<am(a,m,n);
    cout<<"\nSo phan tu duong = "<<duong(a,m,n);
    return 0;
}
