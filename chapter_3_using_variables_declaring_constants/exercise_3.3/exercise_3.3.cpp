#include <iostream> 
using namespace std;

int main()
{
	const double pi = 22.0/7;
	double radius = 0;
	
	cout << "Enter a radius: ";
	cin >> radius;
	
	double area = pi * radius * radius;
	double circumference = 2 * pi * radius;
	
	cout << "The area of the circle is " << area << endl;
	cout << "The circumference of the circle is " << circumference << endl;
	
	return 0;
}
