/*
CH-230-A
a11_p2.cpp creature.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;

class Creature {
protected:
    int distance;
    
public:
    Creature();  
    Creature(int);
    void run() const;
};

Creature::Creature(): distance(10) {
    cout << "Creature constructor called" << endl;
}

Creature::Creature(int x): distance(x) {
    cout << "Creature constructor" << endl;
}

void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
private:
    int distFactor;

public:
    Wizard();
    void hover() const;
};

Wizard::Wizard() : Creature(10), distFactor(3) {
    cout << "Wizard constructor called" << endl;
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
/*all above was already done in the file*/
class Spell : public Creature {/*the class spell that i created with the inheritace for class creature*/
private:
    string power;/*a power to cast*/

public:
    Spell();/*default*/
    Spell(string);/*parameterized*/
    void cast() const;/*function to cast spell*/
};

Spell::Spell() : Creature(10), power("transform") {/*outputting for the default*/
    cout << "Spell default constructor called" << endl;
}

Spell::Spell(string p) : Creature(10), power(p) {/*outputting for tthe parameterized*/
    cout << "Spell parameterized constructor called" << endl;
}

void Spell::cast() const {/*output for cast spell function*/
    cout << "Casting spell with power: " << power << endl;
}

class Fight : public Creature {/*a class fight of my choice for the number of fights that will occur*/
private:
    int fight;/*number of fights*/

public:
    Fight();/*defalt*/
    Fight(int);/*parameterized*/
    void fights() const;/*function to show how many fights*/
};

Fight::Fight() : Creature(10), fight(2) {/*outputting default*/
    cout << "Fight default constructor called" << endl;
}

Fight::Fight(int f) : Creature(10), fight(f) {/*outputting for paramterized*/
    cout << "Fight parameterized constructor called" << endl;
}

void Fight::fights() const {/*number of fights function*/
    cout << "Will fight " << fight << " times!" << endl;
}

int main() { 
    cout << "Creating a Creature." << endl;
    Creature c(25);
    c.run();

    cout << "Creating a Wizard." << endl;
    Wizard w;
    w.run();
    w.hover();
/*abover here was already done in the program in the file*/
    cout << "Creating a Spell." << endl;
    Spell s;/*calling the cast*/
    s.run();/*the running for creature*/
    s.cast();/*the cast for spell*/
/*both are default*/
    cout << "Creating a custom Spell with different power." << endl;
    Spell s2("teleport");/*parameterized spell*/
    s2.run();
    s2.cast();

    cout << "Creating a Fight." << endl;
    Fight f;/*calling fight class*/
    f.run();/*running from the creature*/
    f.fights();/*fights*/
/*both default*/
    cout << "custom fight with different number of fights." << endl;
    Fight f2(4);/*paramterized fight*/
    f2.run();
    f2.fights();

    return 0;
}