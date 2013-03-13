//============================================================================
// Name        : try25.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue; // the address of firstvalue is 010101= *mypointer; but the valuse of that is  10.
  *mypointer = 10;//value pointed by mypointer is 10,address maybe , eg:010101
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;
  return 0;
}
