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
int gcd(double a, double b) {
    int x = (int)a;
    int y = (int)b;
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
//harsha
int lcm(double a, double b){
    // lcm(a,b)=(a*b)/gcd(a,b);
    return (a*b)/gcd(a,b);
}

void calculator() {
    cout << "\nWelcome to the Team Calculator!" << endl;
    double a, b;
    get_input(a, b);
    cout << "Values received: a = " << a << ", b = " << b << endl;


    // Show results for 4 implemented functions
    //Work done by harsha
    //Work done by swadeep
    cout<<"Calculator Functions"<<endl;
    cout<<"1.square_root"<<endl<<"2.factorial"<<endl<<"3.gcd"<<endl<<"4.lcm"<<endl<<"Choose a option"<<endl;
    int option;
    cout<<"Enter your option:";
    cin>>option;
    switch (option)

    {
    
    case 1:
    cout << "Square Root of " << a << ": " << square_root(a) << endl;
        break;
    case 3:
    cout<<"GCD of the "<<a<<"and"<<b<<"is:"<<gcd(a,b)<<endl;
    break;
    case 4:
        cout<<"LCM of the "<<a<<"and"<<b<<"is:"<<lcm(a,b)<<endl;
        break;
    
    default:cout<<"Invalid option";
        break;
    }
   
}

int main() {
    calculator();
    
    return 0;
}
