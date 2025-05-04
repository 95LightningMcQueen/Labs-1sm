#include <iostream>

void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
bool CkeckSize(int32_t);
int64_t CountSum(int32_t*, int32_t);

int main()
{
	const int32_t MAX_SIZE = 100;
	int32_t array[MAX_SIZE];
	int32_t size{};
	std::cout << "input size of array\n";
	std::cin >> size;
	if (CheckSize(size))
	{
		std::cout << "wrong size\n";
	}
	else
	{
		std::cout << "input elements of array\n";
		InputArray(array, size);
		system("cls");
		std::cout << "Array\n";
		OutputArray(array, size);
		std::cout << "sum of elements of array = " << CountSum(array, size);
	}
}

bool CheckSize(int32_t size)
{
	return size > 0 && size < 101;
}

void InputArray(int32_t* array, int32_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cin >> array[i];
	}
}

void OutputArray(int32_t* array, int32_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}
}

int64_t CountSum(int32_t* array, int32_t size)
{
	int64_t sum{};
	for (size_t i = 0; i < size; ++i)
	{
		sum += array[i];
	}
	return sum;
}