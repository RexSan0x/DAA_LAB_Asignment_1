#include <iostream>
#include <vector>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int>& arr, int right, int left, int pivot) {
    int l = left;
    int r = right - 1;
    while (1) {
        while (arr[l] < pivot) { l++; }
        while (r > 0 && arr[r] >= pivot) { r--; }
        if (l >= r) {
            break;
        }
        else {
            swap(&arr[l], &arr[r]);
        }
    }
    swap(&arr[l], &arr[right]);
    return l;
}
void quick_sort(vector<int>& arr, int left, int right) {
    if (right - left <= 0) return;
    else {
        int pivot = arr[right];
        int part = partition(arr, right, left, pivot);
        quick_sort(arr, part + 1, right);
        quick_sort(arr, left, part - 1);
    }
}

int main() {
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> arr;
    int p, k;
    for (int i = 0; i < n; i++) {
        cin >> p;
        arr.push_back(p);
    }
    quick_sort(arr, 0, n - 1);
    cout << "\nFinal Sorted array: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n\nName: Gaurav Navada\nReg.no.: 20BKT0128";
}
