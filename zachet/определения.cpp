#include <iostream>

void InputNumber(double x)
{
	double x{};
	std::cout << "input x: ";
	std::cin >> x;
}

int16_t MathCounter(double x)
{
	int32_t counter{};
	while (x - static_cast<int32_t>(x) != 0)
	{
		x *= 10;
		++counter;
	}
	std::cout << "counter of real numbers = " << counter;
	return counter;
}

int16_t MathCounter (int32_t x)
{
	int16_t counter{}, digit{};
	while (x!=0)
	{
		digit = x % 10;
		x /= 10;
		IsSimple(digit, counter);
		++counter;
	}
	std::cout << "counter of integer numbers = " << counter;
	return counter;
}

void IsSimple (int32_t digit, int16_t& counter)
{
	if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
	{
		++counter;
	}
}