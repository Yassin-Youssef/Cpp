#include <iostream>
using namespace std;
template <typename T>
int array_search(T arr[], int n, T el){/*el is element*/
    for (int i = 0; i<n; i++){
        if (arr[i] == el){
            return i;
        }
    }return -1;
}
class Complex{
    public:
        int real, imag;
        Complex(int r, int i) : real(r), imag(i) {}
            bool operator==(const Complex& other) const {
            return (real == other.real && imag == other.imag);
            }
};
int main(){
    int iarr[] = {10,5,6,2,4,12};/*6 numbers in the array*/
    double darr[] = {2.2,3.6,9.4,1.3,8.4};/*5 doubles in the array*/
    string sarr []= {"hello","world","welcome","back"};/*4 strings in array*/
    Complex carr[] = {Complex(5, 2), Complex(4, 9), Complex(3, 6)}; // Define an array of Complex objects
    cout<<"searching for 5 in array of int: "<<array_search(iarr, 6, 3)<<endl;
    cout<<"searching for 1.3 in array of doubles: "<<array_search(darr, 5, 1.3)<<endl;
    cout<<"searching for welcome in array of strings: "<<array_search(sarr, 4, string("welcome"))<<endl;
    cout << "searching for comples(5,2) " << array_search(carr, 3, Complex(5, 2)) << endl;
    return 0;
}