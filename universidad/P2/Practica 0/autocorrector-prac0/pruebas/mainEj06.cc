
#include <iostream>
#include <cstring>

using namespace std;

int minOdds(int [],const int);
int posMaxMultFive(int v[],const int);

void ex6()
{
  // Exercise 6
  cout << "Exercise 6" << endl << endl;
  
  int v1[] = {3,4,7,2,275,5,1};
  int v2[] = {2,4,8,0,24,8};
  int v3[] = {3,7,8,51,3,2};
  
  cout << "minOdds({3,4,7,2,275,5,1},7) = " << minOdds(v1,7) << endl;
  cout << "minOdds({2,4,8,0,24,8},6) = " << minOdds(v2,6) << endl;
  cout << "minOdds({3,7,8,51,3,2},6) = " << minOdds(v3,6) << endl;

  int v4[] = {2,3,8,17,24,8};
  int v5[] = {3,7,8,50,3,2};

  cout << "posMaxMultFive({3,4,7,2,275,5,1},7) = " << posMaxMultFive(v1,7) << endl;
  cout << "posMaxMultFive({2,3,8,17,24,8},6) = " << posMaxMultFive(v4,6) << endl;
  cout << "posMaxMultFive({3,7,8,50,3,2},6) = " << posMaxMultFive(v5,6) << endl;

  cout << "------------------------------------------------------------" << endl;
}


int main()
{
  ex6();
}
