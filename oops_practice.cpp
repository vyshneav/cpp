#include<iostream>

using namespace std;

class Shape{
public:
    virtual double area()  = 0;  // Pure virtual method (abstract method)
    virtual double perimeter()  = 0;
};

class rectangle:public Shape{
	private:
	double length, breadth;
	public:
	rectangle(double w, double b):length(w), breadth(b) {}
	
	
	double area() {
		return length * breadth;
	}
	
	double perimeter() {
		return 2 * (length * breadth);
	}
	
};
class circle:public Shape{
	private:
	double radius;
	public:
	circle(double r) : radius(r) {}
	
	double area() {
		return 3.14 * radius * radius;
	}
	double perimeter() {
		return 2 * 3.14 * radius;
	}
};

int main(){
	rectangle r(4.0,5.0);
	circle c(4.0);
	cout << " the circle area:"<<c.area() << endl;
	cout << "the circle perimeter:"<<c.perimeter() << endl;
	cout << " the rectangle area:"<<r.area() << endl;
	cout << "the rectangle perimeter:"<<r.perimeter() << endl;
	return 0;
}
