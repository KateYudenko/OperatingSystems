#pragma once
#include "Number.h"

class Vector {
public:
	Number x, y;
	Vector(Number a, Number b) : x(a), y(b) {}
	Vector() : x(ZERO_NUMBER), y(ONE_NUMBER) {}

	Number radius();
	Number angle();

	Vector add(Vector v1, Vector v2);
	Vector subtract(Vector v1, Vector v2);
};

extern Vector ZERO_VECTOR(ZERO_NUMBER, ZERO_NUMBER);
extern Vector ONE_VECTOR(ONE_NUMBER, ONE_NUMBER);
