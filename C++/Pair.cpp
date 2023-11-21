#include <iostream>
using namespace std;

int main() {
    
    pair <int,int> p1;
    pair <int,float> p2;
    pair <double,double> p3;
    pair <float,int> p4;
    
    p1 = make_pair(5,7); 
    
    cout<<"-----First Pair-----"<<endl;
    cout<<"First value : "<<p1.first<<" , second value : "<<p1.second<<endl;
    
    p2 = {6,5.9};  
    
    cout<<"-----Second Pair-----"<<endl;
    cout<<"First value : "<<p2.first<<" , second value : "<<p2.second<<endl;
    
    
    p3.first=5.8;    
    p3.second=8.3;
    
    cout<<"-----Third Pair-----"<<endl;
    cout<<"First value : "<<p3.first<<" , second value : "<<p3.second<<endl;
    
   
    cout<<"enter first value : ";
    cin>>p4.first;
    
    cout<<endl<<"enter second value : ";
    cin>>p4.second;
    
    cout<<"-----Fourth Pair-----"<<endl;
    cout<<"First value : "<<p4.first<<" , second value : "<<p4.second<<endl;
    
    
    return 0;
}