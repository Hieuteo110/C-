#include <iostream>
#include <math.h>
using namespace std;
class point
{
	private:
		float x,y;
	public:
		point(float ox=0, float oy=0)
		{
			x=ox; y=oy;
		}
		void display()
		{
			cout<<"x = "<<x<<"   y =  "<<y<<endl;
		}
		friend float khoangcach(point a, point b);  //la ham TU DO ban voi lop point
		//ham khoangcach khong phai la ham thanh phan cua lop point
};
//===================================================
float khoangcach(point a, point b) //dinh nghia
{
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)); 
}
//===================================================
class line
{
	private:
		point a,b;
	public:
		line(point oa, point ob)
		{
			a=oa; b=ob;
		}
		void display()
		{
			a.display();  //a goi ham display cua point
			//cout<<a.x<a.y  //!OK
			b.display();  //b goi ham display cua point
			cout<<"Do dai = "<<khoangcach(a,b); //goi ham tu do tinh khoang cach 2 point
		}
};
//======================================================
class triangle //Sinh vien hoan thien
{
	private:
		point a,b,c;
	public:
//		H�m thiet lap 3 tham so
        triangle (point oa, point ob,point oc)
		{
			a=oa; b=ob; c= oc;
		}
//		Ham tinh chu vi
        float chuvi()
        {
        return khoangcach(a,b)+khoangcach(a,c)+khoangcach(b,c);
        }
//		Ham tinh dien tich
        float dientich()
        {
        float p= chuvi()/2;
        float ab= khoangcach(a,b);
        float ac= khoangcach(a,c);
        float bc= khoangcach(b,c);
        return sqrt(p*(p-ab)*(p-bc)*(p-ac));
        }
        
//		Ham hien thi toa do 3 diem va chu vi, dien tich tam giac
         void hienthi()
         {
         cout<<"Toa do 3 diem: \n";
         cout << "==============" << endl;
         a.display();
         b.display();
         c.display();
         cout << "==============" << endl;
         cout << "Chu vi: " << chuvi()<<endl;
         cout << "Dien tich: " << dientich();
         
         }
};
//======================================================
int main()
{
	point u(10,10), v(20,20), q(10,20);
	line l(u,v);
	l.display();
	cout<<endl;
    triangle t(u,v,q);
    t.hienthi();
}
