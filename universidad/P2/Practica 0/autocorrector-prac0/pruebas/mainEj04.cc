
#include <iostream>
#include <cstring>

using namespace std;

void Goldbach(int,int &,int &);

void ex4()
{
  // Exercise 4
  cout << "Exercise 4" << endl << endl;
  
  int p1 = 0;
  int p2 = 0;
  
  Goldbach(6,p1,p2);
  cout << "Goldbach(6,p1,p2) = (" << p1 << "," << p2 << ")" << endl;

  Goldbach(12,p1,p2);
  cout << "Goldbach(12,p1,p2) = (" << p1 << "," << p2 << ")" << endl;

  Goldbach(458,p1,p2);
  cout << "Goldbach(458,p1,p2) = (" << p1 << "," << p2 << ")" << endl;

  Goldbach(32896,p1,p2);
  cout << "Goldbach(32896,p1,p2) = (" << p1 << "," << p2 << ")" << endl;

  cout << "-----------------------------------------------------------" << endl;
}


int main()
{
  ex4();
}
