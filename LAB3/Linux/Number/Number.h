#pragma once

class Number {
public:
	double value;
	Number(double valueNum);
	Number();
	Number createNumber(double valueNum);

	Number add(Number a, Number b);
	Number subtract(Number a, Number b);
	Number multiply(Number a, Number b);
	Number divide(Number a, Number b);

	Number operator+(Number a);
	Number operator-(Number a);
	Number operator*(Number a);
	Number operator/(Number a);

	Number sqrtNum(Number a);
	Number asinNum(Number a);
};

extern Number ZERO_NUMBER(0);
extern Number ONE_NUMBER(1);
