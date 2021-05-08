#include <iostream>
import simple;


int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;

  const auto value = simple::some_func();
  cout << value << endl;
}
