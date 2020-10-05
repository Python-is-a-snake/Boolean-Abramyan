//Integer 16
#include <iostream>

using namespace std;
int main() {
    int abc;
    int acb;
    int a, b, c;
    cout << "Enter number: " << "\n";
    cin >> abc;
    a = abc / 100;
    b = (abc/10) % 10;
    c = abc % 10;
    acb = a * 100 + c * 10 + b;
    cout << "New number: " << acb;
    return 0;
}