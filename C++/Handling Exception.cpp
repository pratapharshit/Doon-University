#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    
    cout<<endl<<"Enter Numerator : ";
    cin>>a;
    
    cout<<endl<<"Enter Denominator : ";
    cin>>b;
    
    try
    {
        if(b==0)
        {
            throw b;
        }
        
        c=a/b;
        cout<<"result : "<<c<<endl;
    }
    
    catch(int exception)
    {
        cout<<"Exception : Division by zero"<<endl;
    }
    
    
    
}