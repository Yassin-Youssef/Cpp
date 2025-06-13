#include <iostream>
#include <vector>
#include <algorithm>  /*for swap function*/
using namespace std;
/*Function to maintain the max-heap property*/
void maxHeapify(vector<int>& arr, int n, int i) {
    int largest = i;  /*Assume root is the largest*/
    int left = 2 * i + 1;  /*Left child index*/
    int right = 2 * i + 2; /*Right child index*/
    /*If left child exists and is greater than root then update largest*/
    if (left < n && arr[left] > arr[largest])
        largest = left;
    /*If right child exists and is greater than the largest so far then update largest*/
    if (right < n && arr[right] > arr[largest])
        largest = right;
    /*If largest is not the root then swap and continue heapifying*/
    if (largest != i) {
        swap(arr[i], arr[largest]); /*Swap root with the largest child*/
        maxHeapify(arr, n, largest); /*Recursively heapify the affected subtree*/
    }
}
/*Function to build a max-heap from an unsorted array*/
void buildMaxHeap(vector<int>& arr, int n) {
    /*Start from the last non-leaf node and apply heapify*/
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}
/*Heap Sort function*/
void heapSort(vector<int>& arr) {
    int n = arr.size();
    /*Step 1: Build the max heap*/
    buildMaxHeap(arr, n);
    /*Step 2 Extract elements one by one*/
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); /* Move the maximum element to the end*/
        maxHeapify(arr, i, 0); /*Restore max-heap property on the reduced heap*/
    }
}
/*Function to print an array*/
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}
/*Main function to test Heap Sort*/
int main() {
    vector<int> arr = {10, 3, 15, 7, 8, 23, 74, 18}; // Example input array
    cout << "Original Array: ";
    printArray(arr);
    heapSort(arr); // Sort the array
    cout << "Sorted Array: ";
    printArray(arr);
    return 0;
}
