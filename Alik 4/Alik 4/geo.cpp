#include "geo.h"
ostream& operator<<(ostream& os, const geo& obj)
{
	return os << "Элемент прогресии = " << obj.element() << ";" << "\n" << "Cумма прогресии = " << obj.sum();
}
bool geo::double_compare(const double a, const double b) const
{
	return abs(a - b) <= numeric_limits<double>::min();
}
double geo::element() const
{
	return first * pow(q, n - 1);
}
double geo::sum() const
{
	if (!double_compare(q, 1)) {
		return (first - element() * q) / (1 - q);
	}
	return n * first;
}