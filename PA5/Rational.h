#ifndef RATIONAL_H_
#define RATIONAL_H_

class Rational {
	public:
		Rational();
		Rational(int num, int denom);
		Rational(int wholeNumber);
		Rational(const Rational &a);
		friend Rational operator+(const Rational& num1);
	
	private:
		int num, denom;
};


#endif
