#include "arith.h"
ostream& operator<<(ostream& os, const arith& obj)
{
	return os << "Элемент прогресии = " << obj.element() << ";" << "\n" <<"Cумма прогресии = "<< obj.sum();
}
double arith::element() const
{
	return (first + dif * (n - 1));
}
double arith::sum() const
{
	return ((first + element()) * n) / 2;
}