#include <iostream>
using namespace std;

//Basic Function Questions
/*q1 : 
int findLargest(int Count, int numbers[]) {
    int max = numbers[0]; // Initialize max with the first element
    for (int i = 1; i < Count; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

// New function to find the maximum of two numbers
int maxNumber(int a, int b) {
    return (a > b) ? a : b; // Return the larger number
}

int main() {
    int numbers[] = {5, 10, 15, 20, 50}; // Example input
    int Count = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements
    cout << "Largest: " << findLargest(Count, numbers) << endl; // Output the result

    // Test the maxNumber function
    int a = 10, b = 20;
    cout << "Max Number: " << maxNumber(a, b) << endl; // Output the result of maxNumber
    return 0;
}
    
 //   q2 :
    #include <iostream>

using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) return -1; // Factorial is not defined for negative numbers
    if (n == 0) return 1; // Base case: 0! = 1
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply result by each number up to n
    }
    return result;
}

int main() {
    int number = 5; // Example input
    cout << "Factorial of " << number << " is: " << factorial(number) << endl; // Output the result
    return 0;
}

    //q3 :
    #include <iostream>
    using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Append it to reversed
        n /= 10;  // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

   cout << "Reversed number: " << reverseNumber(num) << std::endl;
    return 0;
}

//q4 :
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    n = abs(n); // Ensure n is positive to handle negative numbers

    while (n > 0) {
        sum += n % 10; // Extract the last digit and add to sum
        n /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
   cin >> num;

   cout << "Sum of digits: " << sumOfDigits(num) << std::endl;
    return 0;
}
    
   //q5 :
   #include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}

//q6:
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}

//q7:
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}

//Polymorphism-Function Overloading
//q8:
#include <iostream>
using namespace std;

// Overloaded print() function
void print(string text) {
    cout << "String: " << text << endl;
}

void print(int num) {
    cout << "Integer: " << num << endl;
}

void print(string text, int num) {
    cout << "String: " << text << ", Integer: " << num << endl;
}

int main() {
    print("Hello");
    print(42);
    print("Number", 99);
    return 0;
}

//q9:
#include <iostream>
using namespace std;

class Calculator {
public:
    // Sum of two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Sum of three doubles
    double sum(double a, double b, double c) {
        return a + b + c;
    }

    // Sum of one integer and one float
    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 5 and 10: " << calc.sum(5, 10) << endl;
    cout << "Sum of 1.1, 2.2, and 3.3: " << calc.sum(1.1, 2.2, 3.3) << endl;
    cout << "Sum of 7 and 2.5: " << calc.sum(7, 2.5f) << endl;

    return 0;
}
    
   //q10:
   #include <iostream>
using namespace std;

// Overloaded multiply() function
int multiply(int a, int b) {
    return a * b;
}

double multiply(int a, double b) {
    return a * b;
}

float multiply(float a, float b, float c) {
    return a * b * c;
}

int main() {
    cout << "Product of 4 and 5: " << multiply(4, 5) << endl;
    cout << "Product of 3 and 2.5: " << multiply(3, 2.5) << endl;
    cout << "Product of 1.1, 2.2, and 3.3: " << multiply(1.1f, 2.2f, 3.3f) << endl;

    return 0;
}

//q11:
#include <iostream>
using namespace std;

// Overloaded greet() functions
void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet();
    greet("Shubham");
    greet("Shubham", 18);
    return 0;
}
    
   //q12:
   #include <iostream>
using namespace std;

// Overloaded area() functions
int area(int side) { // Square
    return side * side;
}

int area(int length, int width) { // Rectangle
    return length * width;
}

double area(double radius) { // Circle
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of square (side 4): " << area(4) << endl;
    cout << "Area of rectangle (4x6): " << area(4, 6) << endl;
    cout << "Area of circle (radius 3): " << area(3.0) << endl;
    return 0;
}
    
//q13:
#include <iostream>
using namespace std;

// Overloaded concat() functions
string concat(string s1, string s2) {
    return s1 + s2;
}

string concat(int num, string s) {
    return to_string(num) + s;
}

int main() {
    cout << "Concatenation of \"Hello\" and \"World\": " << concat("Hello", "World") << endl;
    cout << "Concatenation of 42 and \" is the answer\": " << concat(42, " is the answer") << endl;
    return 0;
}
//q14:
#include <iostream>
#include <cmath> // For pow()
using namespace std;

// Overloaded power() functions
int power(int base, int exponent) {
    return pow(base, exponent);
}

double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;
    cout << "2.5^3 = " << power(2.5, 3) << endl;
    return 0;
}
    
    //Variable-length arguments
//q15:
#include <iostream>
#include <cstdarg> // Required for handling variable arguments
using namespace std;

int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Fetch each argument
    }

    va_end(args);
    return total;
}

int main() {
    cout << "Sum of 3, 5, 7: " << sum(3, 3, 5, 7) << endl;
    cout << "Sum of 10, 20, 30, 40: " << sum(4, 10, 20, 30, 40) << endl;
    return 0;
}
//q16:
#include <iostream>
#include <cstdarg>
using namespace std;

int findLargest(int count, ...) {
    va_list args;
    va_start(args, count);

    int largest = va_arg(args, int); // Start with the first argument
    for (int i = 1; i < count; i++) {
        int num = va_arg(args, int);
        if (num > largest)
            largest = num;
    }

    va_end(args);
    return largest;
}

int main() {
    cout << "Largest of (10, 25, 5, 40): " << findLargest(4, 10, 25, 5, 40) << endl;
    cout << "Largest of (3, 7, 9): " << findLargest(3, 3, 7, 9) << endl;
    return 0;
}
//q17:
#include <iostream>
#include <cstdarg>
using namespace std;

void concatStrings(int count, ...) {
    va_list args;
    va_start(args, count);

    string result = "";
    for (int i = 0; i < count; i++) {
        result += va_arg(args, const char*); // Fetch each string
    }

    va_end(args);
    cout << "Concatenated string: " << result << endl;
}

int main() {
    concatStrings(3, "Hello, ", "World", "!");
    concatStrings(4, "C++ ", "is ", "awesome", "!");
    return 0;
}
    //Recursive functions
//q18:
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    cout << "GCD of 48 and 18: " << gcd(48, 18) << endl;
    cout << "GCD of 100 and 25: " << gcd(100, 25) << endl;
    return 0;
}
//q19:
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Factorial of 7: " << factorial(7) << endl;
    return 0;
}
//q20:
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "6th Fibonacci number: " << fibonacci(6) << endl;
    cout << "8th Fibonacci number: " << fibonacci(8) << endl;
    return 0;
}
//q21:
#include <iostream>
using namespace std;

string reverseString(string str) {
    if (str.empty()) // Base case
        return "";
    return reverseString(str.substr(1)) + str[0]; // Recursive step
}

int main() {
    cout << "Reverse of 'hello': " << reverseString("hello") << endl;
    cout << "Reverse of 'world': " << reverseString("world") << endl;
    return 0;
}
//q22:
#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    cout << "Sum of first 5 natural numbers: " << sumOfNaturalNumbers(5) << endl;
    cout << "Sum of first 10 natural numbers: " << sumOfNaturalNumbers(10) << endl;
    return 0;
}
//q23 :
#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;
    cout << "5^4 = " << power(5, 4) << endl;
    return 0;
}
    //Passing Array & Reference to Functions
//q24:
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
//q25:
#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum of array elements: " << sumArray(arr, 5) << endl;
    return 0;
}
   */