#include <iostream>
#include <cmath>

void InputNumber(int32_t&);
int64_t SumOfDigits(int32_t); // сумма цифр числа
int32_t CountAmountOfDigits(int32_t); // количество цифр числа
const int32_t MAX_SIZE = 1000;
void ArraySize(int32_t&);
void InputArray(int32_t*, int32_t);
int64_t SumOfArray(int32_t*, int32_t); // сумма элементов массива
int32_t IsFibonacci(int32_t);
int32_t SumOfFibonacciNumbers(int32_t); // сумма чисел Фибоначчи


int main()
{
    int32_t number{}, size{}, array[MAX_SIZE], numberFibonacci{};
    InputNumber(number);
    system("cls");
    std::cout << "\nYour Number: " << number;
    std::cout << "\n\nSum of digits: " << SumOfDigits(number);
    std::cout << "\n\nAmount of digits: " << CountAmountOfDigits(number);

    ArraySize(size);
    InputArray(array, size);
    std::cout<<"\nSum of elements of array: " << SumOfArray(array, size) << "\n\n";

    InputNumber(numberFibonacci);
    std::cout << "\nSum of Fibonacci numbers: " << SumOfFibonacciNumbers(numberFibonacci);
}

void InputNumber(int32_t& number)
{
    std::cout << "Input number: ";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "\nInput non-negative number!\n";
        InputNumber(number);
    }
}

int64_t SumOfDigits(int32_t number)
{
    if (number == 0)
    {
        return 0;
    }
    return (number % 10) + SumOfDigits(number / 10);
}

int32_t CountAmountOfDigits(int32_t number)
{
    if (number == 0)
    {
        return 0;
    }
    return 1 + CountAmountOfDigits(number / 10);
}

void ArraySize(int32_t& size)
{
    std::cout << "\n\nInput size of array: ";
    std::cin >> size;
    if (size <= 0 || size > 1000)
    {
        std::cout << "\nInput an array size more than 0!\n";
        ArraySize(size);
    }
}

void InputArray(int32_t* array, int32_t size)
{
    for (int32_t i = 0; i < size; ++i)
    {
        std::cout << "\nInput " << i + 1 << " element of array: ";
        std::cin >> array[i];
    }
}

int64_t SumOfArray(int32_t* array, int32_t size)
{
    if (size == 0)
    {
        return 0;
    }
    return array[size - 1] + SumOfArray(array, size - 1);
}

int32_t IsFibonacci(int32_t number)
{
    if (number <= 1)
    {
        return number;
    }
    return IsFibonacci(number - 1) + IsFibonacci(number - 2);
}

int32_t SumOfFibonacciNumbers(int32_t number)
{
    if (number <= 1)
    {
        return number;
    }
    return IsFibonacci(number) + SumOfFibonacciNumbers(number - 1);
}