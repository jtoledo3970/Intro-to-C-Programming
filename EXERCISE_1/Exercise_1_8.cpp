/*
(Area and perimeter of a circle) Write a program that displays the area and perimeter
of a circle that has a radius of 5.5 using the following formula:
perimeter = 2 * radius * pi
area = radius * radius * pi
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
 double perimeter, area, radius;
 const double pi = 3.1415926535897;
 radius = 5.5;
 perimeter = 2 * radius * pi;
 area = radius * radius * pi;
 cout << "The perimeter of the circle is " << perimeter << " and the area of the circle is " << area << endl;
}
