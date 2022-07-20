/* We need to add # to our preprocessor include to fix the bug
in the following code:

include <iostream>
int main()
{
	std::cout << "Hello Buggy World" << std::endl;
	return 0;
}		
*/ 


#include <iostream>
int main()
{
	std::cout << "Hello Buggy World" << std::endl;
	return 0;
}
