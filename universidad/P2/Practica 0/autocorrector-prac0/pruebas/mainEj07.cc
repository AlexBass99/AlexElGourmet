
#include <iostream>
#include <cstring>

using namespace std;

void extractStudentData(char []);

void ex7()
{
  // Exercise 7
  cout << "Exercise 7" << endl << endl;
  
  char data1[] = "1234:Perez Perez, Pedro:3.4:Good work, but did not submit the last assignment";  
  extractStudentData(data1);
  cout << endl;
  
  char data2[] = "33452:Cruz Pi, Teo:7.9:No comment";
  extractStudentData(data2);
  cout << endl;
  
  char data3[] = "12:Mas Mora, Ana:9.4:Superb!";
  extractStudentData(data3);

  cout << "------------------------------------------------------------" << endl;
}


int main()
{
  ex7();
}
