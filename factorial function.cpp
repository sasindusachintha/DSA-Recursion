#include <iostream>
using namespace std;

// Function to calculate factorial of a number recursively
int factorial(int n) {
    // Base case: factorial of 1 is 1
    if (n == 1) {
        return 1;
    } 
    // Recursive case: n * factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5; // Number to calculate factorial
    cout << num << "! = " << factorial(num) << endl; // Print factorial
    return 0;
}

