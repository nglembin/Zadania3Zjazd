#include <iostream>
using namespace std;

int main() {
    char znak;
    cout << "Wpisuj znaki, jesli wpiszesz t to program sie zakonczy:" << endl;

    do {
        cin >> znak;
        cout << "Wprowadzony znak: " << znak << endl;
    } while (znak != 't');
    
    cout << "Program zakonczony." << endl;
    return 0;
}