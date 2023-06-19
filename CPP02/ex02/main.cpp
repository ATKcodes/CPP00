#include "Fixed.hpp"
#include <iostream>

int main(void) {

	Fixed a(42.42f);
	Fixed b(21.21f);
	Fixed c;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "----------------------------------" << std::endl;

	c = a + b;
	std::cout << "a + b = " << c << std::endl;
	std::cout << "----------------------------------" << std::endl;

	c = a - b;
	std::cout << "a - b = " << c << std::endl;
	std::cout << "----------------------------------" << std::endl;

	c = a * b;
	std::cout << "a * b = " << c << std::endl;
	std::cout << "----------------------------------" << std::endl;

	c = a / b;
	std::cout << "a / b = " << c << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool gt = (a > b);
	std::cout << "a > b ? " << gt << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool gte = (a >= b);
	std::cout << "a >= b ? " << gte << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool lt = (a < b);
	std::cout << "a < b ? " << lt << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool lte = (a <= b);
	std::cout << "a <= b ? " << lte << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool eq = (a == b);
	std::cout << "a == b ? " << eq << std::endl;
	std::cout << "----------------------------------" << std::endl;

	bool neq = (a != b);
	std::cout << "a != b ? " << neq << std::endl;
	std::cout << "----------------------------------" << std::endl;

	std::cout << "a pre-increment: " << a << std::endl;
	std::cout << "a after pre-increment: " << ++a << std::endl;
	std::cout << "a post-increment: " << a++ << std::endl;
	std::cout << "a after post-increment: " << a << std::endl;
	std::cout << "----------------------------------" << std::endl;

	std::cout << "b pre-decrement: " << b << std::endl;
	std::cout << "b after pre-decrement: " << --b << std::endl;
	std::cout << "b post-decrement: " << b-- << std::endl;
	std::cout << "b after post-decrement: " << b << std::endl;
	std::cout << "----------------------------------" << std::endl;

	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

	return 0;
}
