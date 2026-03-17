#include <iostream>
using namespace std;
struct phanso
{
    int ts;
    int ms;
};

phanso taops(int ts, int ms)
{
    phanso p;
    p.ts = ts;
    p.ms = ms;
    return p;
}

phanso operator+(phanso a, phanso b)
{
    phanso kq;
    kq.ts = a.ts * b.ms + b.ts * a.ms;
    kq.ms = a.ms * b.ms;
    return kq;
}

phanso operator-(phanso a, phanso b)
{
    phanso kq;
    kq.ts = a.ts * b.ms - b.ts * a.ms;
    kq.ms = a.ms * b.ms;
    return kq;
}

phanso operator-(phanso a)
{
    phanso kq;
    kq.ts = -a.ts;
    kq.ms = a.ms;
    return kq;
}

phanso operator*(phanso a, phanso b)
{
    phanso kq;
    kq.ts = a.ts * b.ts;
    kq.ms = a.ms * b.ms;
    return kq;
}

phanso operator/(phanso a, phanso b)
{
    phanso kq;
    kq.ts = a.ts * b.ms;
    kq.ms = a.ms * b.ts;
    return kq;
}

bool operator>(phanso a, phanso b)
{
    return a.ts * b.ms > b.ts * a.ms;
}

bool operator>=(phanso a, phanso b)
{
    return a.ts * b.ms >= b.ts * a.ms;
}

bool operator<(phanso a, phanso b)
{
    return a.ts * b.ms < b.ts * a.ms;
}

bool operator<=(phanso a, phanso b)
{
    return a.ts * b.ms <= b.ts * a.ms;
}

bool operator==(phanso a, phanso b)
{
    return a.ts * b.ms == b.ts * a.ms;
}

bool operator!=(phanso a, phanso b)
{
    return a.ts * b.ms != b.ts * a.ms;
}

void xuat(phanso a)
{
    cout << a.ts << "/" << a.ms;
}

int main()
{
    phanso a = taops(1,2);
    phanso b = taops(3,4);
    phanso c = a + b;
    phanso d = a * b;
    cout << "a + b = "; xuat(c); cout << endl;
    cout << "a * b = "; xuat(d); cout << endl;
    if(a < b)
        cout << "a < b";
}
