#include <iostream>
#include <stdexcept>   // Pour std::runtime_error
using namespace std;

int main() {
    bool calculEffectue = false;

    while (!calculEffectue) {
        try {
            int a, b;
            cout << "Saisir deux entiers (a b) : ";
            cin >> a >> b;

            // Vérifier si l'utilisateur a mal saisi
            if (!cin) {
                throw runtime_error("Erreur de saisie : entree invalide !");
            }

            // Exemple de calcul : division
            if (b == 0) {
                throw runtime_error("Erreur : division par zero !");
            }

            int resultat = a / b;

            cout << "Resultat = " << resultat << endl;

            // Si tout s'est bien passé
            calculEffectue = true;
        }
        catch (const exception& e) {
            // Afficher l’erreur
            cerr << "\nException : " << e.what() << endl;

            // STOP IMMEDIATEMENT après une exception
            cout << "Arret du programme suite a une erreur." << endl;
            return 1;  
        }
    }

    cout << "Calcul termine avec succes." << endl;
    return 0;
}
