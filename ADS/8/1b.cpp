#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bucketSort(vector<double>& arr) {
    int n = arr.size();
    vector<vector<double>> buckets(n);/*creating the buckets*/
    for (double num : arr) {/*inserting the elements*/
        int index = (num * n) / 1;
        if (index >= n) index = n - 1;
        buckets[index].push_back(num);
    }
    for (int i = 0; i < n; i++){/*sorting the elements*/
        sort(buckets[i].begin(), buckets[i].end());
    }
    /*concatenate the buckets*/
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (double num : buckets[i]) {
            arr[idx++] = num;
        }
    }
}
int main() {
    vector<double> arr = {0.9, 0.1, 0.6, 0.7, 0.6, 0.3, 0.1, 1.0};
    bucketSort(arr);
    cout << "sorted array"<<endl;
    for (double num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
