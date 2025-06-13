#include <iostream>
#include "Shapes.h"

using namespace std;

// Shape Class
Shape::Shape(const string &n) : name(n) {
    cout << "Constructor Shape" << endl;
}

Shape::Shape() : name("no name") {
    cout << "Default Shape Constructor" << endl;
}

Shape::Shape(const Shape &s) : name(s.name) {
    cout << "Copy Constructor Shape" << endl;
}

void Shape::printName() const {
    cout << "Name of shape is " << name << endl;
}

// CenteredShape Class
CenteredShape::CenteredShape() : Shape(), x(0), y(0) {
    cout << "Default CenteredShape Constructor" << endl;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n), x(nx), y(ny) {
    cout << "Constructor CenteredShape" << endl;
}

CenteredShape::CenteredShape(const CenteredShape &cs) : Shape(cs), x(cs.x), y(cs.y) {
    cout << "Copy Constructor CenteredShape" << endl;
}

void CenteredShape::move(double nx, double ny) {
    x = nx;
    y = ny;
}

double CenteredShape::getX() const {
    return x;
}

double CenteredShape::getY() const {
    return y;
}

void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;  // Fixed missing semicolon here
}

// RegularPolygon Class
RegularPolygon::RegularPolygon() : CenteredShape(), edgesNumber(0) {
    cout << "Default Constructor RegularPolygon" << endl;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny), edgesNumber(nl) {
    cout << "Constructor RegularPolygon" << endl;
}

RegularPolygon::RegularPolygon(const RegularPolygon &rp) : CenteredShape(rp), edgesNumber(rp.edgesNumber) {
    cout << "Copy Constructor RegularPolygon" << endl;
}

int RegularPolygon::getEdgesNumber() const {
    return edgesNumber;
}

void RegularPolygon::setEdgesNumber(int nl) {
    edgesNumber = nl;
}

// Circle Class
Circle::Circle() : CenteredShape(), radius(0) {
    cout << "Default Constructor Circle" << endl;
}

Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny), radius(r) {
    cout << "Constructor Circle" << endl;
}

Circle::Circle(const Circle &c) : CenteredShape(c), radius(c.radius) {
    cout << "Copy Constructor Circle" << endl;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::perimeter() const {
    return 2 * 3.14159265359 * radius;  // Perimeter of circle
}

double Circle::area() const {
    return 3.14159 * radius * radius;  // Area of circle
}

// Rectangle Class
Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth, double nheight)
    : CenteredShape(n, nx, ny), width(nwidth), height(nheight) {
    cout << "Constructor Rectangle" << endl;
}

Rectangle::Rectangle() : CenteredShape(), width(0), height(0) {
    cout << "Default Constructor Rectangle" << endl;
}

Rectangle::Rectangle(const Rectangle &r) : CenteredShape(r), width(r.width), height(r.height) {
    cout << "Copy Constructor Rectangle" << endl;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(double nw) {
    width = nw;
}

void Rectangle::setHeight(double nh) {
    height = nh;
}
double Rectangle::perimeter() const {
    return 2 * (width + height);  // Perimeter of rectangle
}
double Rectangle::area() const {
    return width * height;  // Area of rectangle
}
Square::Square(const string &n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside) {
    cout << "Constructor Square" << endl;
}
Square::Square() : Rectangle() {
    cout << "Default Constructor Square" << endl;
}
Square::Square(const Square &s) : Rectangle(s) {
    cout << "Copy Constructor Square" << endl;
}
void Square::setSide(double ns) {
    setWidth(ns);
    setHeight(ns);
}
double Square::getSide() const {
    return getWidth();  // Since width == height for squares
}