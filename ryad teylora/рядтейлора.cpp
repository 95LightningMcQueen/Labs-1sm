#include <iostream>

int main()
{
	int32_t x{}, degree{};
	double summand{ 1 }, sum{ 1 }, epsilon{ 1 };
	std::cout << "Input x: ";
	std::cin >> x;
	std::cout << "\nInput epsilon: ";
	std::cin >> degree;
	for (size_t i{}; i < degree; ++i)
	{
		epsilon *= 0.1;
	}
	int32_t i{ 1 };
	while (abs(summand) > epsilon)
	{
		summand *= -1.0 * x * x / (i + 1) / (i + 2);
		sum += summand;
		i += 2;
	}
	std::cout << "\nsum of a series = " << sum << "\n\nsin(x)/x = " << sin(x) / x;
	return 0;
}