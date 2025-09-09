#include <iostream>
#include <cmath>
#include <ostream>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : _value(obj._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _value(num * (1 << _fractionalBits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(roundf(num * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

int Fixed::getRawBits() const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat() const
{
	return (static_cast<float>(_value / static_cast<float>(1 << _fractionalBits)));
}

int Fixed::toInt() const
{
	return (_value / (1 << _fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
