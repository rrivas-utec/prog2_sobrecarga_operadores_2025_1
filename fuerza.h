//
// Created by rrivas on 4/07/2025.
//

#ifndef FUERZA_H
#define FUERZA_H

#include <cmath>
#include <ostream>

class Fuerza {
    double x = 0;
    double y = 0;
    double z = 0;
public:
    Fuerza() = default;
    Fuerza(const double x, const double y, const double z):x(x), y(y), z(z) {}
    Fuerza operator+(const Fuerza& other) const {
        Fuerza temp = *this;
        temp.x += other.x;
        temp.y += other.y;
        temp.z += other.z;
        return temp;
    }
    Fuerza operator*() const {
        Fuerza temp = *this;
        const double m = sqrt(temp.x * temp.x + temp.y * temp.y + temp.z * temp.z);
        temp.x /= m;
        temp.y /= m;
        temp.z /= m;
        return temp;
    }

    Fuerza operator^(const Fuerza& other) const {
        Fuerza temp;
        temp.x = this->y * other.z - this->z * other.y;
        temp.y = this->z * other.x - this->x * other.z;
        temp.z = this->x * other.y - this->y * other.x;
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fuerza& f) {
        os << "x: " << f.x << ", y: " << f.y << ", z: " << f.z;
        return os;
    }

};


#endif //FUERZA_H
