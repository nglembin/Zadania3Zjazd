#include <iostream>
using namespace std;

int main() {
    double A, B, C;

    cout << "Podaj wspolczynnik A: ";
    cin >> A;
    cout << "Podaj wspolczynnik B: ";
    cin >> B;
    cout << "Podaj wspolczynnik C: ";
    cin >> C;

    double delta = B * B - 4 * A * C;

    if (delta > 0) {
        double x1 = (-B + sqrt(delta)) / (2 * A);
        double x2 = (-B - sqrt(delta)) / (2 * A);
        cout << "Rownanie ma dwa rozwiazania: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -B / (2 * A);
        cout << "Rownanie ma jedno rozwiazanie: " << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "Rownanie nie ma rozwiazan w zbiorze liczb rzeczywistych." << endl;
    }

    return 0;
}
