//Integer 29
#include <iostream>
#include "cmath"
using namespace std;
int main() {
    int a, b, c, S, n;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    cout << "Enter c:" << endl;
    cin >> c;
    n = (b / c) * (a / c);
    S = a * b - n * sqrt(c);
    cout << "You can place " << n << " squares" << endl;
    cout << "Not used space = " << S;
    return 0;
}
