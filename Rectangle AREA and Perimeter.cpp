#include <iostream>
using namespace std;
class Rectangle {
public:
	int length;
	int width;
	int area() {
		return (length * width);
	}
	int perimeter() { return  2 * (length + width); }


};

int main() {

	Rectangle r1;
	cout << "Enter Length of rectangle:";
	cin >> r1.length;
	cout << "Entered Length:" << r1.length;
	cout << endl << "Enter Width of Rectangle:";
	cin >> r1.width;
	cout << "Entered Width:" << r1.width;
	if (0 < r1.length && r1.width < 21) {
		cout << endl << "Your Area is:" << r1.area();
		cout << endl << "Your Perimeter is:" << r1.perimeter();
	}
	else
	{
		cout << "Please enter value's between 0 & 21";
	}
	return 0;
}