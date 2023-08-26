#include <iostream>
using namespace std;

int main() {



    int n, fact = 1;


    cout << "Enter integer: ";
    cin >> n;
    if(n<0)
   { cout<< "invalid input";
    return 1; }

    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact;

    return 0;
}
