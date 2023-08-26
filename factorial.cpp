#include <iostream>
using namespace std;

int main() {
    int m, factorial = 1;

    cout << "Enter integer: ";
    cin >> n;
    if(n<0)
   { cout<< "invalid input";
    return 1; }

    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}
