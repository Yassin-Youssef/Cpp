#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr){/*the function to sort*/
    int n = arr.size();/*finding the size of elements in array*/
    for (int i = 0; i < n - 1; i++){/*loop for the current index and element*/
        int minIndex = i;/*like a temporary minimum index until another is found if it will be found*/
        for (int j = i + 1; j < n; j++){/*the loop that will find the smallest element*/
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);/*swapping them*/
    }
}
void printArray(const vector<int>& arr){/*function to print the array*/
    for (int num : arr){
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "how many elements to be entered"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printArray(arr);
    selectionSort(arr);
    cout << "sorted array: "<<endl;
    printArray(arr);
}