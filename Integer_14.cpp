//Integer 14
#include <iostream>

using namespace std;
int main() {
    int abc;
    int a, b, c;
    int cab;
    cout << "Enter number: "<< "\n";
    cin >> abc;
    a = abc / 100;
    b = (abc / 10) % 10;
    c = abc % 10;
    cab = c * 100 + a * 10 + b;
    cout << "New number: " << cab;
    return 0;
}
