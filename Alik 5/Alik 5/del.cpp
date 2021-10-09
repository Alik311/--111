#include "del.h"
ostream& operator<<(ostream& os, const complex& obj)
{
	return os << obj.num1 << " + " << obj.num2 << "i";
}
complex operator/(const complex& first, const complex& second)
{
	complex temp;
	temp.num1 = (first.num1 * second.num1 + first.num2 * second.num2) / (pow(second.num1, 2) + pow(second.num2, 2));
	temp.num2 = (first.num2 * second.num1 - first.num1 * second.num2) / (pow(second.num1, 2) + pow(second.num2, 2));
	return temp;
}
complex del::get_result() const
{
	return A/B;
}
complex del::no_exp() { return get_result(); }
complex del::with_thow() throw() { return get_result(); }
complex del::invalid_throw() throw(invalid_argument)
{
	if (double_compare(B.num2,0) && double_compare(B.num1,0))
		throw invalid_argument("нельзя делить на ноль !!!");
	return get_result();
}
complex del::empty() throw(empty_exeption)
{
	if (double_compare(B.num2, 0) && double_compare(B.num1, 0))
		throw empty_exeption();
	return get_result();
}
complex del::my_exp1() throw(my_exeption1)
{
	if (double_compare(B.num2, 0) && double_compare(B.num1, 0))
		throw my_exeption1("нельзя делить на ноль !!!");
	return get_result();
}
complex del::my_exp2() throw(my_exeption2)
{
	if (double_compare(B.num2, 0) && double_compare(B.num1, 0))
		throw my_exeption2("нельзя делить на ноль !!! B = ", B.num1);
	return get_result();
}
bool del::double_compare(const double value_a, const double value_b)
{
	return abs(value_a - value_b) <= numeric_limits<double>::min();
}