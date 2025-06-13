#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>
using namespace std;
using namespace std::chrono;
/*a) Lomutos partition*/
int lomutoPartition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];  /*first element as a pivot*/
    int i = low;  /*Boundary for elements pivot*/

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);  /*swap smaller element to correct position*/
        }
    }
    swap(arr[low], arr[i]);  /*place pivot at its correct position*/
    return i;
}
/*quicksort using Lomutos partition*/
void quicksortLomuto(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = lomutoPartition(arr, low, high);
        quicksortLomuto(arr, low, pivotIndex - 1);
        quicksortLomuto(arr, pivotIndex + 1, high);
    }
}

/*b) Hoares Partition*/
/*hoare partition function*/
int hoarePartition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];  /*first element as pivot*/
    int i = low - 1, j = high + 1;

    while (true) {
        do {
            i++;  /*move right to find an element >= pivot*/
        } while (arr[i] < pivot);

        do {
            j--;  /*Move left to find an element <= pivot*/
        } while (arr[j] > pivot);

        if (i >= j) return j;  /*If pointers cross, return partition index*/
        swap(arr[i], arr[j]);  /*Swap misplaced elements*/
    }
}
/*Quicksort using Hoares partition*/
void quicksortHoare(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = hoarePartition(arr, low, high);
        quicksortHoare(arr, low, pivotIndex);
        quicksortHoare(arr, pivotIndex + 1, high);
    }
}

/* c) Median-of-Three Partitioning */
/*Function to find the median of three */
int medianOfThree(vector<int>& arr, int low, int high) {
    int mid = low + (high - low) / 2;

    /*Sort to get the median at high*/
    if (arr[mid] < arr[low]) swap(arr[mid], arr[low]);
    if (arr[high] < arr[low]) swap(arr[high], arr[low]);
    if (arr[mid] < arr[high]) swap(arr[mid], arr[high]);

    return arr[high];  /*Use median as pivot*/
}
/*Partition function using Median-of-Three*/
int medianPartition(vector<int>& arr, int low, int high) {
    int pivot = medianOfThree(arr, low, high);
    int i = low, j = high - 1;

    while (true) {
        while (arr[++i] < pivot);
        while (arr[--j] > pivot);
        if (i >= j) break;
        swap(arr[i], arr[j]);
    }
    swap(arr[i], arr[high]);  /*Place pivot in correct position*/
    return i;
}
/*Quicksort using Median-of-Three partition*/
void quicksortMedian(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = medianPartition(arr, low, high);
        quicksortMedian(arr, low, pivotIndex - 1);
        quicksortMedian(arr, pivotIndex + 1, high);
    }
}
/* d) Performance Measurement and Comparison */
/*Function to generate a random array*/
void generateRandomArray(vector<int>& arr) {
    for (int& num : arr) {
        num = rand() % 10000;  /*Random numbers between 0 and 9999*/
    }
}

/*Function to measure execution time*/
double measureExecutionTime(void (*quicksort)(vector<int>&, int, int), vector<int>& arr) {
    auto start = high_resolution_clock::now();
    quicksort(arr, 0, arr.size() - 1);
    auto stop = high_resolution_clock::now();
    return duration_cast<milliseconds>(stop - start).count();
}
int main() {
    const int TESTS = 100000;
    const int SIZE = 1000; 
    srand(time(0)); 
    double totalLomuto = 0, totalHoare = 0, totalMedian = 0;
    
    for (int i = 0; i < TESTS; i++) {
        vector<int> arr(SIZE);
        generateRandomArray(arr);
        vector<int> arr1 = arr, arr2 = arr, arr3 = arr;

        totalLomuto += measureExecutionTime(quicksortLomuto, arr1);
        totalHoare += measureExecutionTime(quicksortHoare, arr2);
        totalMedian += measureExecutionTime(quicksortMedian, arr3);
    }
    cout << "average Execution Times (over " << TESTS << " runs):" << endl;
    cout << "Lomuto Quicksort: " << (totalLomuto / TESTS) << " ms" << endl;
    cout << "Hoare Quicksort: " << (totalHoare / TESTS) << " ms" << endl;
    cout << "Median-of-Three Quicksort: " << (totalMedian / TESTS) << " ms" << endl;

    return 0;
}
