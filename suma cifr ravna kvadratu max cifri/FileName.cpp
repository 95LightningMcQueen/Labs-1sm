#include <iostream>
#include <cmath>

int main()
{
	unsigned int i{}, k{};
	unsigned long long n{}, a{}, b{}, p{};
	do
	{
		std::cout << "" << '\n';
		std::cin >> a >> b;
	} 
	while (a > b);
	for (a, i = 0; a <= b; ++a)
	{
		p = a;//p-копия a
		for (n = a; n > 0; ++i)//i-количество цифр
		{
			n = n / 10;
		}
		k = (i / 2) + 1;
		if (i % 2)
		{
			k = (i / 2) + 1;//k-номер центральной цифры
		}
		else
		{
			std::cout << a << "number of digits is even" << '\n';
		}
		std::cout << "k equal " << k << '\n';
		std::cout << "i equal " << i << '\n';
	}
	return 0;
}