#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
vector<int> generateRandomSequence(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
    }
    return arr;
}
vector<int> generateCaseA(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }
    return arr;
}
vector<int> generateCaseB(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    return arr;
}
int main(){
    int n;
    cout << "enter size of array "<<endl;
    cin >> n;
    vector<int> randomSeq = generateRandomSequence(n);
    cout << "random sequence";
    printArray(randomSeq);
    vector<int> caseA = generateCaseA(n);
    cout << "Case A: "<<endl;
    printArray(caseA);
    vector<int> caseB = generateCaseB(n);
    cout << "Case B: "<<endl;
    printArray(caseB);
    return 0;
}
/*Case A:
Selection Sort keeps swapping elements even if theyre already nearly sorted.
A sequence like this requires the algorithm to perform swaps for nearly every
element because the smallest element always seems to be further to the right.
Start with a random sequence that is not sorted, then shuffle but not in descending order*/
/*case B:
Selection Sort will detect that the smallest element is already at its correct position and
will not need to swap elements reducing the number of swaps
Start with an array that is already sorted in ascending order,
If you want to make it nearly sorted, you can perform a few trivial swaps that do not disturb the order significantly.*/
