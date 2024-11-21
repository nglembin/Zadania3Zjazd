#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x;
    cout << "Podaj liczbe x: ";
    cin >> x;
    float y;
    cout << "Podaj liczbe y: ";
    cin >> y;

    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz = x / y;

    cout << setprecision(2);
    cout << "Suma: " << suma << endl;
    cout << "Roznica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Iloraz: " << iloraz << endl;

    return 0;
}