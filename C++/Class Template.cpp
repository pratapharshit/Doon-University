#include<iostream>
using namespace std;

template <class jad>
class temp{
    
    public:
        jad value;
        
        temp(jad val)
        {
            a=val;
            cout<<"Result : "<<val<<endl;
        }
};

int main()
{
    temp <char> t('D');    // for character type
    temp <string> u("DEE"); // for string type
    temp <int> v(42);   //for integer type
    temp <float> w(43.2);  //for float type
    
}