#include <iostream>
#include "Point.hpp"

void reportPointInTriangle(const Point &a, const Point &b, const Point &c, const Point &point)
{
	std::cout << (bsp(a, b, c, point) ? "\t\tINSIDE" : "\tOUTSIDE") << std::endl;
}

int main()
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point inside(2, 2);
	std::cout << "Test 1 - Point inside (2, 2): ";
	reportPointInTriangle(a, b, c, inside);

	Point outside(10, 10);
	std::cout << "Test 2 - Point outside (10, 10): ";
	reportPointInTriangle(a, b, c, outside);

	Point vertexA(0, 0);
	std::cout << "Test 3 - Point on vertex A (0, 0): ";
	reportPointInTriangle(a, b, c, vertexA);

	Point onEdge(5, 0);
	std::cout << "Test 4 - Point on edge AB (5, 0): ";
	reportPointInTriangle(a, b, c, onEdge);

	return (0);
}
