
#include <iostream>
#include <cstring>

using namespace std;

int printN(int);

void ex2()
{
  // Exercise 2
  cout << "Exercise 2" << endl << endl;
  
  int nAsteriscs = 0;

  nAsteriscs = printN(1);
  cout << "printN(1) = " << nAsteriscs << endl;
  nAsteriscs = printN(4);
  cout << "printN(4) = " << nAsteriscs << endl;
  nAsteriscs = printN(6);
  cout << "printN(6) = " << nAsteriscs << endl;

  cout << "-----------------------------------------------------------" << endl;
}

int main()
{
  ex2();
}
