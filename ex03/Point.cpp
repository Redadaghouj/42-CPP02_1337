#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &obj) : _x(obj._x), _y(obj._y) {}

Point& Point::operator=(const Point &obj)
{
	if (this != &obj)
	{
		_x = obj._x;
		_y = obj._y;
	}
	return (*this);
}

Fixed Point::getX() const
{
	return (_x);
}

Fixed Point::getY() const
{
	return (_y);
}

void Point::setX(const Fixed &x)
{
	_x = x;
}

void Point::setY(const Fixed &y)
{
	_y = y;
}

Point::~Point() {}
