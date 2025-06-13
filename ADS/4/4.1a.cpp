#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std;
void insertionSort(vector<int>& arr, int left, int right) {/*insert sort function*/
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void merge(vector<int>& arr, int left, int mid, int right) {/*merge function*/
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
void mergeSort(vector<int>& arr, int left, int right, int k) {/*merge sort function*/
    if (right - left + 1 <= k) {
        insertionSort(arr, left, right);
        return;
    }
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, k);
        mergeSort(arr, mid + 1, right, k);
        merge(arr, left, mid, right);
    }
}
void testSorting(vector<int> arr, int k) {/*measuring excution time*/
    auto start = chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arr.size() - 1, k);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Execution time for k = " << k << ": " << duration.count() << " seconds" << endl;
}
int main() {
    vector<int> best_case(10000), worst_case(10000), avg_case(10000);
    
    for (int i = 0; i < 10000; i++) {
        best_case[i] = i;          /*Sorted order*/
        worst_case[i] = 10000 - i; /*Reverse sorted*/
        avg_case[i] = rand() % 10000; /*Random order*/
    }
    
    vector<int> k_values = {2, 5, 10, 20, 50, 100};
    for (int k : k_values) {
        cout << "\nTesting for k = " << k << endl;
        testSorting(best_case, k);
        testSorting(worst_case, k);
        testSorting(avg_case, k);
    }
    return 0;
}
