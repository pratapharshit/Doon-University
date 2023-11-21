#include <iostream>
using namespace std;

class Studying {
public:
	int x, y;
	Studying(int a, int b)
	{
		x = a;
		cout<<"x : "<<x<<endl;
	}

	
	friend void operator-(Studying &S);
	
}; 

void operator-(Studying &S) 
	{ 
		S.x=++S.x; 
		cout<<endl<<"After Overlaoding"<<endl;
		cout<<"x : "<<S.x<<endl;
	} 
	
int main() 
{ 
	Studying c1(8, 9);
	
	-c1;
	
	return 0; 
}
