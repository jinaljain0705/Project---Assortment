// Negative Elements in 1D Array
/*Develop a program that finds all the negative elements from a given 1D array.*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];  

    cout << "Enter the elements:";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "The array is:";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Negative elements in the array are:";
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "No negative elements found.";
    }
    cout << endl;
    return 0;
}
