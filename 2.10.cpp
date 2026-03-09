#include <iostream>
using namespace std;
bool tamgiac(double a = 1.0, double b = 1.0, double c = 1.0) {
    return (a + b > c && a + c > b && b + c > a);
}
int main() 
{
    double a, b, c;
    cout << "Nhap 3 gia tri: ";
    if (!(cin >> a >> b >> c)) 
        cout << "Mac dinh la tam giac deu canh 1" << endl;
	else 
	{
		if(tamgiac(a, b, c))
        	cout << "La 3 canh cua tam giac" << endl;
        else
        	cout<< "Khong phai 3 canh cua tam giac" << endl;
    }
    return 0;
}
