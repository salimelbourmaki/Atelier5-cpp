#include <iostream>
using namespace std;

// Template pour calculer le carré d'une valeur de type quelconque
template <typename T>
T carre(T x) {
    return x * x;
}

int main() {
    // Tests avec différents types
    int a = 5;
    double b = 3.14;
    float c = 2.5f;

    cout << "Carre de " << a << " = " << carre(a) << endl;
    cout << "Carre de " << b << " = " << carre(b) << endl;
    cout << "Carre de " << c << " = " << carre(c) << endl;

    // Test direct
    cout << "Carre de 7 = " << carre(7) << endl;

    return 0;
}
