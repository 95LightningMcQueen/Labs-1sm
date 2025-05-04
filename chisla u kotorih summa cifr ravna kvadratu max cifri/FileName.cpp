#include <iostream>

int64_t SumOfDigits(int32_t); 
int32_t MaxDigit(int32_t);
bool CheckTask(int32_t);

int main() 
{
	int32_t startingPoint{};
	int32_t finishPoint{};
	int32_t counter{};
	std::cout << "Starting point: ";
	std::cin >> startingPoint;
	std::cout << "Finish point: ";
	std::cin >> finishPoint;
	for (int32_t number = startingPoint; number <= finishPoint; ++number)
	{
		if (CheckTask(number))
		{
			++counter;
			std::cout << number << '\n';
		}
	}
	if (counter == 0)
	{
		std::cout << "there are no numbers\n";
	}
	return 0;
}

int64_t SumOfDigits(int32_t number) //сумма цифр 
{

	int32_t sumOfDigits{};
	while (number > 0)
	{
		sumOfDigits += number % 10;
		number /= 10;
	}
	return sumOfDigits;
}

int32_t MaxDigit(int32_t number) //функция, находящая максимальную цифру
{
	int32_t maxDigit{};
	while (number > 0)
	{
		if (number % 10 > maxDigit)
		{
			maxDigit = number % 10;
		}
		number /= 10;
	}
	return maxDigit;
}

bool CheckTask(int32_t number)
{
	int32_t maxNumber{MaxDigit(number)};
	return (maxNumber * maxNumber == SumOfDigits(number));
}