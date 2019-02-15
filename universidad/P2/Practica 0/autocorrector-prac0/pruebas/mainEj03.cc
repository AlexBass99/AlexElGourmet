
#include <iostream>
#include <cstring>

using namespace std;

int firstPrimes(int);

void ex3()
{
  // Exercise 3
  cout << "Exercise 3" << endl << endl;
  
  int sum = 0;
  
  sum = firstPrimes(1);
  cout << endl << "firstPrimes(1) = " << sum << endl;

  sum = firstPrimes(3);
  cout << endl << "firstPrimes(3) = " << sum << endl;
  
  sum = firstPrimes(6);
  cout << endl << "firstPrimes(6) = " << sum << endl;
  
  sum = firstPrimes(10);
  cout << endl << "firstPrimes(10) = " << sum << endl;
  
  cout << endl << "-----------------------------------------------------------" << endl;
}



int main()
{
  ex3();
}
