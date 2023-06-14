#pragma once
#include <ostream>
using namespace std;
/*
* \breif класс предок триада
*/
class Triad 
{
private:
/*
* \breif параметры класса и констрктор по умолчанию
*/
protected:
	int x;
	int y;
	int z;
	Triad() = default;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Triad(const int x, const double y, const double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Triad(Triad& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~Triad() = default;
	/*
	* \breif вывод триады
	*/
	friend ostream& operator<<(ostream& os, const Triad& obj);
	/*
	* \breif сеттеры чисел в триаде
	*/
	virtual void set_x(const int x) { this->x = x; }
	virtual void set_y(const int y) { this->y = y; }
	virtual void set_z(const int z) { this->z = z; }
	/*
	* \breif геттеры чисел и их суммы
	*/
	int get_x() const;
	int get_y() const;
	int get_z() const;
	int sum() const;
	/*
	* \breif операторы для сравнения триад
	*/
	friend bool operator>(const Triad& first, const Triad& second);
	friend bool operator<(const Triad& first, const Triad& second);
	friend bool operator==(const Triad& first, const Triad& second);
};