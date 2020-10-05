//Boolean 8
#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<< "A: ";
    cin >> a;

    cout<< "B: ";
    cin >> b;

    cout << ((a%2!=0) & (b%2!=0)) << endl;
    return 0;
}