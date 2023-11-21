#include<iostream>
using namespace std;

template <class zap>

void dap(zap val)
{
    cout<<"Result : "<<val<<endl;
}

int main()
{
    
    dap('D');   //for character type
    dap("DEE"); //for string type
    dap(33);    //for integer type
    dap(33.3);  //for float type
    
}