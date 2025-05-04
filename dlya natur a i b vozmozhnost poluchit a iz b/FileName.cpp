#include <iostream>

bool canGetNumber(int32_t, int32_t);

int main() 
{
	int32_t A{}, B{};
	std::cout << "Input number A: ";
	std::cin >> A;
	std::cout << "Input number B: ";
	std::cin >> B; 
	if (canGetNumber(A, B))
	{
		std::cout << "The number A can be obtained by crossing out the digits from the number B" << std::endl;
	}
	else
	{
		std::cout << "Number A cannot be obtained by deleting digits from number B" << std::endl; 
	}
	return 0;
}

bool canGetNumber(int32_t A, int32_t B) 
{
	while (A > 0) 
	{
		int32_t lastDigitA = A % 10; 
		bool found = false;
		while (B > 0) 
		{
			int lastDigitB = B % 10;
			B /= 10;
			if (lastDigitB == lastDigitA)
			{
				found = true;
				break;
			}
		}
		if (!found) 
		{
			return false; 
		}
		A /= 10;
	}
	return true;
}