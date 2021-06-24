#include <iostream>
#include <cmath>
using namespace std;
class Power
{
public:
	void set(double f, double s)
	{
		first = f;
		second = s;
	}
	void calculate()
	{
		cout << "Число " << first << " в степени " << second << " = " << pow(first, second);
	}

private:
	double first{ 11.15 };
	double second{ 19.97 };
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Power To_use;
	To_use.set(24.06, 20.21);
	To_use.calculate();
	return 0;
}