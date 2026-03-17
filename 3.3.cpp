#include<iostream>
#include"point.h"
using namespace std;
class hinhchunhat
{
	private:
		point goc;
		float CD, CR;

	public:
		void init(float x, float y, float cd, float cr)
		{
			goc.init(x, y);
			CD = cd;
			CR = cr;
		}
		float chuvi()
		{
			return 2*(CD+CR);
		}

		float dientich()
		{
			return CD*CR;
		}

		void display()
		{
			cout << "Toa do goc tren ben trai: ";
			goc.display();
			cout << endl;
			cout << "Chieu dai: " << CD << endl;
			cout << "Chieu rong: " << CR << endl;
			cout << "Chu vi: " << chuvi() << endl;
			cout << "Dien tich: " << dientich() << endl;
		}
};

int main()
{
	hinhchunhat hcn;
	hcn.init(2,3,10,5);
	cout << "Thong tin hinh chu nhat:\n";
	hcn.display();
	return 0;
}
