#include <iostream>
using namespace std;

void nhap(float a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}

float max(float a[],int n)
{
    float m=a[0];
    for (int i=1;i<n;i++)
        if (a[i]>m)
            m=a[i];
    return m;
}

float min(float a[],int n)
{
    float m=a[0];
    for (int i=1;i<n;i++)
        if (a[i]<m)
            m=a[i];
    return m;
}

int main() 
{
    int n;
    float a[1000];
    cout<<"Nhap n: ";cin>>n;
    nhap(a,n);
    cout<<"Max = "<<max(a,n);
    cout<<"\nMin = "<<min(a,n);
    return 0;
}
