#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr, int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

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
    insertion_sort(arr, n);
    cout << "\nEnter the kth element to find from the array: ";
    cin >> k;
    cout << "Kth element is: " << arr[k - 1];
    cout << "\n\nName: Gaurav Navada\nReg.no.: 20BKT0128";
    return 0;
}
