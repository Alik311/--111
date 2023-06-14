#include "Triad.h"
ostream& operator<<(ostream& os, const Triad& obj)
{
	return os << "(" << obj.x << "," << obj.y << "," << obj.z << ")";
}
int Triad::get_x() const { return x; }
int Triad::get_y() const { return y; }
int Triad::get_z() const { return z; }
int Triad::sum() const { return (z + y + z); }
bool operator>(const Triad& first, const Triad& second)
{
	return first.sum() > second.sum();
}
bool operator<(const Triad& first, const Triad& second)
{
	return first.sum() < second.sum();
}
bool operator==(const Triad& first, const Triad& second)
{
	return first.sum() == second.sum();
}