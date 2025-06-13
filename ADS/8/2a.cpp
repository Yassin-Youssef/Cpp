#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
/*function to get the digit at a specific place value*/
int getDigit(int num, int place) {
    return (num / place) % 10;
}
void msdRadixSort(vector<int>& arr, int left, int right, int place) {
    if (left >= right || place == 0) return; 
    vector<vector<int>> buckets(10);/*creating the buckets*/
    /*distributing the numbers to the buckets*/
    for (int i = left; i <= right; i++) {
        int digit = getDigit(arr[i], place);
        buckets[digit].push_back(arr[i]);
    }

    /*collecting sorted number*/
    int index = left;
    for (int i = 0; i < 10; i++) {
        if (!buckets[i].empty()) {
            /*copy back to the original*/
            for (int num : buckets[i]) {
                arr[index++] = num;
            }
            /*recursively sort this bucket*/
            if (buckets[i].size() > 1)
                msdRadixSort(arr, index - buckets[i].size(), index - 1, place / 10);
        }
    }
}
/*wrapper function for MSD Radix Sort*/
void radixSortMSD(vector<int>& arr) {
    if (arr.empty()) return;
    /*finding the max number*/
    int maxNum = *max_element(arr.begin(), arr.end());
    int highestPlace = pow(10, floor(log10(maxNum)));/*most significnt place view*/
    /*calling the recursive sorting function*/
    msdRadixSort(arr, 0, arr.size() - 1, highestPlace);
}
int main() {
    vector<int> arr = {335, 124, 546, 999, 221, 720, 135};
    radixSortMSD(arr);
    cout << "sorted array: "<<endl;
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
