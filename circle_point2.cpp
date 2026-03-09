#include <iostream>
#include <math.h>
#include "thuvien.h"
using namespace std;
int main()
{
	point A;
	A.init(10,20);
	circle c;
	c.init(A,5);
	c.display();
	c.move(1,1);
	c.display();
}

