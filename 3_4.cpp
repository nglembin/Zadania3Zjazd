#include <iostream>
using namespace std;

int main() {
    int wiersze;
    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> wiersze;

    for (int i = 0; i < wiersze; i++) {
        int wynik = 1;
        for (int j = 0; j <= i; j++) {
            cout << wynik << " "; 

            wynik = wynik * (i - j) / (j + 1);
        }
        cout << endl; 
    }

    return 0;
}