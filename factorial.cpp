#include <iostream>
using namespace std;


int main() {



    int n, facto= 1;


    cout << "Enter integer: ";
    cin >> n;
    if(n<0)
   { cout<< "invalid input";
    return 1; }

    for(int i = 1; i <= n; ++i) {
        facto *= i;
    }
    cout << "Factorial of " << n << " = " << facto;

    return 0;
}
