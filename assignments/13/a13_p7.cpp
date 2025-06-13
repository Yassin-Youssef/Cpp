/*
CH-230-A
a13_p7.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <cstring>
#include <exception>
using namespace std;
class OwnException: public exception {/*class for own exception*/
    public:
        const char* what() {
            return "OwnException\n";
        }
};
void test(int ex) {/*the testing for the outputs*/
    switch(ex) {/*8the switch for the cases*/
        case 1:{
            throw 'a';
            break;
        }
        case 2:{
            throw 12;
            break;
        }
        case 3:{
            throw true;
            break;
        }
        default:{
            throw OwnException();
            break;
        }
    }/*outputs that will be outputed*/
}
int main() {
	for (int i = 0; i < 4; i++){/*for loop for testing the functions*/
	    try {
	        test(i);
	    }
	    catch (OwnException& e) {
	        cerr << "caught in main " << e.what();
	    }	    
		catch (char e) {
	        cerr << "caught in main " << e << endl;
	    }
	    catch (int e) {
	        cerr << "caught in main " << e << endl;
	    }
	    catch (bool e) {
	        cerr << "caught in main " << e << endl;
	    }
	}/*test for each case*/
    return 0;
}