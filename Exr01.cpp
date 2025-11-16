#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

// 2. Recherche dans un set<int>
bool rechercherDansSet(const set<int>& s, int valeur) {
    return (s.find(valeur) != s.end());
}

// 3. Recherche avec 2 itérateurs
bool rechercherIterateurs(set<int>::const_iterator debut,
                          set<int>::const_iterator fin,
                          int valeur)
{
    for (auto it = debut; it != fin; ++it) {
        if (*it == valeur) return true;
    }
    return false;
}

// 4. Version template universelle
template <typename Iterateur, typename T>
bool rechercherTemplate(Iterateur debut, Iterateur fin, const T& valeur) {
    for (auto it = debut; it != fin; ++it) {
        if (*it == valeur) return true;
    }
    return false;
}

int main() {

    // 1. Création du set de 1 à 100
    set<int> s;
    for (int i = 1; i <= 100; i++) {
        s.insert(i);
    }

    // Exemple d'appel : vecteur de string
    vector<string> v = {"oui", "non", "peut-être"};
    cout << rechercherTemplate(v.begin(), v.end(), string("non")) << endl;

    // Exemple d'appel : liste d'entiers
    list<int> lst = {10, 20, 30, 40};
    cout << rechercherTemplate(lst.begin(), lst.end(), 30) << endl;

    // Exemple d'appel : tableau classique de float
    float tab[] = {1.5, 2.5, 3.5, 4.5};
    int taille = sizeof(tab) / sizeof(tab[0]);
    cout << rechercherTemplate(tab, tab + taille, 3.5f) << endl;

    return 0;
}
