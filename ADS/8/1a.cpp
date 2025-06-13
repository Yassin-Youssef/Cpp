#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void countingSort(vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());/*finding maximum value in array*/
    vector<int> count(maxVal + 1, 0); /*creating a count array*/ 
    for (int num : arr){/*counting the occurance of each element*/
        count[num]++;
    } 
    for (int i = 1; i <= maxVal; i++){/*cumilating the sum*/
        count[i] += count[i - 1];
    }
    vector<int> output(arr.size());/*create output array*/
    for (int i = arr.size() - 1; i >= 0; i--) {/*placing the elements into correct position*/
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    arr = output;/*copying original array*/
}
int main() {
    vector<int> arr = {9, 1, 6, 7, 6, 2, 1};
    countingSort(arr);
    for (int num : arr) cout << num << " ";
    return 0;
}
