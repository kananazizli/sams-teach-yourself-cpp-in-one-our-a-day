/* We can tell the compiler that we are 'using namespace std;', so we do not have to mention the namespace when using std::cout or std::endl

#include <iostream>

int main()
{
  using namespace std;

  cout << "Hello World" << endl;
  return 0;
}
*/

/*OR we can include artifacts that we wish to use instead of a namespace in its entirety. This is a more restrictive variant of the example above.*/ 

#include <iostream>

int main()
{
  using std::cout;
  using std::endl;

  cout << "Hello World" << endl;
  return 0;
}
