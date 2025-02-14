#include<iostream>
#include<cmath>
using namespace std;
int main(){
 //q1->
 
  /*string name,age;
   cout<<"enter your name and age"<<endl;
   cin >> name >> age;
   cout<<"your name = " << name <<" your are "<< age << " years old ";*/
   
   //q2->
  
  /* int a,b;
   cout<<"enter a  2 no"<<endl;
   cin>>a>>b;
   int sum;
   sum = a+b;
   cout<<sum;*/
   
   //q3->
   
   /*int a,b;
   cout<<"enter 2 no's: "<<endl;
   cin>>a>>b;
   char opr;
   cout<<"enter opr"<<endl;
   cin>>opr;
   switch(opr){
    case '+':
    cout<<a+b<<endl;
    break;
    
    case '/':
    cout<<a/b<<endl;
    break;
    
    case '*':
    cout<<a*b<<endl;
    break;
    
    case '-':
    cout<<a-b<<endl;
    break;
    
    default:
    cout<<"incorrect operator"<<endl;

   }*/

  //q4->
  
  /* float a,b;
   cout<<"Enter Two Number: "<<endl;
   cin>>a>>b;
   double  division;
   division =a/b;
   cout<< division;*/


   //q5->
   
   /* const double RATE_CONVERSION = 100.0; 

    
    double principal, rate, time, totalAmount, compoundInterest;
    int compoundingFrequency;

    
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time period in years: ";
    cin >> time;

    cout << "Enter the number of times interest i.e compounded per year: ";
    cin >> compoundingFrequency;

    
    rate = rate / RATE_CONVERSION;

    
    totalAmount = principal * pow((1 + rate / compoundingFrequency), compoundingFrequency * time);

    
    compoundInterest = totalAmount - principal;

    
    cout << "\nCompound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << totalAmount << endl;*/

    
  //q6->
  
  /*int width,length;
  cout<<"Enter length: "<<endl;
  cin>>length;
  cout<<"Enter width: "<<endl;
  cin>>width;
  int area,parameter;
  area=length*width;
  parameter=2*(length + width);
  cout<<"Area: "<<area<<endl<<"parameter: "<<parameter<<endl;*/


  //q7->

 /* int a,b,c;

  //cout<<"Before Swapping ->"<<endl;

  cout<<"ENTER NO A: "<<endl;
  cin>>a;
  
  cout<<"ENTER NO B: "<<endl;
  cin>>b;
  
  c=a;
  a=b;
  b=c;

  cout<<"After Swapping ->"<<endl;

  cout<<"A: "<<a<<endl;
  cout<<"B: "<<b<<endl;

  //Without using temporary variable

  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"A: "<<a<<endl<<"B: "<<b<<endl;*/


  //q8->
  
  
  /*string name;
  int age;
  
  cout<<"Enter your Name-> "<<endl;
  cin>>name; 

  cout<<"Enter your Age-> "<<endl;
  cin>>age;
  
  cout<<"Hello "<<name<<" you lived "<<age*365<<" days "<<endl;*/


  //q9->


  /*char a;
  cout<<"Enter a Character-> "<<endl;
  cin>> a;

  int b;
  cout<<"Enter a Integer-> "<<endl;
  cin>>b;

  float c;
  cout<<"Enter a Floating point no-> "<<endl;
  cin>>c;
  
  cout<<"CHAR               -----> "<<a<<endl<<"INTEGER            -----> "<<b<<endl<<"FLOATING_POINT_NO  -----> "<<c<<endl; */
  
 
  //q10->

   /*int num1, num2;
   
   cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    
    if (num2 != 0) {
        
        if (num1 % num2 == 0) {
            cout << num1 << " is a multiple of " << num2 << "." << endl;
        } else {
            cout << num1 << " is not a multiple of " << num2 << "." << endl;
        }
    } else {
        cout << "Division by zero is not allowed." << endl;
    }*/

   
   //q11->


    /*  int num, count = 0;

    cout << "Enter an integer: ";
    cin >> num;


    while (num != 0) {
        
        count += (num & 1);
        
        num >>= 1;
    }


    cout << "The number of 1 bits is: " << count << endl;*/


    //q12->

   /* double a, b, c;

    
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        if (b != 0) {        
            
            double root = -c / b;
            cout << "This is a linear equation. The root is: " << root << endl;
        } else {
            if (c == 0) {
                cout << "This is not an equation (0 = 0)." << endl;
            } else {
                cout << "No solution exists." << endl;
            }
        }
    } else {
        
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The equation has real and distinct roots: " << root1 << " and " << root2 << endl;
        } else if (discriminant == 0) {
          
            double root = -b / (2 * a);
            cout << "The equation has real and equal roots: " << root << endl;
        } else {
            
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "The equation has complex roots: ";
            cout << realPart << " + " << imaginaryPart << "i and ";
            cout << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }*/

   //q13->

   /* double balance = 1000.00; 
    int choice;
    double amount;

    do {
        
        cout << "\n=== ATM MENU ===" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > balance) {
                    cout << "Error: Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Error: Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: " << balance << endl;
                }
                break;

            case 2: 
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Error: Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                }
                break;

            case 3: 
                cout << "Your current balance is: " << balance << endl;
                break;

            case 4: 
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default: 
                cout << "Error: Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);*/


    //Q14->

    /*double side1, side2, side3;

    
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "The triangle is valid." << endl;

      
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral (all sides are equal)." << endl;
        } else {
            if (side1 == side2 || side1 == side3 || side2 == side3) {
                cout << "The triangle is Isosceles (two sides are equal)." << endl;
            } else {
                cout << "The triangle is Scalene (all sides are different)." << endl;
            }

        
            if ((side1 * side1 + side2 * side2 == side3 * side3) ||
                (side1 * side1 + side3 * side3 == side2 * side2) ||
                (side2 * side2 + side3 * side3 == side1 * side1)) {
                cout << "The triangle is also a Right Triangle." << endl;
            }
        }
    } else {
        cout << "The triangle is not valid." << endl;
    }*/


   //q15->
   /*
   int a, b, c, d;

    
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;


    int result = pow(a, b) + (c & d);

    
    cout << "The result of (a^b + c&d) is: " << result << endl;
}
 //16->
#include<iostream>
using namespace std;
bool oppositeSigns(int a, int b) {
    return (a ^ b) < 0;  
}

int main() {
    cout << boolalpha;
    cout << oppositeSigns(5, -3) << endl;  
    cout << oppositeSigns(-7, 2) << endl;  
    cout << oppositeSigns(4, 6) << endl;   
    cout << oppositeSigns(-2, -8) << endl; 
   
   return 0;
}
  //17->
   include <iostream>
using namespace std;

int divideInt(int dividend, int divisor) {
    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }

    int quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return quotient;
}


double divideFloat(double dividend, double divisor) {
    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }

    double quotient = 0;
    int integerPart = divideInt(static_cast<int>(dividend), static_cast<int>(divisor));
    double remainder = dividend - integerPart * divisor;

    quotient = integerPart + (remainder / divisor);

    return quotient;
}

int main() {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Integer Division" << endl;
    cout << "2. Floating-point Division" << endl;
    cin >> choice;

    if (choice == 1) {
        int dividend, divisor;
        cout << "Enter dividend: ";
        cin >> dividend;
        cout << "Enter divisor: ";
        cin >> divisor;

        int result = divideInt(dividend, divisor);
        cout << "Result: " << result << endl;
    } else if (choice == 2) {
        double dividend, divisor;
        cout << "Enter dividend: ";
        cin >> dividend;
        cout << "Enter divisor: ";
        cin >> divisor;

        double result = divideFloat(dividend, divisor);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
//18->
#include <iostream>
using namespace std;

int main() {
    int num, shift;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter the number of bits to shift: ";
    cin >> shift;

    int leftShiftResult = (num << shift) | (num >> (32 - shift));
    int rightShiftResult = (num >> shift) | (num << (32 - shift));

    cout << "Original Number: " << num << endl;
    cout << "Circular Left Shift (" << shift << " bits): " << leftShiftResult << endl;
    cout << "Circular Right Shift (" << shift << " bits): " << rightShiftResult << endl;

    return 0;
}
    //19->

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90) cout << "Grade: A\n";
    else if (marks >= 80) cout << "Grade: B\n";
    else if (marks >= 70) cout << "Grade: C\n";
    else if (marks >= 60) cout << "Grade: D\n";
    else cout << "Grade: F\n";

    return 0;
}
//20->

#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;
    do {
        cout << "\nMenu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4:
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error! Division by zero.\n";
                break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

//21->

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) cout << "Leap Year\n";
            else cout << "Not a Leap Year\n";
        } else cout << "Leap Year\n";
    } else cout << "Not a Leap Year\n";

    return 0;
}


---

//22->

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}


---

//23->

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) cout << "Prime Number\n";
    else cout << "Not a Prime Number\n";

    return 0;
}


---

//24->

#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= num);

    cout << "Factorial: " << fact << endl;
    return 0;
}


---

//25->

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int num, sum = 0, count = 0, minNum = INT_MAX, maxNum = INT_MIN;
    string input;

    while (true) {
        cout << "Enter an integer (or type 'exit' to stop): ";
        cin >> input;

        if (input == "exit") break;

        try {
            num = stoi(input);
            sum += num;
            count++;
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
        } catch (...) {
            cout << "Invalid input. Please enter an integer.\n";
        }
    }

    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Min: " << minNum << endl;
        cout << "Max: " << maxNum << endl;
    } else {
        cout << "No valid numbers entered.\n";
    }

    return 0;
}
//26->
#include <iostream>
using namespace std;

int main() {
    int n, count = 0, num = 2; 

    cout << "Enter the number of prime numbers to generate: ";
    cin >> n;

    cout << "The first " << n << " prime numbers are: ";

    while (count < n) {
        int isPrime = true; 
       
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            cout << num << " "; 
            count++;
        }
        num++;
    }

    cout << endl;
    return 0;
}
    //27->
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter the lower range: ";
    cin >> lower;
    cout << "Enter the upper range: ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; num++) {
        int sum = 0, temp = num, digits = 0;

        
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num; 
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

      
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
    //28->
    #include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1, guess, attempts = 5;

    cout << "Guess the number (1-100). You have " << attempts << " attempts.\n";
    while (attempts--) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Correct! You win!\n";
            return 0;
        }
        cout << (guess > number ? "Too high!\n" : "Too low!\n");
    }
    cout << "You lost! The number was " << number << ".\n";
    return 0;
}
    //29->
    #include <iostream>
using namespace std;

int main() {
    int num = 51; // Start checking from the first number greater than 50

    while (true) {
        if (num % 7 == 0) {
            cout << "The first number greater than 50 that is divisible by 7 is: " << num << endl;
            break; // Exit the loop once the number is found
        }
        num++; // Increment the number to check the next one
    }

    return 0;
}
    //30->
    #include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 500; i++) {
        if (i % 3 == 0 && i % 7 == 0) continue;
        if (sum + i > 1000) break;
        cout << i << " ";
        sum += i;
    }
    return 0;
}
    //31->
#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int reversed = reverseNumber(number);
    cout << "Reversed number: " << reversed << endl;

    if (isPalindrome(reversed)) {
        cout << "The reversed number is a palindrome." << endl;
    } else {
        cout << "The reversed number is not a palindrome." << endl;
    }

    return 0;
}
//32->
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;
    return 0;
}
//33->
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Number with high precision: " << setprecision(20) << num << endl;

    float checkNum = num; // Convert to float (single precision)
    double backToDouble = checkNum; // Convert back to double

    if (num == backToDouble) {
        cout << "The number can be exactly represented in binary.\n";
    } else {
        cout << "The number cannot be exactly represented in binary.\n";
    }

    return 0;
}
//34->
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Formatted 2D Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
//35->
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD: " << gcd(num1, num2) << endl;
    cout << "LCM: " << lcm(num1, num2) << endl;

    return 0;
}

   





