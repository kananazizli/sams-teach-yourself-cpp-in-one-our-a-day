/* 

Find errors in the following code:

#include <iostream>

void main()
{
	std::Cout << Is there a bug here?";
}

1). int main() instead of void main()
2). C++ is case-sensitive, therefore it is cout and not Cout
3). Double quotes should be added before Is there...
4). Not an error, but I would also add std::endl for aesthetic reasons

*/

#include <iostream>

int main()
{
	std::cout << "Is there a bug here?" << std::endl;
	
	return 0;
}
