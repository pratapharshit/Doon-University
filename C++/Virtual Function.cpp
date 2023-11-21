#include <iostream>
using namespace std;

class Shape {
public:
    virtual void Draw() {
        cout << "Drawing a Shape." <<endl;
    }
};

class Circle : public Shape {
public:
    void Draw() override{
        cout << "Drawing a Circle." <<endl;
    }
};

class Square : public Shape {
public:
    void Draw() override{
        cout << "Drawing a Square." <<endl;
    }
};

int main() {
    Shape shape;
    Circle circle;
    Square square;

    Shape* shapePtr1 = &shape;
    Shape* shapePtr2 = &circle;
    Shape* shapePtr3 = &square;

    shapePtr1->Draw();  
    shapePtr2->Draw();  
    shapePtr3->Draw();  

    return 0;
}
