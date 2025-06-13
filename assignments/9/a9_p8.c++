/*
CH-230-A
a9_p8.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
void subtract_max(int* arr, int n, int& max) {/*function for finding max and subtracting*/
    max = arr[0];
    for (int i = 1; i < n; i++) {/*for loop for each number*/
        if (arr[i] > max) {/*checking if larger than the max or not*/
            max = arr[i];/*if it is then max is new arr[i]*/
        }
    }
    for (int i = 0; i < n; i++) {/*fro loop dor the subtractions*/
        arr[i] -= max;
    }
}
void deallocate(int* arr) {/*deallocating memory*/
    delete[] arr;
}
int main() {
    int n;/*declaring the number of integers*/
    cout << "number of integers to be entered\n";
    cin >> n;
    int* arr = new int[n];/*declaring array*/
    cout << "enter the integers\n";
    for (int i = 0; i < n; i++) {/*for loop for entering the numbers*/
        cin >> arr[i];
    }
    int max;/*declaring the max*/
    subtract_max(arr, n, max);/*calling function*/
    cout << "max value is " << max<< endl;/*output for the max*/
    cout << "after subtractions\n";
    for (int i = 0; i < n; i++) {/*output for the subtractions*/
        cout << arr[i] << "\n";
    }
    deallocate(arr);
    return 0;
}
