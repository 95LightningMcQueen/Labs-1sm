#include <iostream>

void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
bool CheckSize(int32_t);
const int32_t MAX_SIZE = 100;
int64_t CountSumElements(int32_t*, int32_t);
int64_t CountAverageSum(int32_t*, int32_t);
int64_t CountSumEvenElements(int32_t*, int32_t);
void ReplaceNegativeElement(int32_t*, int32_t);
void ShiftingElementsToTheLeft(int32_t*, int32_t);
void MergeSortedArray(int32_t*, int32_t, int32_t*, int32_t, int32_t*, int32_t&);
void CheckForOrder1(int32_t*, int32_t);
void CheckForOrder2(int32_t*, int32_t);
void FindUnsortedElement1(int32_t*, int32_t);
void FindUnsortedElement2(int32_t*, int32_t);

int main()
{
	int32_t array[MAX_SIZE];
	int32_t size{};
	std::cout << "Input size of array\n";
	std::cin >> size;
	if (!CheckSize(size))
	{
		std::cout << "Wrong size :c\n";
	}
		else
		{
			/*std::cout << "Input elements of array\n";
			InputArray(array, size);*/
			system("cls");
			/*std::cout << "\nArray: ";
			ReplaceNegativeElement(array, size);
			OutputArray(array, size);
			std::cout << "\n\nMiddle arifmetics of array is equal " << CountAverageSum(array, size) << '\n';
			std::cout << "\nSum of even elements of array is equal " << CountSumEvenElements(array, size) << '\n';
			ShiftingElementsToTheLeft(array, size);
			std::cout << "\nYour final array after shifting elements to the left: ";
			OutputArray(array, size);
			std::cout << '\n';
			system("pause");
			system("cls");*/

			int32_t array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE];
			int32_t size1{}, size2{}, mergedSize{};
			std::cout << "Input size of the first array:\n";
			std::cin >> size1;
			if (!CheckSize(size1))
			{
				std::cout << "Wrong size :c\n";
			}
				else
				{
					std::cout << "\nInput elements of the first array in sorted order:\n";
					InputArray(array1, size1);
				}
			std::cout << "\nInput size of the second array:\n";
			std::cin >> size2;
			if (!CheckSize(size2))
			{
				std::cout << "Wrong size :c\n";
			}
				else
				{
					std::cout << "\nInput elements of the second array in sorted order:\n";
					InputArray(array2, size2);
				}
			system("pause");
			system("cls");

			if (CheckSize(size1))
			{
				std::cout << "\nFirst array: ";
				OutputArray(array1, size1);
			}
				else
				{
				std::cout << "\nFirst size was an imposter\n";
				}
			if (CheckSize(size2))
			{
				std::cout << "\n\nSecond array: ";
				OutputArray(array2, size2);
			}
				else
				{
				std::cout << "\n\nSecond size was an imposter\n";
				}
			MergeSortedArray(array1, size1, array2, size2, mergedArray, mergedSize);
			std::cout << '\n';
			CheckForOrder1(array1, size1);
			CheckForOrder2(array2, size2);
		}
	return 0;
}

bool CheckSize(int32_t size)
{
	return size > 0 && size < MAX_SIZE;
}


void InputArray(int32_t* array, int32_t size)
{
	for (size_t i {}; i < size; ++i)
	{
		std::cin >> array[i];
	}
}


void OutputArray(int32_t* array, int32_t size)
{
	for (size_t i {}; i < size; ++i)
	{
		std::cout << array[i] << ' ';
	}
}


int64_t CountSumElements(int32_t* array, int32_t size)
{
	int64_t sum{};
	for (size_t i {} ; i < size; ++i)
	{
		sum += array[i];
	}
	return sum;
}


int64_t CountAverageSum(int32_t* array, int32_t size)
{
	return static_cast <double> (CountSumElements(array, size)) / size;
}


int64_t CountSumEvenElements(int32_t* array, int32_t size)
{
	int64_t sum {};
	for (size_t i {1}; i < size; i += 2)
	{
		sum += array[i];
	}
	return sum;
}


void ReplaceNegativeElement(int32_t* array, int32_t size)
{
	for (size_t i {}; i < size; ++i)
	{
		if (array[i] < 0)
		{
			array[i] = 0;
		}
	}
}


void ShiftingElementsToTheLeft(int32_t* array, int32_t size)
{
	int32_t k {};
	std::cout << "\nEnter from which position you want to shift the array to the left: ";
	std::cin >> k;
	int32_t counter {k - 1};
		if (k > 0)
		{
			if (k < 1 || k > size)
			{
				std::cout << "\nOh noooo, error";
			}
			int32_t i {k - 2};
				for (i; i < size - 1 && k >= 3; ++i)
				{
				array[i] = array[i + 1];
				}
		}
		else
		{
			std::cout << "Oh noooo, error";
		}
}


void MergeSortedArray(int32_t* array1, int32_t size1, int32_t* array2, int32_t size2, int32_t* mergedArray, int32_t& mergedSize)
{
	int32_t i {}, j {}, k {};
	while (i < size1 && j < size2)
	{
		if (array1[i] <= array2[j])
		{
			mergedArray[k++] = array1[i++];
		}
		else
		{
			mergedArray[k++] = array2[j++];
		}
	}
	while (i < size1)
	{
		mergedArray[k++] = array1[i++];
	}
	while (j < size2)
	{
		mergedArray[k++] = array2[j++];
	}
	mergedSize = k;
	std::cout << "\n\nMerged sorted array: ";
	OutputArray(mergedArray, mergedSize);
}


void CheckForOrder1(int32_t* array, int32_t size)
{
	for (int32_t i {1}; i < size - 1; ++i)
	{
		if (array[i] > array[i + 1])
		{
			FindUnsortedElement1(array, size);
		}
	}
}

void CheckForOrder2(int32_t* array, int32_t size)
{
	for (int32_t i{ 1 }; i < size - 1; ++i)
	{
		if (array[i] < array[i + 1])
		{
			FindUnsortedElement2(array, size);
		}
	}
}

void FindUnsortedElement1(int32_t* array, int32_t size)
{
	for (int32_t i {1}; i < size - 1; ++i)
	{
		if (array[i] > array[i + 1])
		{
			std::cout << "\nThe element on which the sorting of first array is broken: " << i + 2;
		}
	}
}


void FindUnsortedElement2(int32_t* array, int32_t size)
{
	for (int32_t i {1}; i < size - 1; ++i)
	{
		if (array[i] < array[i + 1])
		{
			std::cout << "\nThe element on which the sorting of second array is broken: " << i + 2;
		}
	}
}





/*for (int i = 0; i < mergedSize / 2; i++)
{
	std::swap(mergedArray[i], mergedArray[mergedSize - i - 1]);
}
std::cout << "\n\nMerged sorted array in descrending order: ";
OutputArray(mergedArray, mergedSize);*/