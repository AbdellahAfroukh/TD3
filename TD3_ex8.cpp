#include <iostream>
using namespace std;
template <typename T>
T carre(T valeur) {
    return valeur * valeur;
}
int main() {
    int a = 5;
    int A = carre(a);
    cout << "Le carré de " << a << " est " << A <<endl;
    float b = 3.5;
    float B = carre(b);
    cout << "Le carré de " << b << " est " << B<< endl;

    return 0;
}