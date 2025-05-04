#include <iostream>

int doFoo(int foo);

int main()
{
	doFoo;
}

int doFoo(int foo)
{
	int array[] = { 6, 45, 5, 0, 12, 22, -100 };
	int lenghtOfMassive = sizeof(array) / sizeof(array[0]);
	std::cout << "lenghtOfMassive: " << lenghtOfMassive;
	int max = array[0];
	int min = array[0];
	int sum = 0;
	for (int i = 0; i < lenghtOfMassive; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
		if (i < lenghtOfMassive)
		{
			sum = sum + array[i];
		}
	}
	std::cout << "\nMax element: " << max;
	std::cout << "\nMin element: " << min;
	std::cout << "\nSum of elements: " << sum;
}