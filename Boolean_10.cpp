//Boolean 10
# include <iostream>

using namespace std;

int main ()

{
    int A, B;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;
    bool answer((A%2 + B%2) == 1);
    cout << "Ровно одно из чисел A и B нечетное: " << boolalpha << answer << endl;
    return 0;
}
