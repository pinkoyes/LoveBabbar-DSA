#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    int temp;
    for (int i=0; i<size; i+=2) {
        if (i+1 < size) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void displayArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "enter length of an array: ";
    cin >> n;

    // declaring array as (int arr[n]) is bad practice
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    swapAlternate(arr, n);
    displayArray(arr, n);
}