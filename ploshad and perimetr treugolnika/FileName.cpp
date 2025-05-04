#include <iostream>
#include <cmath>

int main()
{
	double x1{}, x2{}, y1{}, y2{}, x3{}, y3{}, ab{}, bc{}, ac{}, p{}, s{}, per{};
	std::cout << "\ninput coordinates A: ";
	std::cin >> x1 >> y1;
	std::cout << "\ninput coordinates B: ";
	std::cin >> x2 >> y2;
	std::cout << "\ninput coordinates C: ";
	std::cin >> x3 >> y3;
	system("cls");
	std::cout << "\nPoint A (" << x1 << ',' << y1 << ')';
	std::cout << "\nPoint B (" << x2 << ',' << y2 << ')';
	std::cout << "\nPoint C (" << x3 << ',' << y3 << ')';
	ab = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	ab = sqrt(ab);
	bc = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	ac = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	p = (ab + bc + ac) / 2;
	s = sqrt(p*(p-ab)*(p-bc)*(p-ac));
	per = p * 2;
	std::cout << "\nS= " << s;
	std::cout << "\nP= " << per;
	return 0;
}