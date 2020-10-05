//Integer 22
# include <iostream>

using namespace std;
int main ()

{
    int a;
    int result;

    cout << "Enter number of seconds: ";
    cin >> a;
    result=a%3600;
    cout << "Number of seconds from 1 hour: " << result << endl;

    return 0;
}