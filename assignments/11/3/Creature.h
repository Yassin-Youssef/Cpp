/*
CH-230-A
a11_p3.cpp Creature.h
yassin youssef
yyoussef@constructor.university
*/
/*file for the headers*/
#include <string>
using namespace std;
class Creature {/*class for the creature*/
protected:/*both private and public*/
    int distance;    
public:
    Creature(); 
    Creature(int);
    void run() const;
};
class Wizard : public Creature {/*class for wizard with inhereted creature*/
private:
    int distFactor;
public:
    Wizard();
    void hover() const;
};
class Spell : public Creature {/*class for spell with inhereted creature*/
private:
    string power;
public:
    Spell();
    Spell(string);
    void cast() const;
};
class Fight : public Creature {/*class for fights with inhereted creature*/
private:
    int fight;
public:
    Fight();
    Fight(int);
    void fights() const;
};