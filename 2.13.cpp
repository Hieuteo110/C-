#include <iostream>
using namespace std;
//nhap
void nhap(int a[], int n) 
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
void nhap(float a[], int n) 
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
void nhap(char a[], int n) 
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
//Xuat
void xuat(int a[], int n) 
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
void xuat(float a[], int n) 
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
void xuat(char a[], int n) 
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
//max
int max(int a[], int n) 
{
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

float max(float a[], int n) {
    float m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

char max(char a[], int n) {
    char m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

int main() 
{
    int n;
    cout << "Nhap so phan tu n: "; cin >> n;
    
    int a[100];
    cout << "Nhap mang nguyen: "; nhap(a, n);
    cout << "Max: " << max(a, n) << endl;

    float b[100];
    cout << "Nhap mang thuc: "; nhap(b, n);
    cout << "Max: " << max(b, n) << endl;

    char c[100];
    cout << "Nhap mang ki tu: "; nhap(c, n);
    cout << "Max: " << max(c, n) << endl;
    return 0;
}
