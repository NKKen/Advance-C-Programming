#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
   int n, rusult;
    cout << "Enter a non-negative number: ";
    cin >> n;

    rusult = factorial(n);
    cout << "Factorial of " << n << " is " << rusult; 
    return 0;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}