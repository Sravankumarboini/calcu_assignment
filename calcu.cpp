#include <iostream>
using namespace std;

// Function to take input
void get_input(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

// Function implementations
//implent without using inbuilt funtions
//arun implement squareroot function
double square_root(double a);
//shiva 
int factorial(double a);

int factorial(double a){
    if(a == 0 || a==1){
        return 1;
    }
    return a*factorial(a-1);
}
//swadeep
int gcd(double a, double b);
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
    cout<<"Calculator Functions"<<endl;
    cout<<"1.square_root"<<endl<<"2.factorial"<<endl<<"gcd"<<endl<<"4.lcm"<<endl<<"Choose a option"<<endl;
    int option;
    cout<<"Enter your option:";
    cin>>option;
    switch (option)
    {
    case 3: cout<<"Factorial of the "<<a<<"is:"<<factorial(a)<<endl;
        break;
    case 4:
        cout<<"LCM of the"<<a<<"and"<<"b"<<"is:"<<lcm(a,b)<<endl;
        break;
    
    default:cout<<"Invalid option";
        break;
    }
   
}

int main() {
    calculator();
    return 0;
}
