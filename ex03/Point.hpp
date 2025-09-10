#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &obj);
		Point &operator=(const Point &obj);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
		void setX(const Fixed &x);
		void setY(const Fixed &y);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif