
#include <iostream>
#include <cstring>

using namespace std;

bool search(int [],const int,int);
int position(int [],const int,int);
int count(int [],const int,int);

void ex5()
{
  // Exercise 5
  cout << "Exercise 5" << endl << endl;
  
  int v[] = {1,2,3,4,5,6,5,4,3,2,1};
  
  cout << "search({1,2,3,4,5,6,5,4,3,2,1},11,7) = " << search(v,11,7) << endl;
  cout << "search({1,2,3,4,5,6,5,4,3,2,1},11,2) = " << search(v,11,2) << endl;
  
  cout << "position({1,2,3,4,5,6,5,4,3,2,1},11,7) = " << position(v,11,7) << endl;
  cout << "position({1,2,3,4,5,6,5,4,3,2,1},11,2) = " << position(v,11,2) << endl;

  cout << "count({1,2,3,4,5,6,5,4,3,2,1},11,7) = " << count(v,11,7) << endl;
  cout << "count({1,2,3,4,5,6,5,4,3,2,1},11,2) = " << count(v,11,2) << endl;
  
  cout << "------------------------------------------------------------" << endl;
}


int main()
{
  ex5();
}
