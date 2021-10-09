#pragma once
#include "Triad.h"
/*
* \breif класс наследник дата
*/
class Date : public Triad
{
private:
public:
	/*
	* \breif конструктор с параметрами
	*/
	Date(const int day, const int mth, const int year);
	/*
	* \breif унаследованный конструктор копирования
	*/
	Date(Date& other) : Triad(other) {}
	/*
	* \breif деструктор по умолчанию
	*/
	~Date() = default;
	/*
	* \breif сеттеры для даты
	*/
	void set_x(const int day) override;
	void set_y(const int mth) override;
	void set_z(const int year) override;
	/*
	* \breif проверка даты на её правильный ввод
	*/
	bool real_date(const int day, const int month, const int year) const;
	/*
	* \breif операторы сравнения дат
	*/
	friend bool operator<(const Date& first, const Date& second);
	friend bool operator>(const Date& first, const Date& second);
	friend bool operator==(const Date& first, const Date& sceond);
};