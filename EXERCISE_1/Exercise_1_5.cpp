/*
Write a program that displays the result of
9.5 * 4.5 - 2.5 * 3
--------------------
45.5 - 3.5
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "9.5 * 4.5 - 2.5 * 3" << endl;
  cout << "-------------------" << endl;
  cout << "     45.5 - 3.5" << endl;
  cout << ((9.5 * 4.5) - (2.5 * 3)) / (45.5 - 3.5) << endl;
}
