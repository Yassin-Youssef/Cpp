/*
CH-230-A
a12_p1.cpp Shapes.h
yassin youssef
yyoussef@constructor.university
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string &);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape &);		// copy constructor
		void printName() const;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x, y;  // the center of the shape
	public:
		CenteredShape(const std::string &, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape &);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string &, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon &);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string &, double, double, double);
		Circle();
		Circle(const Circle &);
};
/*above already added*/
/*class hexagon*/
class Hexagon : public RegularPolygon {
private:
    double side; 
    std::string color;
public:
    Hexagon(const std::string &n, double nx, double ny, double s, const std::string &col);
    Hexagon(const Hexagon &other);
    ~Hexagon();
    double getSide() const;
    void setSide(double s);
    std::string getColor() const;
    void setColor(const std::string &col);
    double computePerimeter() const;
    double computeArea() const;
};
#endif