#pragma once
#include <ostream>
using namespace std;
/*
* \brief структура для хранения координат точки
*/
struct Point
{
	double x;
	double y;
};
/*
* \breif структура для хранения координат вершин квадрата
*/
struct coord
{
	Point L_high;
	Point R_high;
	Point L_low;
	Point R_low;
	friend ostream& operator<<(ostream& os, const coord& obj);
};
/*
* \breif класс квадрат
*/
class Square
{
private:
	/*
	* \breif координаты точек и длинна стороны
	*/
	coord first;
	double lenght;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Square(const double x, const double y, const double lenght);
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Square(Square& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~Square() = default;
	/*
	* \breif перегруженный оператор вывода выводящий общую информацию о квадрате
	*/
	friend ostream& operator<<(ostream& os, const Square& obj);
	/*
	* \breif изменение координат верхней левой стороны
	*/
	void set_coord(const double x, const double y);
	/*
	* \breif изменение длинны стороны
	*/
	void set_lenght(const double lenght);
	/*
	* \breif геттеры параметров класса
	*/
	double get_lenght() const;
	Point get_coord() const;
	/*
	* \breif периметр
	*/
	double Per() const;
	/*
	* \breif площадь
	*/
	double sq() const;
	/*
	* \breif вершины углов квадрата
	*/
	coord get_tops() const;
	/*
	* \breif вершины квадрата повернутого на 90 градусов
	*/
	coord coord_90() const;

};