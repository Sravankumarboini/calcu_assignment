#include <iostream>
using namespace std;

// Function to take input
void get_input(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}


double square_root(double a) {
    if (a < 0) {
        cout << "Error: Square root of a negative number is not defined for real numbers.\n";
        return -1;
    }

    double guess = a / 2.0; // Initial guess
    double epsilon = 0.00001; // Precision threshold

    // Newton-Raphson iteration
    while (abs(guess * guess - a) > epsilon) {
        guess = (guess + a / guess) / 2.0;
    }

    return guess;
}
// Function implementations
//implent without using inbuilt funtions
//arun implement squareroot function
double square_root(double a);
//shiva 
int factorial(double a);
//swadeep
int gcd(double a, double b);
//harsha
int lcm(double a, double b);

void calculator() {
    cout << "\nWelcome to the Team Calculator!" << endl;
    double a, b;
    get_input(a, b);
    cout << "Values received: a = " << a << ", b = " << b << endl;
    cout << "Square Root of " << a << ": " << square_root(a) << endl;

    // Show results for 4 implemented functions
   
}

int main() {
    calculator();
    
    return 0;
}
