//Integer15
#include <iostream>

using namespace std;
int main(){
    int abc;
    int bac;
    int a, b, c;
    cout << "Enter number: " << "\n";
    cin >> abc;
    a=abc/100;
    b=(abc/10)%10;
    c=abc%10;
    bac = b*100 + a*10 +c;
    cout << "New number: " << bac << "\n";
    return 0;
}