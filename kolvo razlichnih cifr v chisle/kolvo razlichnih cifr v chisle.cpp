#include <iostream>
void CountOfDifferentDigits(int32_t);
void InputNumber(int32_t&);

int main()
{
	int32_t chislo{};
	InputNumber(chislo);
	CountOfDifferentDigits(chislo);

	return 0;
}

void InputNumber(int32_t& number)
{
	std::cout << "input number: ";
	std::cin >> number;
}

void CountOfDifferentDigits(int32_t chislo)
{
	for (int32_t test{}; test <= 9; test++)
	{
		int32_t digit{};
		int32_t saveNumber{ chislo };
		int32_t counter{};
		while (chislo > 0)
		{
			digit = chislo % 10; 
			chislo /= 10;
			if (digit == test)
			{
				counter++;
			}
		}
		chislo = saveNumber;
		std::cout << "Count of number " << test << " is " << counter << '\n';
    }
}