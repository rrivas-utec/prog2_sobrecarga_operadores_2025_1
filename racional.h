//
// Created by rrivas on 3/07/2025.
//

#ifndef RACIONAL_H
#define RACIONAL_H

#include <numeric>
using namespace std;

inline void homogenizar(int& n, int& d) {
    auto g = gcd(n, d);
    n /= g;
    d /= g;
    if (d < 0) {
        d = -d;
        n = -n;
    }
}


class Racional {
    int n = 0;
    int d = 0;
public:
    Racional() = default;
    Racional(const int n, const int d):n(n), d(d) {
        homogenizar(this->n, this->d);
    }

    Racional operator+(const Racional& rhs) const {
        const int n = this->n*rhs.d+this->d*rhs.n;
        const int d = this->d*rhs.d;
        return Racional{n, d};
    }

    Racional& operator++() {
        n += this->d;
        return *this;
    }
    // friend ostream& operator<<(ostream& os, const Racional& rhs);
    [[nodiscard]] int get_numerador() const { return n; }
    [[nodiscard]] int get_denomidor() const { return d; }

    friend istream& operator>>(istream& in, Racional& racional);
    void set_numerador(const int value) { n = value; }
    void set_denomidor(const int value) { d = value; }
};

inline ostream& operator<<(ostream& out, const Racional& racional) {
    return out << racional.get_numerador() << "/" << racional.get_denomidor();
}

inline istream& operator>>(istream& in, Racional& racional) {
    in >> racional.n >> racional.d;
    homogenizar(racional.n, racional.d);
    return in;
}

// inline istream& operator>>(istream& in, Racional& racional) {
//     int n = 0, d = 0;
//     in >> n >> d;
//     racional.set_numerador(n);
//     racional.set_denomidor(d);
//     return in;
// }



#endif //RACIONAL_H
