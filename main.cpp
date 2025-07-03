#include <cmath>
#include <iostream>
#include <cmath>
#include <vector>
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

int main() {
    // ejemplo_impresion_vector();
    // ejemplo_autoincremento_vector();
    ejemplo_potencia_vector();
    return 0;
}
