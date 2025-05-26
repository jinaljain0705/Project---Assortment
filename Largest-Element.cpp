// Largest Element in 2D Array
/*Develop a program to find the largest element from a given 2D array.*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100];  

    cout << "Enter the elements of the array:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int largest = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}

