#include <iostream>
#include <vector>
using namespace std;
/*Function to partition the array into three parts using two pivots*/
void threeWayPartition(vector<int>& arr, int low, int high, int& mid1, int& mid2) {
    if (high - low + 1 < 2) return;  /*best case*/
    /*Ensuring that the first pivot is smaller than the second pivot*/
    if (arr[low] > arr[low + 1])
        swap(arr[low], arr[low + 1]);
    int pivot1 = arr[low], pivot2 = arr[low + 1];  /*First two elements as pivots*/
    int i = low + 2, lt = low + 2, gt = high;
    while (i <= gt) {
        if (arr[i] < pivot1)
            swap(arr[i++], arr[lt++]);  /*Move smaller elements to the left*/
        else if (arr[i] > pivot2)
            swap(arr[i], arr[gt--]);  /*Move larger elements to the right*/
        else
            i++;  /*Keep elements between pivot1 and pivot2 in place*/
    }
    /*Move the pivots to their correct positions*/
    swap(arr[low], arr[--lt]);
    swap(arr[low + 1], arr[++gt]);
    mid1 = lt;
    mid2 = gt;
}
/*Recursive function for modified Quicksort*/
void modifiedQuicksort(vector<int>& arr, int low, int high) {
    if (low >= high) return;  /*Base case*/

    int mid1, mid2;
    threeWayPartition(arr, low, high, mid1, mid2);  /*Partition the array using two pivots*/

    /*Recursively sort the three partitions*/
    modifiedQuicksort(arr, low, mid1 - 1);    /*Left partition */
    modifiedQuicksort(arr, mid1 + 1, mid2 - 1); /*Middle partition*/
    modifiedQuicksort(arr, mid2 + 1, high);   /*Right partition*/
}

int main() {
    vector<int> arr = {67, 8, 54, 12, 2, 33, 24, 85};
    modifiedQuicksort(arr, 0, arr.size() - 1);

    for (int num : arr)
        cout << num << " ";
}
