/*
CH-230-A
a10_p2  critter.h
yassin youssed
yyoussef@constructor.university
*/
#include <string> // defines standard C++ string class
/* First C++ class */
class Critter
{
	private:  // data members are private
		std::string name;
		int hunger;	
		int boredom;
		double height;
		int age;/*first added property*/
		std::string food;/*second added property*/
	public: // business logic methods are public
		// setter methods
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);
		void setAge(int newage);/*setter for age*/
        void setFood(std::string& newfood);/*setter for food*/
		// getter method
		int getHunger();
		// service method
		int getAge();/*getter for age*/
        std::string getFood();/*getter for food*/
		void print();
};
