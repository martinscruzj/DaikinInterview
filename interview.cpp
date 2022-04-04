#include <iostream>

using namespace std;

int factorial(int n) {
    int result = 0;
    if (n > 0) {
        result = n * factorial(n - 1);
    } else if (n == 0) {
        result = 1;
    } else {
        cout << "Error can't get negative input factorial" << endl;
    }
    return result;
}

int main(int argc, char** argv) {
    int f = 0;
    f = factorial(0);
    cout << "0 factorial is " << f << endl;
    f = factorial(1);
    cout << "1 factorial is " << f << endl;
    f = factorial(4);
    cout << "4 factorial is " << f << endl;
    return 0;
}
