/*
CH-230-A
a9_p6.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
int myfirst(const int arr[], int n){/*first my first function for the integers*/
    for(int i=0; i<n; i++){/*for loop for reading the integers*/
        if(arr[i]>0 && arr[i]%2==0){/*if function for first positive and even integer*/
            return arr[i];/*returning the number in array*/
        }
    }return -1;
}

double myfirst(const double arr[], int n){/*funtion myfirst for the double*/
    for(int i=0; i<n; i++){/*for loop for reading the doubles*/
        if(arr[i]<0 && arr[i] == static_cast<int>(arr[i])){/*the if function for the negative and non fractional double*/
        /*staticcast is to find the actual number not a fraction*/
            return arr[i];
        }
    }return -1.1;
}
char myfirst(const char arr[], int n){/*myfirst function for the char*/
    for(int i=0; i<n; i++){/*same for loop*/
        char c = tolower(arr[i]);/*to make them all lowercase to make program easier*/
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){/*if function for first consonant*/
            return arr[i];
        }
    }return 0;
}
int main(){
    int intarr[] = {-9, 7, 5, -8, 6, -2, 1, 4};/*my choice and initializing of int array*/
    double doublearr[] = {3.9, -5.5, 8.4, 2.3, -6.5, -8.0, 3.0};/*same for double*/
    char chararr[] = {'a', 'i', 'O', 'y', 'u', 'x', 'b', 'c'};/*same for char*/
    /*the next 3 lines are calling function and the sizeof/sizeof is for calculating the 'n' shown in functions as its the count*/
    int intresult = myfirst(intarr, sizeof(intarr)/sizeof(intarr[0]));
    double doubleresult = myfirst(doublearr, sizeof(doublearr) / sizeof(doublearr[0]));
    char charresult = myfirst(chararr, sizeof(chararr) / sizeof(chararr[0]));
    cout << "the first positive and even integer is " << intresult << endl;
    cout << "the first negative and non fractional number is " << doubleresult << endl;
    cout << "the first consonant is " << charresult << endl;
    /*outputing values*/
    return 0;
}
