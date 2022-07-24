#include <iostream>
using namespace std;

int main() 
{
	cout << "The size of unsigned integer is " << sizeof(unsigned int) << "." << endl;
	cout << "The size of a normal integer is " << sizeof(int) << "." << endl;
	
	cout << "The size of a an unsigned integer and a normal integer ";
	cout << "are the same." << endl;
	
	cout << "The size of a long integer is " << sizeof(long int) << endl;
	
	cout << "The size of a long integer is bigger than the size of an ";
	cout << "unsigned integer and a normal integer." << endl;
	
	return 0;
}
