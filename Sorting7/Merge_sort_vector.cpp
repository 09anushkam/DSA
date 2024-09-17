// Merge Sort 
// TC - O(nlogn), SC - O(n)
// Divide and Merge

// Striver's Code

#include <iostream>
#include <vector>
using namespace std;

void ip(vector<int>& arr) {
    for (int& elem : arr) {
        cin >> elem;
    }
}

void op(const vector<int>& arr) {
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

void mergeArrays(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    // [low...mid]
    // [mid+1...high]
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // lil unclear temp[i-low]
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeArrays(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    ip(arr);
    mergeSort(arr, 0, n - 1);
    op(arr);

    return 0;
}
