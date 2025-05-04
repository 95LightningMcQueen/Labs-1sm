#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	double ab{}, bc{}, ac{}, alpha{}, per{}, s{};
	std::cout << "\ninput ab: ";
	std::cin >> ab;
	std::cout << "\ninput bc: ";
	std::cin >> bc;
	std::cout << "\ninput alpha between ab and bc: ";
	std::cin >> alpha;
	alpha = alpha * M_PI / 180.0;
	system("cls");
	std::cout << "\nab: " << ab;
	std::cout << "\nbc: " << bc;
	std::cout << "\nalpha: " << alpha;
	s = 0.5 * ab * bc * sin(alpha);
	std::cout << "\ns = " << s;
	ac = sqrt(ab * ab + bc * bc - 2 * ab * bc * cos(alpha));
	std::cout << "\nac = " << ac;
	per = ab + bc + ac;
	std::cout << "\np = " << per;
	return 0;
}