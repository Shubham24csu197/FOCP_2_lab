/* q1 :
 Butterfly pattern
//Create a program to print a butterfly pattern for a given size n. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;

    // Upper Half of the Butterfly
    for (int i = 1; i <= n; i++) {
        // Left Wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in between
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right Wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half of the Butterfly
    for (int i = n; i >= 1; i--) {
        // Left Wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in between
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right Wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

    q2 Array Reverse :
// Input an array of n elements and display it in reverse order 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display array in reverse order
    cout << "Reversed Array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

 q3 : 
 //Find Maximum and Minimum Input an array of n numbers and find the maximum and minimum elements.
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display results
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}

q4 : Sum and Average of Array Elements
//Calculate the sum and average of n numbers stored in an array.
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / n;

    // Display results
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}

q6 : Linear Search (Binary Searching) 
//Implement a program to search for a specific number in an array using linear search
#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the number to search
    cout << "Enter the number to search: ";
    cin >> key;

    // Linear Search Logic
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << "." << endl;
            found = true;
            break;  // Exit after finding the element
        }
    }

    if (!found) {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}


 q7 :Remove Duplicates
//Input an array of n numbers and remove all duplicate elements
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Remove Duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite the duplicate
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Reduce array size
                j--;  // Check the new element at position j
            }
        }
    }

    // Display array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


 q8 :Longest Consecutive Subsequence:
// Find the length of the longest subsequence of consecutive integers in an unsorted array.
#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

int longestConsecutiveSubsequence(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end()); // Sort the array

    int longest = 1, current = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1] + 1) {
            current++; // Increase count if consecutive
        } else if (nums[i] != nums[i - 1]) {
            current = 1; // Reset if not consecutive
        }
        longest = max(longest, current); // Update longest
    }

    return longest;
}

int main() {
    vector<int> nums = {1, 9, 3, 10, 2, 20};
    cout << "Longest consecutive subsequence length: " << longestConsecutiveSubsequence(nums) << endl;
    return 0;
}

q9 : Matrix Transpose
//Write a program to find the transpose of a matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input rows and columns
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    // Transpose logic
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    // Display transposed matrix
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}

 q10 : Matrix Multiplication
//Multiply two matrices of appropriate dimensions
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2] = {0};

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> mat1[i][j];

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> mat2[i][j];

    // Matrix multiplication
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];

    // Display result
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

 q11 : Diagonal Sum of a Matrix
//Calculate the sum of elements on the primary and secondary diagonals of a square matrix
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of square matrix
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];
    int primarySum = 0, secondarySum = 0;

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    // Calculate diagonal sums
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];                 // Primary diagonal
        secondarySum += matrix[i][n - 1 - i];       // Secondary diagonal
    }

    // If matrix size is odd, subtract middle element counted twice
    if (n % 2 == 1)
        secondarySum -= matrix[n / 2][n / 2];

    // Display results
    cout << "Primary Diagonal Sum: " << primarySum << endl;
    cout << "Secondary Diagonal Sum: " << secondarySum << endl;
    cout << "Total Diagonal Sum: " << primarySum + secondarySum << endl;

    return 0;
}


q12 : 
//Write a program to find the row in a 2D matrix that has the maximum sum of its elements
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int maxSum = -1e9, maxRow = 0;

    // Find row with maximum sum
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
            rowSum += matrix[i][j];

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    cout << "Row " << maxRow + 1 << " has the maximum sum: " << maxSum << endl;
    return 0;
}

 q13 : Search in a Sorted Matrix:
// Write a program to search for a target value in a row-wise and column-wise sorted matrix
#include <iostream>
using namespace std;

int main() {
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    // Input matrix
    cout << "Enter sorted matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    cout << "Enter target to search: ";
    cin >> target;

    // Start from top-right corner
    int i = 0, j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout << "Target found at (" << i << ", " << j << ")\n";
            return 0;
        } else if (matrix[i][j] > target) {
            j--; // Move left
        } else {
            i++; // Move down
        }
    }

    cout << "Target not found.\n";
    return 0;
}

 q14 : Boundary Elements of a Matrix
// Print all the boundary elements of a matrix
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    cout << "Boundary Elements:\n";

    // Print top row
    for (int j = 0; j < cols; j++)
        cout << matrix[0][j] << " ";

    // Print right column (excluding top and bottom corners)
    for (int i = 1; i < rows - 1; i++)
        cout << matrix[i][cols - 1] << " ";

    // Print bottom row (if more than one row)
    if (rows > 1)
        for (int j = cols - 1; j >= 0; j--)
            cout << matrix[rows - 1][j] << " ";

    // Print left column (excluding top and bottom corners)
    if (cols > 1)
        for (int i = rows - 2; i > 0; i--)
            cout << matrix[i][0] << " ";

    cout << endl;
    return 0;
}

q15 :  Find Saddle Point
// A saddle point is an element of the matrix that is the smallest in its row but the largest in its column. 
Write a program to find the saddle point.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int found = 0;  // Use integer instead of bool

    // Find Saddle Point
    for (int i = 0; i < rows; i++) {
        int minRow = matrix[i][0];
        int colIndex = 0;

        // Find minimum in current row
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        // Check if it's the largest in its column
        int isSaddle = 1;  // 1 means true, 0 means false
        for (int k = 0; k < rows; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) {
            cout << "Saddle Point: " << minRow << endl;
            found = 1;
        }
    }

    if (!found)
        cout << "No Saddle Point found.\n";

    return 0;
}

*/
