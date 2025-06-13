#define BOX_H
class box{/*the class box*/
private:/*private variables*/
    double depth;
    double width;
    double height;
public:/*public variables*/
    box();/*deafult constructor*/
    box(double d, double w, double h);/*parameterized constructor*/
    box(const box&);/*copy constructor*/
    ~box();/*destructor*/
    /*the setters*/
    void setDepth(double d);
    void setHeight(double h);
    void setWidth(double q);
    /*the getters*/
    double getDepth() const;
    double getWidth() const;
    double getHeight() const;
    /*function for volume*/
    double volume() const;
};