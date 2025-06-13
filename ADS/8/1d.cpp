#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void countingSortWords(vector<string>& arr, int index) {
    int n = arr.size();
    vector<string> output(n);
    vector<int> count(256, 0); /*array for counting the digits or frequencies*/
    for (const string& str : arr) {  
        char ch = index < str.size() ? str[index] : 0;  /*get character at index*/
        count[ch]++;
    }
    for (int i = 1; i < 256; i++) count[i] += count[i - 1];/*computing the frequencies*/
    for (int i = n - 1; i >= 0; i--) {  
        char ch = index < arr[i].size() ? arr[i][index] : 0;
        output[count[ch] - 1] = arr[i];
        count[ch]--;
    }
    arr = output;/*copying the array*/
}
void radixSortWords(vector<string>& arr) {
    int maxLen = 0;
    for (const auto& word : arr) maxLen = max(maxLen, (int)word.size());/*finding max words*/
    for (int i = maxLen - 1; i >= 0; i--) countingSortWords(arr, i);/*sorting by each character*/
}
int main() {
    vector<string> words = {"word", "category", "cat", "new", "news", "world", "bear", "at", "work", "time"};
    radixSortWords(words);
    for (const auto& word : words) cout << word << " ";
    return 0;
}
