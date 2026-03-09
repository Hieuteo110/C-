#include <iostream>
using namespace std;
class point
{	private:
     	float x,y;
	public:
  		void init(float ox, float oy)
		{
			x=ox; y=oy;	
		}
     	void move(float dx, float dy); //Khai bao
     	void display();	 //Khai bao		
}; //Ket thuc KHAI BAO lop 
//===================================================== 
void point::move(float dx, float dy) 
{x+= dx; y+= dy;}
//=====================================================
void point::display() 
{cout<<"\nToa do x= "<<x<<"   Toa do y  = "<<y;}
//=====================================================   
int main() //main la ham tu do
   {
    point p,q;//Khai bao 2 doi tuong p và q thuoc lop point	
    p.init(2,3);
	p.display();
    p.move(3,4);   
    p.display();
    q.init(10,20);
    q.display();
	cout<<endl;
  }
