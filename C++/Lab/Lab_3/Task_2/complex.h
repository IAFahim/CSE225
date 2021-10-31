#ifndef CLION_COMPLEX_H
#define CLION_COMPLEX_H

class Complex {
public:
    Complex();

    Complex(double, double);

    Complex operator+(Complex) const;

    Complex operator*(Complex) const;

    bool operator!=(Complex) const;

    void Print() const;

private:
    double Real, Imaginary;
};

#endif //CLION_COMPLEX_H