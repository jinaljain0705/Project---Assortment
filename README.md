# Assortment
Program 1: Develop a program to find the largest element from a given 2D array.

Code:
```cpp
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
```
Output:
![LargestElement](https://github.com/jinaljain0705/DSA-with-C--/blob/Project---4/Output/Largest-Element.png)

Program 2: Develop a program that finds all the negative elements from a given 1D array.

Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int arr[100];  

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "The array is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Negative elements in the array are:" << endl;
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
```
Output:
![NegativeElement](https://github.com/jinaljain0705/DSA-with-C--/blob/Project---4/Output/Negetive-Element.png)

Program 3: Develop a program to print and find the sum of all elements of a given rows & column from a 2D array.

Code:
```cpp
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
```
Output:
![SumRowsColumn](https://github.com/jinaljain0705/DSA-with-C--/blob/Project---4/Output/Sum-Rows-Column.png)

Program 4:Develop a program to find the transpose matrix of given 2D array.

code:
```cpp
    #include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Transpose of a 2D Array" << endl;
    cout << "------------------------" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100], transpose[100][100]; 

    cout << "Enter elements of the matrix:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Original Matrix:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix:";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```
Output:
![Transpose](https://github.com/jinaljain0705/DSA-with-C--/blob/Project---4/Output/Transpose.png)
