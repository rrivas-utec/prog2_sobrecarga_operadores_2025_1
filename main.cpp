#include <cmath>
#include <iostream>
#include <cmath>
#include <vector>

#include "racional.h"
#include "fuerza.h"
using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
    os << "[ ";
    for (const auto& i : v) {
        os << i << " ";
    }
    os << "]";
    return os;
}

ostream& operator<<(ostream& os, const vector<double>& v) {
    os << "[ ";
    for (const auto& i : v) {
        os << i << " ";
    }
    os << "]";
    return os;
}

vector<int>& operator++(vector<int>& v) {
    for (auto& i : v) {
        ++i;
    }
    return v;
}

vector<double>& operator^(vector<double>& v, const double exp) {
    for (auto& i : v) {
        i = std::pow(i, exp);
    }
    return v;
}

void ejemplo_impresion_vector() {
    const vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << v << endl;
}

void ejemplo_autoincremento_vector() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // ++v;
    // ++v;
    cout << ++++v << endl;

    int x = 10;
    cout << ++x << endl;
}

void ejemplo_potencia_vector() {
    vector<double> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << (v^2.5) << endl;

    int x = 10;
    cout << ++x << endl;
}

void ejemplo_clase_racional() {
    const Racional r1(5, 3);
    const Racional r2(1, 2);
    auto r3 = r1 + r2;
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;
    Racional r4;
    std::cout << "Ingrese en numero racional (n d): ";
    std::cin >> r4;
    std::cout << r4 << std::endl;
    ++r4;
    std::cout << r4 << std::endl;
    // Racional r5;
}

void ejemplo_fuerza() {
    const Fuerza f1(10, 5, 7);
    const Fuerza f2(4, 3, 2);
    const Fuerza f3 = f1 + f2;
    const auto u3 = *f3;
    const auto n1 = f1 ^ f3;
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;
    cout << u3 << endl;
    cout << n1 << endl;
}

int main() {
    // ejemplo_impresion_vector();
    // ejemplo_autoincremento_vector();
    // ejemplo_potencia_vector();
    // ejemplo_clase_racional();
    ejemplo_fuerza();
    return 0;
}
