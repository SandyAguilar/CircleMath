#include <iostream>
using namespace std;
const double PI=3.14;

int main()
{
double circumference;
double radius;
double area;
cout << "Enter the radius: ";
cin >> radius;
cout << endl;
cout << "Area = " << area << endl;
area = PI * radius * radius;
circumference = 2 * PI * radius;
cout << "Circumference = " << circumference << endl;
  return 0;
}