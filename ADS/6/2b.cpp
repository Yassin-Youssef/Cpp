#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
/*Function to swap two elements*/
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
/*Standard max-heapify function*/
void maxHeapify(vector<int> &arr, int i, int heapSize) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < heapSize && arr[left] > arr[largest])
        largest = left;
    if (right < heapSize && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, largest, heapSize);
    }
}
/*Function to build a max heap*/
void buildMaxHeap(vector<int> &arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, i, n);
    }
}
/*Bottom-Up Heap Sort helper function*/
void floatDown(vector<int> &arr, int index, int heapSize) {
    int current = index;
    /*Move element down to a leaf*/
    while (2 * current + 1 < heapSize) {
        int left = 2 * current + 1;
        int right = left + 1;
        int largest = left;

        if (right < heapSize && arr[right] > arr[left]) {
            largest = right;
        }

        arr[current] = arr[largest];
        current = largest;
    }
    /*Fix heap property by floating up if necessary*/
    while (current > index && arr[(current - 1) / 2] < arr[current]) {
        swap(arr[(current - 1) / 2], arr[current]);
        current = (current - 1) / 2;
    }
}
/*Bottom-Up Heap Sort*/
void bottomUpHeapSort(vector<int> &arr) {
    int n = arr.size();
    /*Step 1: Build max heap*/
    buildMaxHeap(arr);
    /*Step 2: Sort using bottom-up heap approach*/
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); /*Move max element to the end*/
        floatDown(arr, 0, i); /*Apply floatDown instead of maxHeapify*/
    }
}
/*Test function*/
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    bottomUpHeapSort(arr);
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
