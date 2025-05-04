#include <iostream>
#include <cmath>

int16_t CountOfDigits(int32_t); //���������� ����
void InputNumber(int32_t&); //���� �����
bool CheckNatural(int32_t); //�������� �� �������������
void FindingArmstrongNumbers(int32_t); //���������� ����� ����������

int main()
{
	int32_t number{};
	InputNumber(number);
	CheckNatural(number);
	FindingArmstrongNumbers(number);
}

int16_t CountOfDigits(int32_t armstrong) //���������� ����
{
	int32_t counter{};
	while (armstrong > 0)
	{
		armstrong /= 10;
		++counter;
	}
	return counter;
}

void InputNumber(int32_t& number) //���� �����
{
	std::cout << "Input your number: ";
	std::cin >> number;
}

bool CheckNatural(int32_t number) //�������� �� �������������
{
	return number > 0;
}

void FindingArmstrongNumbers(int32_t number) //���������� ����� ����������
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