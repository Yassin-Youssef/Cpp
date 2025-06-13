#include "Box.h"
#include <iostream>
box::box() : depth(1), width(1), height(1){}/*default critter*/
box::box(double d, double w, double h) : depth(d), width(w), height(h){}/*parameterized*/
box::box(const box&) : height(height), width(width), depth(depth) {}/*copy constructor*/
box::~box(){}/*destructor*/
/*setters*/
void box::setDepth(double d){
    depth = d;
}
void box::setWidth(double w){
    width = w;
}void box::setHeight(double h){
    height = h;
}
/*getters*/
double box::getDepth() const{
    return depth;
}
double box::getWidth() const{
    return width;
}
double box::getHeight() const{
    return height;
}
/*function for volume*/
double box::volume() const{
    return depth * width * height;
}