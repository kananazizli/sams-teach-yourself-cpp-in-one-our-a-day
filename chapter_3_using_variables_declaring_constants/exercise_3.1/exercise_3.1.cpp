/* Initial Setup: 

#include <iostream>
using namespace std;

enum YourCards 
{
	Ace,
	Jack,
	Queen,
	King
};

int main() 
{
	cout << "Display the number for Queen" << endl;
	cout << "Queen = " << Queen << endl;
	
	YourCards cardOnTheTable = Queen;
	cout << "The card on the table is Queen and you get: " << cardOnTheTable << endl;
	
	return 0;
}

*/

#include <iostream>
using namespace std;

enum YourCards 
{
	Ace,
	Jack,
	Queen = 45,
	King
};

int main()
{
	cout << "Display the number for Queen" << endl;
	cout << "Queen = " << Queen << endl;
	
	YourCards cardOnTheTable = Queen;
	cout << "The card on the table is Queen and you get: " << cardOnTheTable << endl;
	
	return 0;
}
	
