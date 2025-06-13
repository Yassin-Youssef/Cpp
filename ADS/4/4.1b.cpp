#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
void insertionSort(vector<int>& arr, int left, int right) {
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
void merge(vector<int>& arr, int left, int mid, int right) {
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
void mergeSort(vector<int>& arr, int left, int right, int k) {
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
void testSorting(vector<int> arr, int k, const string& case_type) {
    auto start = chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arr.size() - 1, k);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Execution time for k = " << k << " (" << case_type << "): " << duration.count() << " seconds" << endl;
}
int main() {
    int n = 10000;
    vector<int> best_case(n), worst_case(n), avg_case(n);
    
    for (int i = 0; i < n; i++) {
        best_case[i] = i;
        worst_case[i] = n - i;
        avg_case[i] = rand() % n;
    }

    vector<int> k_values = {2, 5, 10, 20, 50, 100, 200, 500, 1000};
    ofstream file("execution_times.csv");
    file << "k,best_case,worst_case,avg_case\n";

    for (int k : k_values) {
        auto start = chrono::high_resolution_clock::now();
        mergeSort(best_case, 0, n - 1, k);
        auto end = chrono::high_resolution_clock::now();
        double best_time = chrono::duration<double>(end - start).count();

        start = chrono::high_resolution_clock::now();
        mergeSort(worst_case, 0, n - 1, k);
        end = chrono::high_resolution_clock::now();
        double worst_time = chrono::duration<double>(end - start).count();

        start = chrono::high_resolution_clock::now();
        mergeSort(avg_case, 0, n - 1, k);
        end = chrono::high_resolution_clock::now();
        double avg_time = chrono::duration<double>(end - start).count();
        file << k << "," << best_time << "," << worst_time << "," << avg_time << "\n";
        cout << "k=" << k << " Best: " << best_time << "s Worst: " << worst_time << "s Avg: " << avg_time << "s\n";
    }
    file.close();
    return 0;
}
