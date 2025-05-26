// Sum of elements in Row & Column of 2D Array.
/*Develop a program to print and find the sum of all elements of a given rows & column from a 2D array.*/
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100]; 
    int sum = 0;

    cout << "Enter elements of the array:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            sum += arr[i][j]; 
        }
    }

    cout << "The 2D Array is:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The sum of all elements in the array is: " << sum << endl;
    return 0;
}
