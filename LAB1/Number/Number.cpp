#include "Number.h"

Number::Number(double valueNum) {
    value = valueNum;
}
Number::Number() {
    value = 0;
}
Number Number::createNumber(double valueNum) {
    return Number(valueNum);
}

Number Number::add(Number a, Number b) {
    return Number(a.value + b.value);
}

Number Number::subtract(Number a, Number b) {
    return Number(a.value - b.value);
}

Number Number::multiply(Number a, Number b) {
    return Number(a.value * b.value);
}

Number Number::divide(Number a, Number b) {
    return Number(a.value / b.value);
}

Number Number::operator+(Number a) {
    return Number(this->value + a.value);
}
Number Number::operator-(Number a) {
    return Number(this->value - a.value);
}
Number Number::operator*(Number a) {
    return Number(this->value * a.value);
}
Number Number::operator/(Number a) {
    return Number(this->value / a.value);
}

Number Number::sqrt(Number a) {
    return Number(sqrt(a.value));
}
Number Number::asin(Number a) {
    return Number(asin(a.value) * 180 / 3.1415926);
}
