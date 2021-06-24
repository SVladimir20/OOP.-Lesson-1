#include <iostream>
using namespace std;
const size_t Size{ 10 };
class Stack
{
public:
	void reset()
	{
		for (size_t i = 0; i < Size; i++)
		{
			a[i] = 0;
		}
		length = 0;
	}
	bool push(int value)
	{
		if (length < Size)
		{
			a[length++] = value;
		}
		else
		{
			return false;
		}
		return true;
	}
	int pop()
	{
		if (length)
		{
			return a[length--];
		}
		else
		{
			cout << "Стек пуст";
		}
		return -1;
	}
	void print()
	{
		cout << "(";
		for (size_t i = 0; i < length; i++)
		{
			cout << a[i];
		}
		cout << ")" << endl;
	}

private:
	int a[Size];
	int length;

};
int main()
{
	setlocale(LC_ALL, "Russian");
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}