#include <iostream>

void InputNumber(double&);
//int16_t MathCounter(double);
void MathCounter(int32_t);
//void IsSimple(int32_t, int16_t&);

int main()
{
	double x{};
	int counter{};
	InputNumber(x);
	MathCounter(x);
	return 0;
}

void InputNumber(double &x)
{
	std::cout << "input x: ";
	std::cin >> x;
}

//int16_t MathCounter(double x)
//{
//	int32_t counter{};
//	while (x - static_cast<int32_t>(x) != 0)
//	{
//		x *= 10;
//		++counter;
//	}
//	std::cout << "counter of real numbers = " << counter;
//	return counter;
//}

void MathCounter(int32_t x)
{
	int16_t counter{}, digit{};
	while (x != 0)                      
	{
		digit = x % 10;
		x /= 10;
		if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
		{
			++counter;
		}
	}
	std::cout << "\ncounter of integer numbers = " << counter;
}

//void IsSimple(int32_t digit, int16_t& counter)
//{
//	if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
//	{
//		++counter;
//	}
//}