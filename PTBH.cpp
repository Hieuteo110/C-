#include <iostream>
#include <cmath>
using namespace std;
class PTBH
{
private:
float a, b, c;
public:
void nhap()
{
cout << "Nhap a, b, c: ";
cin >> a >> b >> c;
}
void giai()
{
if (a==0)
{
if (b == 0)
{
if (c == 0) cout << "Vo so nghiem\n";
else cout << "Vo nghiem\n";
}
else cout << "Phuong trinh bac nhat, x = " << -c / b << endl;
return;
}
float delta = bb -4ac;
if (delta < 0)
cout << "Vo nghiem\n";
else if (delta == 0)
cout << "Nghiem kep x = " << -b / (2 * a) << endl;
else
{
float x1=(-b+sqrt(delta))/(2a);
float x2=(-b-sqrt(delta))/(2*a);
cout << "x1 = "<<x1<<", x2 = "<<x2<<endl;
}
}
};
int main()
{
int n;
cout << "Nhap so luong phuong trinh: ";
cin >> n;
PTBH ds[100];
for (int i = 0; i < n; i++)
{
cout << "\nPhuong trinh " << i + 1 << ":\n";
ds[i].nhap();
}
cout << "\nKet qua:\n";
for (int i = 0; i < n; i++)
{
cout << "PT " << i + 1 << ": ";
ds[i].giai();
}
return 0;
}

code thế này
