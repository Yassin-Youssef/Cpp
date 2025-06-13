#include <iostream>
#include "Shapes.h"
using namespace std;
int main() {
  Circle c("circle1", 3, 4, 7);
  RegularPolygon rp("TRIANGLE", 1, 1, 3);
  Rectangle rect("Rectangle1", 2, 4, 6, 10);
  Square s("Square1", 2, 3, 4);
  rp.printName();
  c.printName();
  rect.printName();
  s.printName();
  cout << "Circle perimeter = " << c.perimeter() << " area = " << c.area() << endl;
  cout << "Rectangle perimeter = " << rect.perimeter() << " area = " << rect.area() << endl;
  cout << "Square perimeter = " << s.perimeter() << " area = " << s.area() << endl;
  return 0;
}
