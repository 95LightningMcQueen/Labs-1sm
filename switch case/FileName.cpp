#include <iostream>

int main()
{
	int32_t chislo = 0;
    std::cout << "vvedite chislo: ";
	std::cin >> chislo;

	switch (chislo)
	{
	case 1:
			std::cout << "it is 1";
			break;

	case 2:
		std::cout << "it is 2";
		break;

	case 5:
		std::cout << "it is 5";
		break;

	default:
		std::cout << "heze chto za chislo";
		break;
	}
	return 0;
}