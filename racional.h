//
// Created by rrivas on 3/07/2025.
//

#ifndef RACIONAL_H
#define RACIONAL_H

#include <numeric>
using namespace std;

class Racional {
    int n = 0;
    int d = 0;

    void homogenizar(int& n, int& d) {
        auto g = gcd(n, d);
        n /= g;
        d /= g;
        if (d < 0) {
            d = -d;
            n = -n;
        }
    }

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
};

#endif //RACIONAL_H
