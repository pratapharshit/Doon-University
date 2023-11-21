#include<iostream>
using namespace std;

class addition{

    public:
    // Function 1
        void add(int a, int b) {

            cout<<"Sum of int values : "<<a+b<<endl;
        }

        // Function 2
        void add(double a, double b) {
            cout<<"Sum of double values : "<<a+b<<endl;
        }
};

int main() {

    addition dd;
    
    // Calling 1
    dd.add(1, 3); 

    // Calling 2    
    dd.add(1.5, 3.3); 

    return 0;
}
