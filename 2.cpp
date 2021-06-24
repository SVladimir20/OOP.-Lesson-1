#include <iostream>
#include <cstdint>
using namespace std;
class RGBA
{
public:
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
		: m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {}
	void Print()
	{
		cout << "Красный: " << +m_red << ", зелёный: " << +m_green << ", синий: " << +m_blue << ", альфа: " << +m_alpha;
	}

private:
	uint8_t m_red{ 0 };
	uint8_t m_green{ 0 };
	uint8_t m_blue{ 0 };
	uint8_t m_alpha{ 255 };
};
int main()
{
	setlocale(LC_ALL, "Russian");
	RGBA Control(255, 215, 0, 1);
	Control.Print();
	return 0;
}