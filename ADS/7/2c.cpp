#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
/*Function to partition the array into three parts using two random pivots*/
void threeWayRandomPartition(vector<int>& arr, int low, int high, int& mid1, int& mid2) {
    if (high - low + 1 < 2) return;  /*Base case*/
    /*Select two random indices within the range*/
    int idx1 = low + rand() % (high - low + 1);
    int idx2 = low + rand() % (high - low + 1);
    while (idx1 == idx2)/*making sure they different*/
        idx2 = low + rand() % (high - low + 1);
    if (arr[idx1] > arr[idx2])/*making sure it is smaller*/
        swap(idx1, idx2);
    /*Move the selected pivots to the beginning*/
    swap(arr[low], arr[idx1]);
    swap(arr[low + 1], arr[idx2]);
    int pivot1 = arr[low], pivot2 = arr[low + 1];
    int i = low + 2, lt = low + 2, gt = high;
    while (i <= gt) {
        if (arr[i] < pivot1)
            swap(arr[i++], arr[lt++]);  /*Move smaller elements to the left*/
        else if (arr[i] > pivot2)
            swap(arr[i], arr[gt--]);  /*Move larger elements to the right*/
        else
            i++;
    }
    /*Move the pivots to their correct positions*/
    swap(arr[low], arr[--lt]);
    swap(arr[low + 1], arr[++gt]);
    mid1 = lt;
    mid2 = gt;
}
/*Recursive function for randomized Quicksort*/
void randomizedQuicksort(vector<int>& arr, int low, int high) {
    if (low >= high) return;  /*Base case*/
    int mid1, mid2;
    threeWayRandomPartition(arr, low, high, mid1, mid2);
    randomizedQuicksort(arr, low, mid1 - 1);    /*Left partition*/
    randomizedQuicksort(arr, mid1 + 1, mid2 - 1); /*Middle partition*/
    randomizedQuicksort(arr, mid2 + 1, high);   /*Right partition*/
}
int main() {
    srand(time(0));
    vector<int> arr = {61, 8, 42, 21, 35, 77, 54, 98}; 
    randomizedQuicksort(arr, 0, arr.size() - 1);
    for (int num : arr)
        cout << num << " ";
}
