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

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->_value > obj._value);
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->_value < obj._value);
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->_value >= obj._value);
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->_value <= obj._value);
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->_value == obj._value);
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->_value != obj._value);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	Fixed newObj(this->toFloat() + obj.toFloat());
	return (newObj);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed newObj(this->toFloat() - obj.toFloat());
	return (newObj);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	Fixed newObj(this->toFloat() * obj.toFloat());
	return (newObj);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
	Fixed newObj(this->toFloat() / obj.toFloat());
	return (newObj);
}

Fixed& Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	++_value;
	return (copy);
}

Fixed& Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	--_value;
	return (copy);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
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
	return (static_cast<float>(_value) / static_cast<float>(1 << _fractionalBits));
}

int Fixed::toInt() const
{
	return (_value / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
