#include <iostream>

void doMegaSravnenie(double, double, double, double);

int main()
{
	double a1{}, b1{}, a2{}, b2{};
	std::cout << "\ninput length of 1 figure: ";
	std::cin >> a1;
	std::cout << "\ninput width of 1 figure: ";
	std::cin >> b1;
	std::cout << "\ninput length of 2 figure: ";
	std::cin >> a2;
	std::cout << "\ninput length of 2 figure: ";
	std::cin >> b2;
	system("cls");
	std::cout << "\nlength of 1 figure: " << a1;
	std::cout << "\nwidth of 1 figure: " << b1;
	std::cout << "\n\nlength of 2 figure: " << a2;
	std::cout << "\nwidth of 2 figure: " << b2;
	doMegaSravnenie(a1,a2,b1,b2);
	return 0;
}

void doMegaSravnenie(double a1, double a2, double b1, double b2)
{
	if (a1 > a2 && b1 > b2)
	{
		std::cout << "\n\nmojna";
	}
	if (a2 > a1 && b2 > b1)
	{
		std::cout << "\n\nmojna";
	}
	if (a1 == a2)
	{
		std::cout << "\n\nchozabretto";
	}
}