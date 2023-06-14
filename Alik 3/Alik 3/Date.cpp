#include "Date.h"
bool Date::real_date(const int day, const int month, const int year) const
{
	if (day <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day>=0) {
		return true;
	}
	if (day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11) && day >=0) {
		return true;
	}
	if (day <= 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && day >=0) {
		return true;
	}
	if (day <= 28 && (year % 400 != 0 || (year % 4 != 0 && year % 100 == 0)) && day >=0) {
		return true;
	}
	throw ("Дата не настоящая!");
	return false;
}
Date::Date(const int day, const int mth, const int year)
{
	if (real_date(day, mth, year)) 
	{
		this->x = day;
		this->y = mth;
		this->z = year;
	}
}
void Date::set_x(const int day)
{
	if (real_date(day, y, z))
		this->x = day;
}
void Date::set_y(const int mth)
{
	if (real_date(x, mth, z))
		this->y = mth;
}
void Date::set_z(const int year)
{
	if (real_date(x, y, year))
		this->z = year;
}
bool operator<(const Date& first, const Date& second)
{
	return first.z < second.z || (first.y < second.y && first.z == second.z) || (first.x < second.x && first.y==second.y);
}
bool operator>(const Date& first, const Date& second)
{
	return first.z > second.z || (first.y > second.y&& first.z == second.z) || (first.x > second.x&& first.y == second.y);
}
bool operator==(const Date& first, const Date& second)
{
	return first.z == second.z && first.y == second.y && first.x == second.y;
}