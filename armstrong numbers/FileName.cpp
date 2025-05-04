#include <iostream>
#include <cmath>

int16_t CountOfDigits(int32_t); //количество цифр
void InputNumber(int32_t&); //ввод числа
bool CheckNatural(int32_t); //проверка на натуральность
void FindingArmstrongNumbers(int32_t); //нахождение чисел Армстронга

int main()
{
	int32_t number{};
	InputNumber(number);
	CheckNatural(number);
	FindingArmstrongNumbers(number);
}

int16_t CountOfDigits(int32_t armstrong) //количество цифр
{
	int32_t counter{};
	while (armstrong > 0)
	{
		armstrong /= 10;
		++counter;
	}
	return counter;
}

void InputNumber(int32_t& number) //ввод числа
{
	std::cout << "Input your number: ";
	std::cin >> number;
}

bool CheckNatural(int32_t number) //проверка на натуральность
{
	return number > 0;
}

void FindingArmstrongNumbers(int32_t number) //нахождение чисел Армстронга
{
	int32_t trialNumber{1};
	while (trialNumber <= number)
	{
		int16_t countOfDigits{CountOfDigits(trialNumber)};
		int32_t saveNumber = trialNumber;
		int16_t digitOfTrialNumber{};
    	int32_t armstrongNumber{};
		while (trialNumber > 0)
		{
			digitOfTrialNumber = trialNumber % 10;
			trialNumber /= 10;
			armstrongNumber += pow(digitOfTrialNumber, countOfDigits);
		}
		trialNumber = saveNumber;
		if (trialNumber == armstrongNumber)
		{
			std::cout << armstrongNumber << " ";
			++trialNumber;
		}
		else
		{
			++trialNumber;
		}
	}
}