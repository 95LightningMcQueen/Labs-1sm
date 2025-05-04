#include <iostream>

int main()
{
	int32_t a{};
	int32_t b{};
	std::cout << "a:";
	std::cin >> a;
	std::cout << "b:";
	std::cin >> b;
	if (a == b)
	{
		return 0;
	}
	else if (a>b)
		{
		std::swap(a, b);
		}
}


























//void InputArray(int32_t*, int32_t);
//bool CheckSize(int32_t);


//bool CheckSize(int32_t size)
//{
//	return size > 0 && size < 101;
//}
//
//void InputArray(int32_t* array, int32_t size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		std::cin >> array[i];
//	}
//}