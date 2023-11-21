#include <iostream>
using namespace std;

class Studying  {
public:
	int x, y;
	Studying(int a, int b)
	{
		x = a;
		cout<<"x : "<<x<<endl;
	}

	
	void operator-() 
	{ 
		x=++x; 
		cout<<endl<<"After Overlaoding"<<endl;
		cout<<"x : "<<x<<endl;
	} 
	
}; 
int main() 
{ 
	Studying c1(8, 9);
	
	-c1;
	
	return 0; 
}
