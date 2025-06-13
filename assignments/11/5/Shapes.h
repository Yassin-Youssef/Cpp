/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;/*i added this to make it easier for me*/

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string &);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape &);		// copy constructor
		void printName() const;  	// prints the name  
		virtual double perimeter() const = 0;/*function for perimeter*/
		virtual double area() const = 0;/*function for area*/
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x, y;  // the center of the shape
	public:
		CenteredShape(const string &, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape &);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		double getX() const;/*getter for x*/  
		double getY() const;/*getter for y*/
		void setX(double);/*setter for x*/
		void setY(double);/*setter for y*/  
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const string &, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon &);
		int getEdgesNumber() const;/*getter for edges number*/
		void setEdgesNumber(int);/*setter for edges number*/
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string &, double, double, double);
		Circle();
		Circle(const Circle &);
		int getRadius() const;/*getter for radius*/
		void setRadius(double);/*setter for radius*/
		double perimeter() const;/*circle perimeter*/
		double area() const;/*circle area*/
};
class Rectangle : public CenteredShape{/*class for constructor*/
    private:
        double width, height;
    public:
        Rectangle();/*default constructor*/
        Rectangle(const string&, double, double, double, double);/*the constructor*/
        Rectangle(const Rectangle &);/*copy constructor*/
        double getWidth() const;/*getter for width*/
        double getHeight() const;/*getter for height*/
        void setWidth(double);/*setter for width*/
        void setHeight(double);/*setter for height*/
        double perimeter() const;/*perimeter rectangle*/
        double area() const;/*area rectangle*/
};
class Square : public Rectangle{
    public:
        Square(); /*default*/
        Square(const string &, double, double, double);/*the constructor*/
        Square(const Square &);/*copy constructor*/
        void setSide(double);/*setting side which is = to height*/
        double getSide() const;/*getter for side*/
};

#endif