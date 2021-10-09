#include "Square.h"
ostream& operator<<(ostream& os, const coord& obj)
{
	return os << "(" << obj.L_high.x << "," << obj.L_high.y << ")" << "\n"
		<< "(" << obj.L_low.x << "," << obj.L_low.y << ")" << "\n"
		<< "(" << obj.R_high.x << "," << obj.R_high.y << ")" << "\n"
		<< "(" << obj.R_low.x << "," << obj.R_low.y << ")";
}
ostream& operator<<(ostream& os, const Square& obj)
{
	return os << "***Вершины квадрата***" << "\n"
		<< obj.get_tops() << "\n"
		<< "Длинна сторон = " << obj.lenght << "\n"
		<< "Площадь квадрата = " << obj.sq() << "\n"
		<< "Периметр квадрата = " << obj.Per();
}
Square::Square(const double x, const double y, const double lenght)
{
	if (!(lenght > 0)) throw("Длинна не может быть отрицательной");
	this->first.L_high.x = x;
	this->first.L_high.y = y;
	this->lenght = lenght;
}
void Square::set_coord(const double x,const double y)
{
	this->first.L_high.x = x;
	this->first.L_high.y = y;
}
void Square::set_lenght(const double lenght)
{
	if (lenght > 0) throw("Длинна не может быть отрицательной");
	this->lenght = lenght;
}
double Square::Per() const
{
	return 4 * lenght;
}
double Square::sq() const
{
	return lenght * lenght;
}
coord Square::get_tops() const
{
	coord temp;
	temp.L_high.x = first.L_high.x;
	temp.L_high.y = first.L_high.y;
	temp.L_low.x = first.L_high.x;
	temp.L_low.y = first.L_high.y - lenght;
	temp.R_high.x = first.L_high.x + lenght;
	temp.R_high.y = first.L_high.y;
	temp.R_low.x = temp.R_high.x;
	temp.R_low.y = temp.L_low.y;
	return temp;
}
coord Square::coord_90() const
{
	coord temp;
	temp.L_high.x = first.L_high.x -lenght;
	temp.L_high.y = first.L_high.y;
	temp.L_low.x = temp.L_high.x;
	temp.L_low.y = temp.L_high.y - lenght;
	temp.R_high.x = first.L_high.x;
	temp.R_high.y = first.L_high.y;
	temp.R_low.x = first.L_high.x;
	temp.R_low.y = temp.L_low.y;
	return temp;
}
double Square::get_lenght() const
{
	return lenght;
}
Point Square::get_coord() const
{
	Point temp;
	temp.x = first.L_high.x;
	temp.y = first.L_high.y;
	return temp;
}
