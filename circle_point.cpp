#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class point{
	private:
		float x, y;
   	public:
        void init(float ox, float oy)
        	{x=ox; y=oy;}
    	void move(float dx, float dy)
     		{x+= dx; y+= dy;}
     	void display()		
	 		{cout<<"\nToa do x= "<<x<<"   Toa do y  = "<<y;}	
}; //Ket thuc lop point
//--------------------
class circle{
	private:
		float r;
		point O;
	public:
		void init(point A, float k)
		{O=A; r=k;}
		void display()
		{
			cout<<"\n\nr ="<< r;
			O.display();   //OK goi ham display cua lop point
			cout<<"\nDien tich = "<<dientich();
		}  
		void move(float dx, float dy)
      	{O.move(dx,dy);} //goi ham move cua lop point
      	
		float dientich()
      	{
      		return 3.14*r*r;
      	}
};//Ket thuc lop circle
int main()
{
	point B;
	B.init(10,20);
	circle c;
	c.init(B,5);
	c.display();
	cout<<endl;
	system("pause");
}
		
	   
	   


