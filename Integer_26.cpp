//Integer 26
# include <iostream>

using namespace std;
int main ()
{
    int a;
    int day;

    cout << "Enter number:  ";
    cin >> a;
    day=(a%7)+1;
    cout << "Number for week: " << day << endl;
    return 0;
}