#include <iostream>
using namespace std;

class Rectangle {
private:
    double width = 0;
    double length = 0;

public:
    void setWidth(double w) {
        width = w;
    }
    void setLength(double l) {
        length = l;
    }

    double getWidth() {
        return width;
    }
    double getLength() {
        return length;
    }

    // Calculations
    double getArea() {
        return width * length;
    }
    double getPerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Example 1
    Rectangle r1;
    r1.setWidth(5);
    r1.setLength(3);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    // Example 2
    Rectangle r2;
    r2.setWidth(10.5);
    r2.setLength(4);

    cout << "\nRectangle 2" << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Length: " << r2.getLength() <<endl;
    cout << "Area: " << r2.getArea()<<endl;
    cout << "Perimeter: " << r2.getPerimeter(); 


    return 0;
}
